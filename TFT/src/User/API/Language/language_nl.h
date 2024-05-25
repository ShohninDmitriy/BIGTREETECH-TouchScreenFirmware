#ifndef _LANGUAGE_NL_H_
#define _LANGUAGE_NL_H_

// config.ini Parameter Settings - Screen Settings and Feature Settings
#define STRING_LANGUAGE               "Dutch"
#define STRING_ADVANCED_OK            "Advanced OK"
#define STRING_COMMAND_CHECKSUM       "Command checksum"
#define STRING_EMULATED_M600          "Emulated M600"
#define STRING_EMULATED_M109_M190     "Emulated M109 / M190"
#define STRING_EVENT_LED              "Event LED"
#define STRING_FILE_COMMENT_PARSING   "File comment parsing"
#define STRING_ROTATED_UI             "Draai UI"
#define STRING_ACK_NOTIFICATION       "ACK notification style"
#define STRING_FILES_SORT_BY          "Sort files by"
#define STRING_FILES_LIST_MODE        "Files viewer List Mode"
#define STRING_FILENAME_EXTENSION     "Show filename extension"
#define STRING_FAN_SPEED_PERCENTAGE   "Fan Speed As Percentage"
#define STRING_PERSISTENT_INFO        "Aanhoudende statusinfo"
#define STRING_TERMINAL_ACK           "Laat ACK in Terminal zien"
#define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
#define STRING_MARLIN_FULLSCREEN      "Marlin mode in fullscreen"
#define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
#define STRING_MARLIN_TYPE            "Marlin Mode Type"
#define STRING_MOVE_SPEED             "Bewegingssnelheid(X Y Z)"
#define STRING_AUTO_LOAD_LEVELING     "Auto Load Leveling"
#define STRING_PROBING_Z_OFFSET       "Probing for Z offset"
#define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
#define STRING_PS_AUTO_SHUTDOWN       "Auto Power"
#define STRING_FIL_RUNOUT             "Filament sensor"
#define STRING_PL_RECOVERY            "Power loss recovery"
#define STRING_PL_RECOVERY_HOME       "Power Loss Recovery Homing"
#define STRING_BTT_MINI_UPS           "BTT UPS Support"
#define STRING_TOUCH_SOUND            "Touch sounds"
#define STRING_TOAST_SOUND            "Toast Notifications"
#define STRING_ALERT_SOUND            "Popups and Alerts"
#define STRING_HEATER_SOUND           "Heater notification"
#define STRING_LCD_BRIGHTNESS         "Brightness"
#define STRING_LCD_IDLE_BRIGHTNESS    "Idle brightness"
#define STRING_LCD_IDLE_TIME          "Idle timeout"
#define STRING_LCD_LOCK_ON_IDLE       "LCD lock on idle"
#define STRING_LED_ALWAYS_ON          "LED always ON"
#define STRING_KNOB_LED_COLOR         "Draaiknop LED"
#define STRING_KNOB_LED_IDLE          "Draaiknop LED inactief"
#define STRING_START_GCODE_ENABLED    "Start Gcode before print"
#define STRING_END_GCODE_ENABLED      "End Gcode after print"
#define STRING_CANCEL_GCODE_ENABLED   "Cancel Gcode"

// Machine Parameter Settings - Param Title (ordered by gcode)
#define STRING_STEPS_SETTING          "Stappen permm"
#define STRING_FILAMENT_SETTING       "Filament Diameter"
#define STRING_MAXACCELERATION        "Max Acceleratie"
#define STRING_MAXFEEDRATE            "Max Feed Rate"
#define STRING_ACCELERATION           "Acceleratie"
#define STRING_JERK                   "Jerk"
#define STRING_JUNCTION_DEVIATION     "Junction Deviation"
#define STRING_HOME_OFFSET            "Home Offset"
#define STRING_FWRETRACT              "FW Retraction"
#define STRING_FWRECOVER              "FW Retraction Recover"
#define STRING_RETRACT_AUTO           "Auto Firmware Retract"
#define STRING_HOTEND_OFFSET          "Offset 2nd Nozzle"
#define STRING_HOTEND_PID             "Hotend PID"
#define STRING_BED_PID                "Bed PID"
#define STRING_STEALTH_CHOP           "TMC StealthChop"
#define STRING_INPUT_SHAPING          "Input Shaping"
#define STRING_DELTA_CONFIGURATION    "Delta Configuration"
#define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
#define STRING_DELTA_DIAGONAL_ROD     "Diagonal Rod Trim"
#define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
#define STRING_PROBE_OFFSET           "Probe Offset"
#define STRING_LIN_ADVANCE            "Linear Advance"
#define STRING_CURRENT_SETTING        "Driver stroom (mA)"
#define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
#define STRING_BUMP_SENSITIVITY       "TMC bump sensitiviteit"
#define STRING_MBL_OFFSET             "MBL Offset"

// Machine Parameter Settings - Param Attributes (ordered by gcode)
#define STRING_PRINT_ACCELERATION     "Afdruk Acceleratie"
#define STRING_RETRACT_ACCELERATION   "Retract Acceleratie"
#define STRING_TRAVEL_ACCELERATION    "Travel Acceleratie"
#define STRING_RETRACT_LENGTH         "Retract length"
#define STRING_RETRACT_SWAP_LENGTH    "Retract swap length"
#define STRING_RETRACT_FEEDRATE       "Retract feedrate"
#define STRING_RETRACT_Z_LIFT         "Z lift on retraction"
#define STRING_RECOVER_LENGTH         "Extra recover length"
#define STRING_SWAP_RECOVER_LENGTH    "Extra recover swap length"
#define STRING_RECOVER_FEEDRATE       "Recover feedrate"
#define STRING_SWAP_RECOVER_FEEDRATE  "Swap recover feedrate"

// Save / Load
#define STRING_SAVE                   "Bewaren"
#define STRING_RESTORE                "Herstellen"
#define STRING_RESET                  "Reset"
#define STRING_EEPROM_SAVE_INFO       "Sla printer instellingen op naar EEPROM?"
#define STRING_EEPROM_RESTORE_INFO    "Herlaad instellingen van de EEPROM?"
#define STRING_EEPROM_RESET_INFO      "Reset EEPROM naar de standaard printer instellingen?"
#define STRING_SETTINGS_SAVE          "Save settings"
#define STRING_SETTINGS_RESTORE       "Herstel instellingen"
#define STRING_SETTINGS_RESET         "Reset instellingen"
#define STRING_SETTINGS_RESET_INFO    "Reset alle instellingen aar de standaard waardes?"
#define STRING_SETTINGS_RESET_DONE    "Reset van alle instellingen is succesvol gelukt.\nHerstart alstublieft het apparaat."

// Navigation Buttons
#define STRING_PAGE_UP                "Blz omhoog"
#define STRING_PAGE_DOWN              "Blz omlaag"
#define STRING_UP                     "Omhoog"
#define STRING_DOWN                   "Omlaag"
#define STRING_NEXT                   "Volgende"
#define STRING_BACK                   "Terug"

// Value Buttons
#define STRING_INC                    "Verhogen"
#define STRING_DEC                    "Verlagen"
#define STRING_LOAD                   "Laden"
#define STRING_UNLOAD                 "Lossen"
#define STRING_ON                     "AAN"
#define STRING_OFF                    "UIT"
#define STRING_AUTO                   "AUTO"
#define STRING_SMART                  "SLIM"
#define STRING_SLOW                   "Traag"
#define STRING_NORMAL                 "Normaal"
#define STRING_FAST                   "Snel"
#define STRING_ZERO                   "Zero"
#define STRING_HALF                   "Half"
#define STRING_FULL                   "Volledig"
#define STRING_CUSTOM                 "Aangepast"
#define STRING_CLEAR                  "Clear"
#define STRING_DEFAULT                "Standaard"

// Action Buttons
#define STRING_START                  "Start"
#define STRING_STOP                   "Stop"
#define STRING_PAUSE                  "Pauze"
#define STRING_RESUME                 "Hervatten"
#define STRING_INIT                   "Init"
#define STRING_DISCONNECT             "Loskoppelen"
#define STRING_SHUT_DOWN              "Uitschakelen"
#define STRING_FORCE_SHUT_DOWN        "Forceer Afsluiten"
#define STRING_EMERGENCYSTOP          "NOODSTOP"
#define STRING_PREHEAT                "Voorverwarmen"
#define STRING_PREHEAT_BOTH           "Beide"
#define STRING_COOLDOWN               "Afkoelen"

// Dialog Buttons
#define STRING_CONFIRM                "Bevestig"
#define STRING_CANCEL                 "Afbreken"
#define STRING_WARNING                "Waarschuwing"
#define STRING_CONTINUE               "Verder"
#define STRING_CONFIRMATION           "Weet u het zeker?"

// Process Status
#define STRING_STATUS                 "Status"
#define STRING_READY                  "Gereed"
#define STRING_BUSY                   "In verwerking ,wacht aub..."
#define STRING_LOADING                "Opladen..."
#define STRING_UNCONNECTED            "Geen printer gekoppeld!"
#define STRING_LISTENING              "TFT in Listening Mode!"

// Process Info
#define STRING_INFO                   "Info"
#define STRING_INVALID_VALUE          "Geen correcte waarde/s voorzien!"
#define STRING_TIMEOUT_REACHED        "Time-out bereikt!"
#define STRING_DISCONNECT_INFO        "De printer kan nu door de computer bestuurd worden!"
#define STRING_SHUTTING_DOWN          "Afsluiten..."
#define STRING_WAIT_TEMP_SHUT_DOWN    "Wacht tot de temperatuur van de spuitkop lager dan %d℃ is" // Wait for the temperature of hotend to be lower than 50℃
#define STRING_POWER_FAILED           "Verder met printen?"
#define STRING_PROCESS_COMPLETED      "Process voltooid!"
#define STRING_PROCESS_ABORTED        "Process geannuleerd!"

// TFT Media, Onboard Media, Filament Runout Process Commands / Status / Info
#define STRING_TFT_SD                 "TFT SD"
#define STRING_TFT_SD_INSERTED        "Kaart geplaatst"
#define STRING_TFT_SD_REMOVED         "Kaart verwijdert"
#define STRING_TFT_SD_NOT_DETECTED    "No SD card detected!"
#define STRING_TFT_SD_READ_ERROR      "SD card leesfout!"
#define STRING_TFT_USB                "TFT USB"
#define STRING_TFT_USB_INSERTED       "USB disk geplaatst"
#define STRING_TFT_USB_REMOVED        "USB disk verwijdert"
#define STRING_TFT_USB_NOT_DETECTED   "No USB disk detected!"
#define STRING_TFT_USB_READ_ERROR     "USB disk leesfout!"
#define STRING_ONBOARD_SD             "Onboard SD"
#define STRING_ONBOARD_USB            "OnboardUSB"
#define STRING_ONBOARD_SD_READ_ERROR  "Onboard media leesfout!"
#define STRING_FILAMENT_RUNOUT        "filament op!"

// Steppers, Print, Probe Process Commands / Status / Info
#define STRING_DISABLE_STEPPERS       "Disarm All"
#define STRING_XY_UNLOCK              "Ontgrendel XY"

#define STRING_START_PRINT            "Start afdruk:\n%s?"
#define STRING_STOP_PRINT             "Stop afdruk?"
#define STRING_IS_PAUSE               "Kan niet extruderen tijdens printen,\nPauzeer printen?"
#define STRING_M0_PAUSE               "Gepauseerd door M0 commando"

#define STRING_TEST                   "Test"
#define STRING_DEPLOY                 "Gebruiken"
#define STRING_STOW                   "Inzetten"
#define STRING_REPEAT                 "Herhaal"
#define STRING_HS_ON                  "HS: On"
#define STRING_HS_OFF                 "HS: Off"

// Printer Tools
#define STRING_NOZZLE                 "Spuitneus"
#define STRING_BED                    "Verwarmd bed"
#define STRING_CHAMBER                "Kamer"
#define STRING_FAN                    "Ventilator"

#define STRING_BLTOUCH                "BLTouch"
#define STRING_TOUCHMI                "TouchMi"

// Values
#define STRING_1_DEGREE               "1℃"
#define STRING_5_DEGREE               "5℃"
#define STRING_10_DEGREE              "10℃"

#define STRING_001_MM                 "0.01mm"
#define STRING_01_MM                  "0.1mm"
#define STRING_1_MM                   "1mm"
#define STRING_5_MM                   "5mm"
#define STRING_10_MM                  "10mm"
#define STRING_100_MM                 "100mm"
#define STRING_200_MM                 "200mm"

#define STRING_1_PERCENT              "1%"
#define STRING_5_PERCENT              "5%"
#define STRING_10_PERCENT             "10%"
#define STRING_PERCENT_VALUE          "%d%%"

#define STRING_5_SECONDS              "5 Sec."
#define STRING_10_SECONDS             "10 Sec."
#define STRING_30_SECONDS             "30 Sec."
#define STRING_60_SECONDS             "1 Min."
#define STRING_120_SECONDS            "2 Min."
#define STRING_300_SECONDS            "5 Min."

// Colors
#define STRING_WHITE                  "Wit"
#define STRING_BLACK                  "Zwart"
#define STRING_BLUE                   "Blauw"
#define STRING_RED                    "Rood"
#define STRING_GREEN                  "Groen"
#define STRING_CYAN                   "Cyaan"
#define STRING_YELLOW                 "Geel"
#define STRING_BROWN                  "Bruin"
#define STRING_GRAY                   "Grijs"
#define STRING_ORANGE                 "Oranje"
#define STRING_INDIGO                 "Indigo"
#define STRING_VIOLET                 "Violet"
#define STRING_MAGENTA                "Magenta"
#define STRING_PURPLE                 "Purple"
#define STRING_LIME                   "Lime"
#define STRING_DARKBLUE               "DarkBlue"
#define STRING_DARKGREEN              "DarkGreen"
#define STRING_DARKGRAY               "DarkGray"

// Menus
#define STRING_HEAT                   "Verwarm"
#define STRING_MOVE                   "Verplaats"
#define STRING_HOME                   "Thuis"
#define STRING_PRINT                  "Print"
#define STRING_EXTRUDE                "Extrudeer"
#define STRING_SETTINGS               "Instellingen"
#define STRING_SCREEN_SETTINGS        "Scherm"
#define STRING_UI_SETTINGS            "UI"
#define STRING_SOUND                  "Sound"
#define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
#define STRING_MACHINE_SETTINGS       "Machine"
#define STRING_PARAMETER_SETTINGS     "Parameter"
#define STRING_FEATURE_SETTINGS       "Kenmerk"
#define STRING_CONNECTION_SETTINGS    "Connecties"
#define STRING_SERIAL_PORTS           "S. Ports"
#define STRING_BAUDRATE               "Baudsnelheid"
#define STRING_EEPROM_SETTINGS        "EEPROM"
#define STRING_RGB_SETTINGS           "LED Kleur"
#define STRING_RGB_OFF                "LED Uit"
#define STRING_TERMINAL               "Terminal"
#define STRING_LEVELING               "Nivelleren"
#define STRING_POINT_1                "Punt 1"
#define STRING_POINT_2                "Punt 2"
#define STRING_POINT_3                "Punt 3"
#define STRING_POINT_4                "Punt 4"
#define STRING_POINT_5                "Punt 5"
#define STRING_BED_LEVELING           "Bed Level"
#define STRING_BL_COMPLETE            "Bed Leveling voltooid"
#define STRING_BL_SMART_FILL          "Missende probe punten zijn slim opgevuld.\n\nNote: Vergeet niet op te slaan!"
#define STRING_BL_ENABLE              "BL: aan"
#define STRING_BL_DISABLE             "BL: uit"
#define STRING_ABL                    "ABL"
#define STRING_BBL                    "BBL"
#define STRING_UBL                    "UBL"
#define STRING_MBL                    "MBL"
#define STRING_MBL_SETTINGS           "Mesh Bed Leveling"
#define STRING_ABL_SETTINGS           "Auto Bed Leveling"
#define STRING_ABL_SETTINGS_BBL       "Bilinear Bed Leveling"
#define STRING_ABL_SETTINGS_UBL       "Unified Bed Leveling"
#define STRING_ABL_SETTINGS_UBL_SAVE  "Sla op naar sleuf"
#define STRING_ABL_SETTINGS_UBL_LOAD  "Laad van sleuf"
#define STRING_ABL_SLOT0              "Sleuf 0"
#define STRING_ABL_SLOT1              "Sleuf 1"
#define STRING_ABL_SLOT2              "Sleuf 2"
#define STRING_ABL_SLOT3              "Sleuf 3"
#define STRING_ABL_SLOT_EEPROM        "Onthoud sleuf voor volgende reboot? (sla op in EEPROM)"
#define STRING_ABL_Z                  "Z vervagen"
#define STRING_LEVEL_CORNER           "L corner"
#define STRING_LEVEL_CORNER_INFO      "Edge distance is below probe offset X/Y and some target points could be not reachable.\nDo you want to use a safe edge distance?"
#define STRING_P_OFFSET               "P Offset"
#define STRING_H_OFFSET               "H Offset"
#define STRING_DISTANCE               "Afstand"
#define STRING_SHIM                   "Shim"
#define STRING_LOAD_UNLOAD            "Load/Unload"  // needs translation
#define STRING_LOAD_UNLOAD_SHORT      "(Un)Load"  // needs translation
#define STRING_TOUCHSCREEN_ADJUST     "TSC Aanpassen"
#define STRING_MORE                   "Meer"
#define STRING_SCREEN_INFO            "Info"
#define STRING_BG_COLOR               "achtergrond kleur"
#define STRING_FONT_COLOR             "tekst kleur"
#define STRING_PERCENTAGE             "Percentage"
#define STRING_PERCENTAGE_SPEED       "Snelheid"
#define STRING_PERCENTAGE_FLOW        "Stromen"
#define STRING_BABYSTEP               "BabyStap"
#define STRING_X_INC                  "X+"
#define STRING_Y_INC                  "Y+"
#define STRING_Z_INC                  "Z+"
#define STRING_X_DEC                  "X-"
#define STRING_Y_DEC                  "Y-"
#define STRING_Z_DEC                  "Z-"
#define STRING_X                      "X"
#define STRING_Y                      "Y"
#define STRING_Z                      "Z"
#define STRING_ADJUST_TITLE           "Touch Screen Calibratie"
#define STRING_ADJUST_INFO            "Klik op de rode punt"
#define STRING_ADJUST_OK              "Calibratie Gelukt"
#define STRING_ADJUST_FAILED          "Calibratie Mislukt, Probeer Opnieuw aub"
#define STRING_UNIFIEDMOVE            "Beweging"
#define STRING_UNIFIEDHEAT            "Verwarm/Ventilator"
#define STRING_TOUCH_TO_EXIT          "Aanraken om te verlaten"
#define STRING_MAINMENU               "Menu"
#define STRING_TUNING                 "Tuning"
#define STRING_MPC                    "MPC"
#define STRING_MPC_TITLE              "MPC autotune"
#define STRING_MPC_METHOD             "Metode:"
#define STRING_PID                    "PID"
#define STRING_PID_TITLE              "PID autotune"
#define STRING_TUNE_START_INFO        "Autotune zal starten. Dit kan een paar minuten duren.\nDoorgaan?"
#define STRING_TUNE_EXTRUDER          "Tune steps"
#define STRING_TUNE_EXT_EXTRUDE_100   "Ext. 100mm"
#define STRING_TUNE_EXT_TEMP          "Extruder tuning | Heat"
#define STRING_TUNE_EXT_MARK120MM     "Mark 120 mm on your filament.\nPress '%s' when ready.\nMeasure remaining length after extruding."
#define STRING_TUNE_EXT_ADJ_ESTEPS    "Adjust E-Steps"
#define STRING_TUNE_EXT_ESTEPS_SAVED  "New E-steps applied. Don't forget to save it in EEPROM.\nNew value: %0.2f"
#define STRING_TUNE_EXT_MEASURED      "Length remaining:"
#define STRING_TUNE_EXT_OLD_ESTEP     "Old e-steps: %0.2f"
#define STRING_TUNE_EXT_NEW_ESTEP     "New e-steps: %0.2f"
#define STRING_NOTIFICATIONS          "Notifications"
#define STRING_MESH_EDITOR            "Mesh edit"
#define STRING_MESH_TUNER             "Mesh tuner"
#define STRING_CASE_LIGHT             "Case light"
#define STRING_LOAD_STARTED           "Loading filament.\nPlease wait for the process to complete."  // translation needed
#define STRING_UNLOAD_STARTED         "Unloading filament.\nPlease wait for the process to complete."  // translation needed
#define STRING_HEATERS_ON             "Some heaters are still ON.\nDo you want to stop them?"  // translation needed
#define STRING_PRINT_FINISHED         "   Print\n   finished"
#define STRING_MAIN_SCREEN            "Main"
#define STRING_PREVIOUS_PRINT_DATA    "Brief"
#define STRING_PRINT_TIME             "Print Time: %02u:%02u:%02u"
#define STRING_FILAMENT_LENGTH        "\nFilament length: %1.2fm"
#define STRING_FILAMENT_WEIGHT        "\nFilament weight: %1.2fg"
#define STRING_FILAMENT_COST          "\nFilament cost: %1.2f"
#define STRING_NO_FILAMENT_STATS      "\nFilament data not available."
#define STRING_CLICK_FOR_MORE         "Click for summary"
#define STRING_EXT_TEMPLOW            "Hotend temperature is below minimum temperature (%d℃)."
#define STRING_HEAT_HOTEND            "Heat hotend to %d℃?"
#define STRING_DESIRED_TEMPLOW        "Hotend temperature is below\ndesired temperature (%d℃)."
#define STRING_WAIT_HEAT_UP           "Wait for it to heat up."
#define STRING_Z_ALIGN                "Z Align"
#define STRING_MACROS                 "Macros"
#define STRING_MESH_VALID             "Mesh Validation"
#define STRING_CONNECT_PROBE          "Connect probe before starting the process. Make sure to disconnect it afterwards."
#define STRING_DISCONNECT_PROBE       "Make sure you have disconnected probe before using this feature."
#define STRING_CALIBRATION            "Calibrate"

#endif
