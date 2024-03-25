#include "lcd_dma.h"
#include "variants.h"  // for STM32_HAS_FSMC etc.
#include "lcd.h"
#include "spi.h"
#include "LCD_Init.h"
#include "w25qxx.h"
#include "delay.h"

#ifdef STM32_HAS_FSMC

// config for SPI Channel
#if W25Qxx_SPI == _SPI1
  #define W25QXX_SPI_NUM          SPI1
  #define W25QXX_SPI_DMA_RCC_AHB  RCC_AHBPeriph_DMA1
  #define W25QXX_SPI_DMA          DMA1
  #define W25QXX_SPI_DMA_CHANNEL  DMA1_Channel2
  #define W25QXX_SPI_DMA_IFCR_BIT 5
#elif W25Qxx_SPI == _SPI2
  #define W25QXX_SPI_NUM          SPI2
  #define W25QXX_SPI_DMA          DMA1
  #define W25QXX_SPI_DMA_RCC_AHB  RCC_AHBPeriph_DMA1
  #define W25QXX_SPI_DMA_CHANNEL  DMA1_Channel4
  #define W25QXX_SPI_DMA_IFCR_BIT 13
#elif W25Qxx_SPI == _SPI3
  #define W25QXX_SPI_NUM          SPI3
  #define W25QXX_SPI_DMA          DMA2
  #define W25QXX_SPI_DMA_RCC_AHB  RCC_AHBPeriph_DMA2
  #define W25QXX_SPI_DMA_CHANNEL  DMA2_Channel1
  #define W25QXX_SPI_DMA_IFCR_BIT 1
#endif

// SPI --> FSMC DMA (LCD_RAM)
// 16bits, SPI_RX to LCD_RAM
void LCD_DMA_Config(void)
{
  RCC->AHBENR |= W25QXX_SPI_DMA_RCC_AHB;                         // turn on the DMA clock
  Delay_ms(5);                                                   // wait for the DMA clock to stabilize
  W25QXX_SPI_DMA_CHANNEL->CPAR = (uint32_t)&W25QXX_SPI_NUM->DR;  // the peripheral address is: SPI-> DR
  W25QXX_SPI_DMA_CHANNEL->CMAR = (uint32_t)&LCD->LCD_RAM;        // the target address is LCD_RAM
  W25QXX_SPI_DMA_CHANNEL->CNDTR = 0;                             // DMA1, the amount of data transferred, temporarily set to 0
  W25QXX_SPI_DMA_CHANNEL->CCR = 0X00000000;                      // reset
  W25QXX_SPI_DMA_CHANNEL->CCR |= 0<<4;                           // read from peripheral
  W25QXX_SPI_DMA_CHANNEL->CCR |= 0<<5;                           // normal mode
  W25QXX_SPI_DMA_CHANNEL->CCR |= 0<<6;                           // peripheral address non-incremental mode
  W25QXX_SPI_DMA_CHANNEL->CCR |= 0<<7;                           // memory non-incremental mode
  W25QXX_SPI_DMA_CHANNEL->CCR |= LCD_DATA_16BIT<<8;              // peripheral data width is 16 bits
  W25QXX_SPI_DMA_CHANNEL->CCR |= LCD_DATA_16BIT<<10;             // memory data width 16 bits
  W25QXX_SPI_DMA_CHANNEL->CCR |= 1<<12;                          // medium priority
  W25QXX_SPI_DMA_CHANNEL->CCR |= 0<<14;                          // non-memory to memory mode
}

#define LCD_DMA_MAX_TRANS 65535  // DMA 65535 bytes one frame

// start DMA transfer from SPI->DR to FSMC
// the max bytes of one frame is LCD_DMA_MAX_TRANS 65535
static inline void lcd_frame_segment_display(uint16_t size, uint32_t addr)
{
  W25QXX_SPI_DMA_CHANNEL->CNDTR = size;

  W25Qxx_SPI_CS_Set(0);
  W25Qxx_SPI_Read_Write_Byte(CMD_FAST_READ_DATA);
  W25Qxx_SPI_Read_Write_Byte((uint8_t)((addr)>>16));
  W25Qxx_SPI_Read_Write_Byte((uint8_t)((addr)>>8));
  W25Qxx_SPI_Read_Write_Byte((uint8_t)addr);
  W25Qxx_SPI_Read_Write_Byte(0XFF);  // 8 dummy clock

  // set SPI to 16bit DMA rx only mode
  W25QXX_SPI_NUM->CR1 &= ~(1<<6);                                     // disable SPI
  W25QXX_SPI_NUM->CR2 |= 1<<0;                                        // enable SPI rx DMA
  W25QXX_SPI_NUM->CR1 |= LCD_DATA_16BIT<<11;                          // 16bit data frame
  W25QXX_SPI_NUM->CR1 |= 1<<10;                                       // rx only

  W25QXX_SPI_DMA_CHANNEL->CCR |= 1<<0;                                // enable dma channel
  W25QXX_SPI_NUM->CR1 |= 1<<6;                                        // enable SPI

  while ((W25QXX_SPI_DMA->ISR & (1<<W25QXX_SPI_DMA_IFCR_BIT)) == 0);  // wait for rx complete
  W25QXX_SPI_DMA_CHANNEL->CCR &= (uint32_t)(~(1<<0));
  W25QXX_SPI_DMA->IFCR |= (uint32_t)(1<<W25QXX_SPI_DMA_IFCR_BIT);     // clear ISR for rx complete
  W25Qxx_SPI_CS_Set(1);

  SPI_Protocol_Init(W25Qxx_SPI, W25Qxx_SPEED);                        // reset SPI clock and config again
}

void lcd_frame_display(uint16_t sx, uint16_t sy, uint16_t w, uint16_t h, uint32_t addr)
{
  uint32_t cur = 0;
  uint32_t segmentSize;
  uint32_t totalSize = w * h * (2 - LCD_DATA_16BIT);

  LCD_SetWindow(sx, sy, sx + w - 1, sy + h - 1);

  for (cur = 0; cur < totalSize; cur += LCD_DMA_MAX_TRANS)
  {
    segmentSize = (cur + LCD_DMA_MAX_TRANS) <= totalSize ? LCD_DMA_MAX_TRANS : totalSize - cur;
    lcd_frame_segment_display(segmentSize, addr + cur * (LCD_DATA_16BIT + 1));
  }
}

#endif  // STM32_HAS_FSMC
