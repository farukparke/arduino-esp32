/*
 * Automatically generated file. DO NOT EDIT.
 * Espressif IoT Development Framework (ESP-IDF) Configuration Header
 */
#pragma once
#define CONFIG_IDF_CMAKE 1
#define CONFIG_IDF_TARGET_ARCH_XTENSA 1
#define CONFIG_IDF_TARGET "esp32"
#define CONFIG_IDF_TARGET_ESP32 1
#define CONFIG_IDF_FIRMWARE_CHIP_ID 0x0000
#define CONFIG_SDK_TOOLPREFIX "xtensa-esp32-elf-"
#define CONFIG_APP_BUILD_TYPE_APP_2NDBOOT 1
#define CONFIG_APP_BUILD_GENERATE_BINARIES 1
#define CONFIG_APP_BUILD_BOOTLOADER 1
#define CONFIG_APP_BUILD_USE_FLASH_SECTIONS 1
#define CONFIG_APP_COMPILE_TIME_DATE 1
#define CONFIG_APP_RETRIEVE_LEN_ELF_SHA 16
#define CONFIG_BOOTLOADER_OFFSET_IN_FLASH 0x1000
#define CONFIG_BOOTLOADER_COMPILER_OPTIMIZATION_SIZE 1
#define CONFIG_BOOTLOADER_LOG_LEVEL_NONE 1
#define CONFIG_BOOTLOADER_LOG_LEVEL 0
#define CONFIG_BOOTLOADER_SPI_WP_PIN 7
#define CONFIG_BOOTLOADER_VDDSDIO_BOOST_1_9V 1
#define CONFIG_BOOTLOADER_REGION_PROTECTION_ENABLE 1
#define CONFIG_BOOTLOADER_WDT_ENABLE 1
#define CONFIG_BOOTLOADER_WDT_TIME_MS 9000
#define CONFIG_BOOTLOADER_APP_ROLLBACK_ENABLE 1
#define CONFIG_BOOTLOADER_SKIP_VALIDATE_IN_DEEP_SLEEP 1
#define CONFIG_BOOTLOADER_RESERVE_RTC_SIZE 0x10
#define CONFIG_BOOTLOADER_FLASH_XMC_SUPPORT 1
#define CONFIG_ESPTOOLPY_BAUD_OTHER_VAL 115200
#define CONFIG_ESPTOOLPY_FLASHMODE_QIO 1
#define CONFIG_ESPTOOLPY_FLASH_SAMPLE_MODE_STR 1
#define CONFIG_ESPTOOLPY_FLASHMODE "dio"
#define CONFIG_ESPTOOLPY_FLASHFREQ_80M 1
#define CONFIG_ESPTOOLPY_FLASHFREQ "80m"
#define CONFIG_ESPTOOLPY_FLASHSIZE_4MB 1
#define CONFIG_ESPTOOLPY_FLASHSIZE "4MB"
#define CONFIG_ESPTOOLPY_FLASHSIZE_DETECT 1
#define CONFIG_ESPTOOLPY_BEFORE_RESET 1
#define CONFIG_ESPTOOLPY_BEFORE "default_reset"
#define CONFIG_ESPTOOLPY_AFTER_RESET 1
#define CONFIG_ESPTOOLPY_AFTER "hard_reset"
#define CONFIG_ESPTOOLPY_MONITOR_BAUD_115200B 1
#define CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER_VAL 115200
#define CONFIG_ESPTOOLPY_MONITOR_BAUD 115200
#define CONFIG_PARTITION_TABLE_SINGLE_APP 1
#define CONFIG_PARTITION_TABLE_CUSTOM_FILENAME "partitions.csv"
#define CONFIG_PARTITION_TABLE_FILENAME "partitions_singleapp_coredump.csv"
#define CONFIG_PARTITION_TABLE_OFFSET 0x8000
#define CONFIG_PARTITION_TABLE_MD5 1
#define CONFIG_LIB_BUILDER_FLASHMODE "qio"
#define CONFIG_LIB_BUILDER_FLASHFREQ "80m"
#define CONFIG_LIB_BUILDER_COMPILE 1
#define CONFIG_ESP_RMAKER_ASSISTED_CLAIM 1
#define CONFIG_ESP_RMAKER_USE_NVS 1
#define CONFIG_ESP_RMAKER_CLAIM_TYPE 2
#define CONFIG_ESP_RMAKER_MQTT_HOST "a1p72mufdu6064-ats.iot.us-east-1.amazonaws.com"
#define CONFIG_ESP_RMAKER_MQTT_USE_BASIC_INGEST_TOPICS 1
#define CONFIG_ESP_RMAKER_MQTT_ENABLE_BUDGETING 1
#define CONFIG_ESP_RMAKER_MQTT_DEFAULT_BUDGET 100
#define CONFIG_ESP_RMAKER_MQTT_MAX_BUDGET 1024
#define CONFIG_ESP_RMAKER_MQTT_BUDGET_REVIVE_PERIOD 5
#define CONFIG_ESP_RMAKER_MQTT_BUDGET_REVIVE_COUNT 1
#define CONFIG_ESP_RMAKER_MAX_PARAM_DATA_SIZE 1024
#define CONFIG_ESP_RMAKER_USER_ID_CHECK 1
#define CONFIG_ESP_RMAKER_CONSOLE_UART_NUM_0 1
#define CONFIG_ESP_RMAKER_CONSOLE_UART_NUM 0
#define CONFIG_ESP_RMAKER_USE_CERT_BUNDLE 1
#define CONFIG_ESP_RMAKER_OTA_AUTOFETCH 1
#define CONFIG_ESP_RMAKER_OTA_AUTOFETCH_PERIOD 0
#define CONFIG_ESP_RMAKER_SKIP_VERSION_CHECK 1
#define CONFIG_ESP_RMAKER_OTA_HTTP_RX_BUFFER_SIZE 1024
#define CONFIG_ESP_RMAKER_OTA_ROLLBACK_WAIT_PERIOD 90
#define CONFIG_ESP_RMAKER_OTA_TIME_SUPPORT 1
#define CONFIG_ESP_RMAKER_SCHEDULING_MAX_SCHEDULES 10
#define CONFIG_ESP_RMAKER_SCENES_MAX_SCENES 10
#define CONFIG_ESP_RMAKER_CMD_RESP_ENABLE 1
#define CONFIG_ARDUINO_VARIANT "esp32"
#define CONFIG_ENABLE_ARDUINO_DEPENDS 1
#define CONFIG_AUTOSTART_ARDUINO 1
#define CONFIG_ARDUINO_RUN_CORE1 1
#define CONFIG_ARDUINO_RUNNING_CORE 1
#define CONFIG_ARDUINO_LOOP_STACK_SIZE 8192
#define CONFIG_ARDUINO_EVENT_RUN_CORE1 1
#define CONFIG_ARDUINO_EVENT_RUNNING_CORE 1
#define CONFIG_ARDUINO_SERIAL_EVENT_RUN_NO_AFFINITY 1
#define CONFIG_ARDUINO_SERIAL_EVENT_TASK_RUNNING_CORE -1
#define CONFIG_ARDUINO_SERIAL_EVENT_TASK_STACK_SIZE 2048
#define CONFIG_ARDUINO_SERIAL_EVENT_TASK_PRIORITY 24
#define CONFIG_ARDUINO_UDP_RUN_CORE0 1
#define CONFIG_ARDUINO_UDP_RUNNING_CORE 0
#define CONFIG_ARDUINO_UDP_TASK_PRIORITY 3
#define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL_ERROR 1
#define CONFIG_ARDUHAL_LOG_DEFAULT_LEVEL 1
#define CONFIG_ARDUHAL_ESP_LOG 1
#define CONFIG_ARDUHAL_PARTITION_SCHEME_DEFAULT 1
#define CONFIG_ARDUHAL_PARTITION_SCHEME "default"
#define CONFIG_COMPILER_OPTIMIZATION_SIZE 1
#define CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_ENABLE 1
#define CONFIG_COMPILER_OPTIMIZATION_ASSERTION_LEVEL 2
#define CONFIG_COMPILER_HIDE_PATHS_MACROS 1
#define CONFIG_COMPILER_CXX_EXCEPTIONS 1
#define CONFIG_COMPILER_CXX_EXCEPTIONS_EMG_POOL_SIZE 0
#define CONFIG_COMPILER_STACK_CHECK_MODE_NORM 1
#define CONFIG_COMPILER_STACK_CHECK 1
#define CONFIG_COMPILER_WARN_WRITE_STRINGS 1
#define CONFIG_APPTRACE_DEST_NONE 1
#define CONFIG_APPTRACE_LOCK_ENABLE 1
#define CONFIG_BT_ENABLED 1
#define CONFIG_BTDM_CTRL_MODE_BTDM 1
#define CONFIG_BTDM_CTRL_BLE_MAX_CONN 3
#define CONFIG_BTDM_CTRL_BR_EDR_MAX_ACL_CONN 2
#define CONFIG_BTDM_CTRL_BR_EDR_MAX_SYNC_CONN 0
#define CONFIG_BTDM_CTRL_BR_EDR_SCO_DATA_PATH_PCM 1
#define CONFIG_BTDM_CTRL_BR_EDR_SCO_DATA_PATH_EFF 1
#define CONFIG_BTDM_CTRL_PCM_ROLE_EDGE_CONFIG 1
#define CONFIG_BTDM_CTRL_PCM_ROLE_MASTER 1
#define CONFIG_BTDM_CTRL_PCM_POLAR_FALLING_EDGE 1
#define CONFIG_BTDM_CTRL_PCM_ROLE_EFF 0
#define CONFIG_BTDM_CTRL_PCM_POLAR_EFF 0
#define CONFIG_BTDM_CTRL_LEGACY_AUTH_VENDOR_EVT 1
#define CONFIG_BTDM_CTRL_LEGACY_AUTH_VENDOR_EVT_EFF 1
#define CONFIG_BTDM_CTRL_BLE_MAX_CONN_EFF 3
#define CONFIG_BTDM_CTRL_BR_EDR_MAX_ACL_CONN_EFF 2
#define CONFIG_BTDM_CTRL_BR_EDR_MAX_SYNC_CONN_EFF 0
#define CONFIG_BTDM_CTRL_PINNED_TO_CORE_0 1
#define CONFIG_BTDM_CTRL_PINNED_TO_CORE 0
#define CONFIG_BTDM_CTRL_HCI_MODE_VHCI 1
#define CONFIG_BTDM_CTRL_MODEM_SLEEP 1
#define CONFIG_BTDM_CTRL_MODEM_SLEEP_MODE_ORIG 1
#define CONFIG_BTDM_CTRL_LPCLK_SEL_MAIN_XTAL 1
#define CONFIG_BTDM_BLE_DEFAULT_SCA_250PPM 1
#define CONFIG_BTDM_BLE_SLEEP_CLOCK_ACCURACY_INDEX_EFF 1
#define CONFIG_BTDM_BLE_SCAN_DUPL 1
#define CONFIG_BTDM_SCAN_DUPL_TYPE_DEVICE 1
#define CONFIG_BTDM_SCAN_DUPL_TYPE 0
#define CONFIG_BTDM_SCAN_DUPL_CACHE_SIZE 20
#define CONFIG_BTDM_SCAN_DUPL_CACHE_REFRESH_PERIOD 0
#define CONFIG_BTDM_BLE_MESH_SCAN_DUPL_EN 1
#define CONFIG_BTDM_MESH_DUPL_SCAN_CACHE_SIZE 100
#define CONFIG_BTDM_CTRL_FULL_SCAN_SUPPORTED 1
#define CONFIG_BTDM_BLE_ADV_REPORT_FLOW_CTRL_SUPP 1
#define CONFIG_BTDM_BLE_ADV_REPORT_FLOW_CTRL_NUM 100
#define CONFIG_BTDM_BLE_ADV_REPORT_DISCARD_THRSHOLD 20
#define CONFIG_BTDM_RESERVE_DRAM 0xdb5c
#define CONFIG_BTDM_CTRL_HLI 1
#define CONFIG_BT_BLUEDROID_ENABLED 1
#define CONFIG_BT_BTC_TASK_STACK_SIZE 8192
#define CONFIG_BT_BLUEDROID_PINNED_TO_CORE_0 1
#define CONFIG_BT_BLUEDROID_PINNED_TO_CORE 0
#define CONFIG_BT_BTU_TASK_STACK_SIZE 8192
#define CONFIG_BT_CLASSIC_ENABLED 1
#define CONFIG_BT_A2DP_ENABLE 1
#define CONFIG_BT_SPP_ENABLED 1
#define CONFIG_BT_HFP_ENABLE 1
#define CONFIG_BT_HFP_CLIENT_ENABLE 1
#define CONFIG_BT_HFP_AUDIO_DATA_PATH_PCM 1
#define CONFIG_BT_SSP_ENABLED 1
#define CONFIG_BT_BLE_ENABLED 1
#define CONFIG_BT_GATTS_ENABLE 1
#define CONFIG_BT_GATT_MAX_SR_PROFILES 8
#define CONFIG_BT_GATT_MAX_SR_ATTRIBUTES 100
#define CONFIG_BT_GATTS_SEND_SERVICE_CHANGE_AUTO 1
#define CONFIG_BT_GATTS_SEND_SERVICE_CHANGE_MODE 0
#define CONFIG_BT_GATTC_ENABLE 1
#define CONFIG_BT_GATTC_MAX_CACHE_CHAR 40
#define CONFIG_BT_GATTC_CONNECT_RETRY_COUNT 3
#define CONFIG_BT_BLE_SMP_ENABLE 1
#define CONFIG_BT_STACK_NO_LOG 1
#define CONFIG_BT_ACL_CONNECTIONS 4
#define CONFIG_BT_MULTI_CONNECTION_ENBALE 1
#define CONFIG_BT_BLE_DYNAMIC_ENV_MEMORY 1
#define CONFIG_BT_SMP_ENABLE 1
#define CONFIG_BT_BLE_ESTAB_LINK_CONN_TOUT 30
#define CONFIG_BT_MAX_DEVICE_NAME_LEN 32
#define CONFIG_BT_BLE_RPA_TIMEOUT 900
#define CONFIG_BLE_MESH 1
#define CONFIG_BLE_MESH_HCI_5_0 1
#define CONFIG_BLE_MESH_USE_DUPLICATE_SCAN 1
#define CONFIG_BLE_MESH_MEM_ALLOC_MODE_INTERNAL 1
#define CONFIG_BLE_MESH_DEINIT 1
#define CONFIG_BLE_MESH_PROV 1
#define CONFIG_BLE_MESH_PB_ADV 1
#define CONFIG_BLE_MESH_PROXY 1
#define CONFIG_BLE_MESH_NET_BUF_POOL_USAGE 1
#define CONFIG_BLE_MESH_SUBNET_COUNT 3
#define CONFIG_BLE_MESH_APP_KEY_COUNT 3
#define CONFIG_BLE_MESH_MODEL_KEY_COUNT 3
#define CONFIG_BLE_MESH_MODEL_GROUP_COUNT 3
#define CONFIG_BLE_MESH_LABEL_COUNT 3
#define CONFIG_BLE_MESH_CRPL 10
#define CONFIG_BLE_MESH_MSG_CACHE_SIZE 10
#define CONFIG_BLE_MESH_ADV_BUF_COUNT 60
#define CONFIG_BLE_MESH_IVU_DIVIDER 4
#define CONFIG_BLE_MESH_TX_SEG_MSG_COUNT 1
#define CONFIG_BLE_MESH_RX_SEG_MSG_COUNT 1
#define CONFIG_BLE_MESH_RX_SDU_MAX 384
#define CONFIG_BLE_MESH_TX_SEG_MAX 32
#define CONFIG_BLE_MESH_TRACE_LEVEL_WARNING 1
#define CONFIG_BLE_MESH_STACK_TRACE_LEVEL 2
#define CONFIG_BLE_MESH_NET_BUF_TRACE_LEVEL_WARNING 1
#define CONFIG_BLE_MESH_NET_BUF_TRACE_LEVEL 2
#define CONFIG_BLE_MESH_CLIENT_MSG_TIMEOUT 4000
#define CONFIG_BLE_MESH_HEALTH_SRV 1
#define CONFIG_BLE_MESH_GENERIC_SERVER 1
#define CONFIG_BLE_MESH_SENSOR_SERVER 1
#define CONFIG_BLE_MESH_TIME_SCENE_SERVER 1
#define CONFIG_BLE_MESH_LIGHTING_SERVER 1
#define CONFIG_BLE_MESH_DISCARD_OLD_SEQ_AUTH 1
#define CONFIG_COAP_MBEDTLS_PSK 1
#define CONFIG_COAP_LOG_DEFAULT_LEVEL 0
#define CONFIG_ADC_DISABLE_DAC 1
#define CONFIG_TWAI_ERRATA_FIX_BUS_OFF_REC 1
#define CONFIG_TWAI_ERRATA_FIX_TX_INTR_LOST 1
#define CONFIG_TWAI_ERRATA_FIX_RX_FRAME_INVALID 1
#define CONFIG_TWAI_ERRATA_FIX_RX_FIFO_CORRUPT 1
#define CONFIG_EFUSE_CODE_SCHEME_COMPAT_3_4 1
#define CONFIG_EFUSE_MAX_BLK_LEN 192
#define CONFIG_ESP_TLS_USING_MBEDTLS 1
#define CONFIG_ESP_TLS_SERVER 1
#define CONFIG_ESP32_ECO3_CACHE_LOCK_FIX 1
#define CONFIG_ESP32_REV_MIN_0 1
#define CONFIG_ESP32_REV_MIN 0
#define CONFIG_ESP32_REV_MIN_FULL 0
#define CONFIG_ESP_REV_MIN_FULL 0
#define CONFIG_ESP32_REV_MAX_FULL_STR_OPT 1
#define CONFIG_ESP32_REV_MAX_FULL 399
#define CONFIG_ESP_REV_MAX_FULL 399
#define CONFIG_ESP32_DPORT_WORKAROUND 1
#define CONFIG_ESP32_DEFAULT_CPU_FREQ_160 1
#define CONFIG_ESP32_DEFAULT_CPU_FREQ_MHZ 160
#define CONFIG_ESP32_SPIRAM_SUPPORT 1
#define CONFIG_SPIRAM_TYPE_AUTO 1
#define CONFIG_SPIRAM_SIZE -1
#define CONFIG_SPIRAM_SPEED_80M 1
#define CONFIG_SPIRAM 1
#define CONFIG_SPIRAM_USE_MALLOC 1
#define CONFIG_SPIRAM_MALLOC_ALWAYSINTERNAL 4096
#define CONFIG_SPIRAM_MALLOC_RESERVE_INTERNAL 0
#define CONFIG_SPIRAM_CACHE_WORKAROUND 1
#define CONFIG_SPIRAM_CACHE_WORKAROUND_STRATEGY_MEMW 1
#define CONFIG_SPIRAM_CACHE_LIBJMP_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBMATH_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBNUMPARSER_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBIO_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBTIME_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBCHAR_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBMEM_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBSTR_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBRAND_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBENV_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBFILE_IN_IRAM 1
#define CONFIG_SPIRAM_CACHE_LIBMISC_IN_IRAM 1
#define CONFIG_SPIRAM_BANKSWITCH_ENABLE 1
#define CONFIG_SPIRAM_BANKSWITCH_RESERVE 8
#define CONFIG_SPIRAM_OCCUPY_HSPI_HOST 1
#define CONFIG_D0WD_PSRAM_CLK_IO 17
#define CONFIG_D0WD_PSRAM_CS_IO 16
#define CONFIG_D2WD_PSRAM_CLK_IO 9
#define CONFIG_D2WD_PSRAM_CS_IO 10
#define CONFIG_PICO_PSRAM_CS_IO 10
#define CONFIG_ESP32_TRACEMEM_RESERVE_DRAM 0x0
#define CONFIG_ESP32_ULP_COPROC_ENABLED 1
#define CONFIG_ESP32_ULP_COPROC_RESERVE_MEM 512
#define CONFIG_ESP32_DEBUG_OCDAWARE 1
#define CONFIG_ESP32_BROWNOUT_DET 1
#define CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_0 1
#define CONFIG_ESP32_BROWNOUT_DET_LVL 0
#define CONFIG_ESP32_TIME_SYSCALL_USE_RTC_FRC1 1
#define CONFIG_ESP32_RTC_CLK_SRC_INT_RC 1
#define CONFIG_ESP32_RTC_CLK_CAL_CYCLES 1024
#define CONFIG_ESP32_DEEP_SLEEP_WAKEUP_DELAY 2000
#define CONFIG_ESP32_XTAL_FREQ_AUTO 1
#define CONFIG_ESP32_XTAL_FREQ 0
#define CONFIG_ESP32_DPORT_DIS_INTERRUPT_LVL 5
#define CONFIG_ADC_CAL_EFUSE_TP_ENABLE 1
#define CONFIG_ADC_CAL_EFUSE_VREF_ENABLE 1
#define CONFIG_ADC_CAL_LUT_ENABLE 1
#define CONFIG_ESP_ERR_TO_NAME_LOOKUP 1
#define CONFIG_ETH_ENABLED 1
#define CONFIG_ETH_USE_ESP32_EMAC 1
#define CONFIG_ETH_PHY_INTERFACE_RMII 1
#define CONFIG_ETH_RMII_CLK_INPUT 1
#define CONFIG_ETH_RMII_CLK_IN_GPIO 0
#define CONFIG_ETH_DMA_BUFFER_SIZE 512
#define CONFIG_ETH_DMA_RX_BUFFER_NUM 10
#define CONFIG_ETH_DMA_TX_BUFFER_NUM 10
#define CONFIG_ETH_USE_SPI_ETHERNET 1
#define CONFIG_ETH_SPI_ETHERNET_DM9051 1
#define CONFIG_ETH_SPI_ETHERNET_W5500 1
#define CONFIG_ESP_EVENT_POST_FROM_ISR 1
#define CONFIG_ESP_EVENT_POST_FROM_IRAM_ISR 1
#define CONFIG_ESP_HTTP_CLIENT_ENABLE_HTTPS 1
#define CONFIG_ESP_HTTP_CLIENT_ENABLE_BASIC_AUTH 1
#define CONFIG_ESP_HTTP_CLIENT_ENABLE_DIGEST_AUTH 1
#define CONFIG_HTTPD_MAX_REQ_HDR_LEN 1024
#define CONFIG_HTTPD_MAX_URI_LEN 512
#define CONFIG_HTTPD_ERR_RESP_NO_DELAY 1
#define CONFIG_HTTPD_PURGE_BUF_LEN 32
#define CONFIG_HTTPD_WS_SUPPORT 1
#define CONFIG_ESP_HTTPS_SERVER_ENABLE 1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_WIFI_STA 1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_WIFI_AP 1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_BT 1
#define CONFIG_ESP_MAC_ADDR_UNIVERSE_ETH 1
#define CONFIG_ESP32_UNIVERSAL_MAC_ADDRESSES_FOUR 1
#define CONFIG_ESP32_UNIVERSAL_MAC_ADDRESSES 4
#define CONFIG_ESP_SLEEP_RTC_BUS_ISO_WORKAROUND 1
#define CONFIG_ESP_SLEEP_PSRAM_LEAKAGE_WORKAROUND 1
#define CONFIG_ESP_SLEEP_FLASH_LEAKAGE_WORKAROUND 1
#define CONFIG_ESP_SLEEP_GPIO_ENABLE_INTERNAL_RESISTORS 1
#define CONFIG_ESP_IPC_TASK_STACK_SIZE 1024
#define CONFIG_ESP_IPC_USES_CALLERS_PRIORITY 1
#define CONFIG_ESP_IPC_ISR_ENABLE 1
#define CONFIG_LCD_PANEL_IO_FORMAT_BUF_SIZE 32
#define CONFIG_ESP_NETIF_IP_LOST_TIMER_INTERVAL 120
#define CONFIG_ESP_NETIF_TCPIP_LWIP 1
#define CONFIG_ESP_NETIF_TCPIP_ADAPTER_COMPATIBLE_LAYER 1
#define CONFIG_ESP_PHY_CALIBRATION_AND_DATA_STORAGE 1
#define CONFIG_ESP_PHY_MAX_WIFI_TX_POWER 20
#define CONFIG_ESP_PHY_MAX_TX_POWER 20
#define CONFIG_ESP_PHY_RF_CAL_PARTIAL 1
#define CONFIG_ESP_PHY_CALIBRATION_MODE 0
#define CONFIG_ESP_SYSTEM_PANIC_PRINT_REBOOT 1
#define CONFIG_ESP_SYSTEM_EVENT_QUEUE_SIZE 32
#define CONFIG_ESP_SYSTEM_EVENT_TASK_STACK_SIZE 2048
#define CONFIG_ESP_MAIN_TASK_STACK_SIZE 4096
#define CONFIG_ESP_MAIN_TASK_AFFINITY_CPU0 1
#define CONFIG_ESP_MAIN_TASK_AFFINITY 0x0
#define CONFIG_ESP_MINIMAL_SHARED_STACK_SIZE 2048
#define CONFIG_ESP_CONSOLE_UART_DEFAULT 1
#define CONFIG_ESP_CONSOLE_UART 1
#define CONFIG_ESP_CONSOLE_MULTIPLE_UART 1
#define CONFIG_ESP_CONSOLE_UART_NUM 0
#define CONFIG_ESP_CONSOLE_UART_BAUDRATE 115200
#define CONFIG_ESP_INT_WDT 1
#define CONFIG_ESP_INT_WDT_TIMEOUT_MS 300
#define CONFIG_ESP_INT_WDT_CHECK_CPU1 1
#define CONFIG_ESP_TASK_WDT 1
#define CONFIG_ESP_TASK_WDT_PANIC 1
#define CONFIG_ESP_TASK_WDT_TIMEOUT_S 5
#define CONFIG_ESP_TASK_WDT_CHECK_IDLE_TASK_CPU0 1
#define CONFIG_ESP_SYSTEM_CHECK_INT_LEVEL_5 1
#define CONFIG_ESP_TIME_FUNCS_USE_RTC_TIMER 1
#define CONFIG_ESP_TIME_FUNCS_USE_ESP_TIMER 1
#define CONFIG_ESP_TIMER_TASK_STACK_SIZE 4096
#define CONFIG_ESP_TIMER_INTERRUPT_LEVEL 1
#define CONFIG_ESP_TIMER_IMPL_TG0_LAC 1
#define CONFIG_ESP32_WIFI_ENABLED 1
#define CONFIG_ESP32_WIFI_SW_COEXIST_ENABLE 1
#define CONFIG_ESP32_WIFI_STATIC_RX_BUFFER_NUM 8
#define CONFIG_ESP32_WIFI_DYNAMIC_RX_BUFFER_NUM 32
#define CONFIG_ESP32_WIFI_STATIC_TX_BUFFER 1
#define CONFIG_ESP32_WIFI_TX_BUFFER_TYPE 0
#define CONFIG_ESP32_WIFI_STATIC_TX_BUFFER_NUM 8
#define CONFIG_ESP32_WIFI_CACHE_TX_BUFFER_NUM 16
#define CONFIG_ESP32_WIFI_CSI_ENABLED 1
#define CONFIG_ESP32_WIFI_AMPDU_TX_ENABLED 1
#define CONFIG_ESP32_WIFI_TX_BA_WIN 6
#define CONFIG_ESP32_WIFI_AMPDU_RX_ENABLED 1
#define CONFIG_ESP32_WIFI_RX_BA_WIN 6
#define CONFIG_ESP32_WIFI_NVS_ENABLED 1
#define CONFIG_ESP32_WIFI_TASK_PINNED_TO_CORE_0 1
#define CONFIG_ESP32_WIFI_SOFTAP_BEACON_MAX_LEN 752
#define CONFIG_ESP32_WIFI_MGMT_SBUF_NUM 32
#define CONFIG_ESP32_WIFI_ENABLE_WPA3_SAE 1
#define CONFIG_ESP_WIFI_SOFTAP_SUPPORT 1
#define CONFIG_ESP_WIFI_ESPNOW_MAX_ENCRYPT_NUM 7
#define CONFIG_ESP_COREDUMP_ENABLE_TO_FLASH 1
#define CONFIG_ESP_COREDUMP_DATA_FORMAT_ELF 1
#define CONFIG_ESP_COREDUMP_CHECKSUM_CRC32 1
#define CONFIG_ESP_COREDUMP_CHECK_BOOT 1
#define CONFIG_ESP_COREDUMP_ENABLE 1
#define CONFIG_ESP_COREDUMP_LOGS 1
#define CONFIG_ESP_COREDUMP_MAX_TASKS_NUM 64
#define CONFIG_ESP_COREDUMP_STACK_SIZE 1024
#define CONFIG_FATFS_CODEPAGE_850 1
#define CONFIG_FATFS_CODEPAGE 850
#define CONFIG_FATFS_LFN_STACK 1
#define CONFIG_FATFS_MAX_LFN 255
#define CONFIG_FATFS_API_ENCODING_UTF_8 1
#define CONFIG_FATFS_FS_LOCK 0
#define CONFIG_FATFS_TIMEOUT_MS 10000
#define CONFIG_FATFS_PER_FILE_CACHE 1
#define CONFIG_FATFS_ALLOC_PREFER_EXTRAM 1
#define CONFIG_FMB_COMM_MODE_TCP_EN 1
#define CONFIG_FMB_TCP_PORT_DEFAULT 502
#define CONFIG_FMB_TCP_PORT_MAX_CONN 5
#define CONFIG_FMB_TCP_CONNECTION_TOUT_SEC 20
#define CONFIG_FMB_COMM_MODE_RTU_EN 1
#define CONFIG_FMB_COMM_MODE_ASCII_EN 1
#define CONFIG_FMB_MASTER_TIMEOUT_MS_RESPOND 150
#define CONFIG_FMB_MASTER_DELAY_MS_CONVERT 200
#define CONFIG_FMB_QUEUE_LENGTH 20
#define CONFIG_FMB_PORT_TASK_STACK_SIZE 4096
#define CONFIG_FMB_SERIAL_BUF_SIZE 256
#define CONFIG_FMB_SERIAL_ASCII_BITS_PER_SYMB 8
#define CONFIG_FMB_SERIAL_ASCII_TIMEOUT_RESPOND_MS 1000
#define CONFIG_FMB_PORT_TASK_PRIO 10
#define CONFIG_FMB_PORT_TASK_AFFINITY_CPU0 1
#define CONFIG_FMB_PORT_TASK_AFFINITY 0x0
#define CONFIG_FMB_CONTROLLER_NOTIFY_TIMEOUT 20
#define CONFIG_FMB_CONTROLLER_NOTIFY_QUEUE_SIZE 20
#define CONFIG_FMB_CONTROLLER_STACK_SIZE 4096
#define CONFIG_FMB_EVENT_QUEUE_TIMEOUT 20
#define CONFIG_FMB_TIMER_PORT_ENABLED 1
#define CONFIG_FREERTOS_NO_AFFINITY 0x7FFFFFFF
#define CONFIG_FREERTOS_TICK_SUPPORT_CORETIMER 1
#define CONFIG_FREERTOS_CORETIMER_0 1
#define CONFIG_FREERTOS_SYSTICK_USES_CCOUNT 1
#define CONFIG_FREERTOS_HZ 1000
#define CONFIG_FREERTOS_CHECK_STACKOVERFLOW_CANARY 1
#define CONFIG_FREERTOS_WATCHPOINT_END_OF_STACK 1
#define CONFIG_FREERTOS_INTERRUPT_BACKTRACE 1
#define CONFIG_FREERTOS_THREAD_LOCAL_STORAGE_POINTERS 1
#define CONFIG_FREERTOS_ASSERT_FAIL_ABORT 1
#define CONFIG_FREERTOS_IDLE_TASK_STACKSIZE 1024
#define CONFIG_FREERTOS_ISR_STACKSIZE 2096
#define CONFIG_FREERTOS_MAX_TASK_NAME_LEN 16
#define CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION 1
#define CONFIG_FREERTOS_TIMER_TASK_PRIORITY 1
#define CONFIG_FREERTOS_TIMER_TASK_STACK_DEPTH 2048
#define CONFIG_FREERTOS_TIMER_QUEUE_LENGTH 10
#define CONFIG_FREERTOS_QUEUE_REGISTRY_SIZE 0
#define CONFIG_FREERTOS_CHECK_MUTEX_GIVEN_BY_OWNER 1
#define CONFIG_FREERTOS_DEBUG_OCDAWARE 1
#define CONFIG_FREERTOS_FPU_IN_ISR 1
#define CONFIG_FREERTOS_ENABLE_TASK_SNAPSHOT 1
#define CONFIG_HAL_ASSERTION_EQUALS_SYSTEM 1
#define CONFIG_HAL_DEFAULT_ASSERTION_LEVEL 2
#define CONFIG_HEAP_POISONING_LIGHT 1
#define CONFIG_HEAP_TRACING_OFF 1
#define CONFIG_LOG_DEFAULT_LEVEL_ERROR 1
#define CONFIG_LOG_DEFAULT_LEVEL 1
#define CONFIG_LOG_MAXIMUM_EQUALS_DEFAULT 1
#define CONFIG_LOG_MAXIMUM_LEVEL 1
#define CONFIG_LOG_TIMESTAMP_SOURCE_RTOS 1
#define CONFIG_LWIP_LOCAL_HOSTNAME "espressif"
#define CONFIG_LWIP_TCPIP_TASK_PRIO 18
#define CONFIG_LWIP_DNS_SUPPORT_MDNS_QUERIES 1
#define CONFIG_LWIP_TIMERS_ONDEMAND 1
#define CONFIG_LWIP_MAX_SOCKETS 16
#define CONFIG_LWIP_SO_REUSE 1
#define CONFIG_LWIP_SO_REUSE_RXTOALL 1
#define CONFIG_LWIP_SO_RCVBUF 1
#define CONFIG_LWIP_IP4_FRAG 1
#define CONFIG_LWIP_IP6_FRAG 1
#define CONFIG_LWIP_ETHARP_TRUST_IP_MAC 1
#define CONFIG_LWIP_ESP_GRATUITOUS_ARP 1
#define CONFIG_LWIP_GARP_TMR_INTERVAL 60
#define CONFIG_LWIP_ESP_MLDV6_REPORT 1
#define CONFIG_LWIP_MLDV6_TMR_INTERVAL 40
#define CONFIG_LWIP_TCPIP_RECVMBOX_SIZE 32
#define CONFIG_LWIP_DHCP_DISABLE_VENDOR_CLASS_ID 1
#define CONFIG_LWIP_DHCP_RESTORE_LAST_IP 1
#define CONFIG_LWIP_DHCP_OPTIONS_LEN 128
#define CONFIG_LWIP_DHCP_COARSE_TIMER_SECS 1
#define CONFIG_LWIP_DHCPS 1
#define CONFIG_LWIP_DHCPS_LEASE_UNIT 60
#define CONFIG_LWIP_DHCPS_MAX_STATION_NUM 8
#define CONFIG_LWIP_IPV6 1
#define CONFIG_LWIP_IPV6_AUTOCONFIG 1
#define CONFIG_LWIP_IPV6_NUM_ADDRESSES 3
#define CONFIG_LWIP_IPV6_RDNSS_MAX_DNS_SERVERS 0
#define CONFIG_LWIP_NETIF_LOOPBACK 1
#define CONFIG_LWIP_LOOPBACK_MAX_PBUFS 8
#define CONFIG_LWIP_MAX_ACTIVE_TCP 16
#define CONFIG_LWIP_MAX_LISTENING_TCP 16
#define CONFIG_LWIP_TCP_HIGH_SPEED_RETRANSMISSION 1
#define CONFIG_LWIP_TCP_MAXRTX 12
#define CONFIG_LWIP_TCP_SYNMAXRTX 6
#define CONFIG_LWIP_TCP_MSS 1436
#define CONFIG_LWIP_TCP_TMR_INTERVAL 250
#define CONFIG_LWIP_TCP_MSL 60000
#define CONFIG_LWIP_TCP_FIN_WAIT_TIMEOUT 20000
#define CONFIG_LWIP_TCP_SND_BUF_DEFAULT 5744
#define CONFIG_LWIP_TCP_WND_DEFAULT 5744
#define CONFIG_LWIP_TCP_RECVMBOX_SIZE 6
#define CONFIG_LWIP_TCP_QUEUE_OOSEQ 1
#define CONFIG_LWIP_TCP_OVERSIZE_MSS 1
#define CONFIG_LWIP_TCP_RTO_TIME 3000
#define CONFIG_LWIP_MAX_UDP_PCBS 16
#define CONFIG_LWIP_UDP_RECVMBOX_SIZE 6
#define CONFIG_LWIP_CHECKSUM_CHECK_ICMP 1
#define CONFIG_LWIP_TCPIP_TASK_STACK_SIZE 2560
#define CONFIG_LWIP_TCPIP_TASK_AFFINITY_CPU0 1
#define CONFIG_LWIP_TCPIP_TASK_AFFINITY 0x0
#define CONFIG_LWIP_IPV6_MEMP_NUM_ND6_QUEUE 3
#define CONFIG_LWIP_IPV6_ND6_NUM_NEIGHBORS 5
#define CONFIG_LWIP_ICMP 1
#define CONFIG_LWIP_MAX_RAW_PCBS 16
#define CONFIG_LWIP_SNTP_MAX_SERVERS 3
#define CONFIG_LWIP_DHCP_GET_NTP_SRV 1
#define CONFIG_LWIP_DHCP_MAX_NTP_SERVERS 1
#define CONFIG_LWIP_SNTP_UPDATE_DELAY 10800000
#define CONFIG_LWIP_ESP_LWIP_ASSERT 1
#define CONFIG_LWIP_HOOK_TCP_ISN_DEFAULT 1
#define CONFIG_LWIP_HOOK_IP6_ROUTE_NONE 1
#define CONFIG_LWIP_HOOK_ND6_GET_GW_NONE 1
#define CONFIG_LWIP_HOOK_NETCONN_EXT_RESOLVE_NONE 1
#define CONFIG_MBEDTLS_INTERNAL_MEM_ALLOC 1
#define CONFIG_MBEDTLS_SSL_MAX_CONTENT_LEN 16384
#define CONFIG_MBEDTLS_SSL_KEEP_PEER_CERTIFICATE 1
#define CONFIG_MBEDTLS_CERTIFICATE_BUNDLE 1
#define CONFIG_MBEDTLS_CERTIFICATE_BUNDLE_DEFAULT_FULL 1
#define CONFIG_MBEDTLS_CERTIFICATE_BUNDLE_MAX_CERTS 200
#define CONFIG_MBEDTLS_HARDWARE_AES 1
#define CONFIG_MBEDTLS_HARDWARE_MPI 1
#define CONFIG_MBEDTLS_HARDWARE_SHA 1
#define CONFIG_MBEDTLS_ROM_MD5 1
#define CONFIG_MBEDTLS_HAVE_TIME 1
#define CONFIG_MBEDTLS_ECDSA_DETERMINISTIC 1
#define CONFIG_MBEDTLS_SHA512_C 1
#define CONFIG_MBEDTLS_TLS_SERVER_AND_CLIENT 1
#define CONFIG_MBEDTLS_TLS_SERVER 1
#define CONFIG_MBEDTLS_TLS_CLIENT 1
#define CONFIG_MBEDTLS_TLS_ENABLED 1
#define CONFIG_MBEDTLS_PSK_MODES 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_PSK 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_DHE_PSK 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_PSK 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_RSA_PSK 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_RSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_DHE_RSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ELLIPTIC_CURVE 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_RSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDHE_ECDSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_ECDSA 1
#define CONFIG_MBEDTLS_KEY_EXCHANGE_ECDH_RSA 1
#define CONFIG_MBEDTLS_SSL_RENEGOTIATION 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_1 1
#define CONFIG_MBEDTLS_SSL_PROTO_TLS1_2 1
#define CONFIG_MBEDTLS_SSL_PROTO_DTLS 1
#define CONFIG_MBEDTLS_SSL_ALPN 1
#define CONFIG_MBEDTLS_CLIENT_SSL_SESSION_TICKETS 1
#define CONFIG_MBEDTLS_X509_CHECK_KEY_USAGE 1
#define CONFIG_MBEDTLS_X509_CHECK_EXTENDED_KEY_USAGE 1
#define CONFIG_MBEDTLS_SERVER_SSL_SESSION_TICKETS 1
#define CONFIG_MBEDTLS_AES_C 1
#define CONFIG_MBEDTLS_CAMELLIA_C 1
#define CONFIG_MBEDTLS_RC4_DISABLED 1
#define CONFIG_MBEDTLS_CCM_C 1
#define CONFIG_MBEDTLS_GCM_C 1
#define CONFIG_MBEDTLS_PEM_PARSE_C 1
#define CONFIG_MBEDTLS_PEM_WRITE_C 1
#define CONFIG_MBEDTLS_X509_CRL_PARSE_C 1
#define CONFIG_MBEDTLS_X509_CSR_PARSE_C 1
#define CONFIG_MBEDTLS_ECP_C 1
#define CONFIG_MBEDTLS_ECDH_C 1
#define CONFIG_MBEDTLS_ECDSA_C 1
#define CONFIG_MBEDTLS_ECP_DP_SECP192R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP224R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP256R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP384R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP521R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP192K1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP224K1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_SECP256K1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_BP256R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_BP384R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_BP512R1_ENABLED 1
#define CONFIG_MBEDTLS_ECP_DP_CURVE25519_ENABLED 1
#define CONFIG_MBEDTLS_ECP_NIST_OPTIM 1
#define CONFIG_MDNS_MAX_SERVICES 10
#define CONFIG_MDNS_TASK_PRIORITY 1
#define CONFIG_MDNS_TASK_STACK_SIZE 4096
#define CONFIG_MDNS_TASK_AFFINITY_CPU0 1
#define CONFIG_MDNS_TASK_AFFINITY 0x0
#define CONFIG_MDNS_SERVICE_ADD_TIMEOUT_MS 2000
#define CONFIG_MDNS_TIMER_PERIOD_MS 100
#define CONFIG_MDNS_MULTIPLE_INSTANCE 1
#define CONFIG_MQTT_PROTOCOL_311 1
#define CONFIG_MQTT_TRANSPORT_SSL 1
#define CONFIG_MQTT_TRANSPORT_WEBSOCKET 1
#define CONFIG_MQTT_TRANSPORT_WEBSOCKET_SECURE 1
#define CONFIG_NEWLIB_STDOUT_LINE_ENDING_CRLF 1
#define CONFIG_NEWLIB_STDIN_LINE_ENDING_CR 1
#define CONFIG_OPENSSL_ERROR_STACK 1
#define CONFIG_OPENSSL_ASSERT_DO_NOTHING 1
#define CONFIG_PTHREAD_TASK_PRIO_DEFAULT 5
#define CONFIG_PTHREAD_TASK_STACK_SIZE_DEFAULT 2048
#define CONFIG_PTHREAD_STACK_MIN 768
#define CONFIG_PTHREAD_DEFAULT_CORE_NO_AFFINITY 1
#define CONFIG_PTHREAD_TASK_CORE_DEFAULT -1
#define CONFIG_PTHREAD_TASK_NAME_DEFAULT "pthread"
#define CONFIG_SPI_FLASH_ROM_DRIVER_PATCH 1
#define CONFIG_SPI_FLASH_DANGEROUS_WRITE_ABORTS 1
#define CONFIG_SPI_FLASH_YIELD_DURING_ERASE 1
#define CONFIG_SPI_FLASH_ERASE_YIELD_DURATION_MS 10
#define CONFIG_SPI_FLASH_ERASE_YIELD_TICKS 2
#define CONFIG_SPI_FLASH_WRITE_CHUNK_SIZE 4096
#define CONFIG_SPI_FLASH_SUPPORT_ISSI_CHIP 1
#define CONFIG_SPI_FLASH_SUPPORT_MXIC_CHIP 1
#define CONFIG_SPI_FLASH_SUPPORT_GD_CHIP 1
#define CONFIG_SPI_FLASH_SUPPORT_WINBOND_CHIP 1
#define CONFIG_SPI_FLASH_ENABLE_ENCRYPTED_READ_WRITE 1
#define CONFIG_SPIFFS_MAX_PARTITIONS 3
#define CONFIG_SPIFFS_CACHE 1
#define CONFIG_SPIFFS_CACHE_WR 1
#define CONFIG_SPIFFS_PAGE_CHECK 1
#define CONFIG_SPIFFS_GC_MAX_RUNS 10
#define CONFIG_SPIFFS_PAGE_SIZE 256
#define CONFIG_SPIFFS_OBJ_NAME_LEN 32
#define CONFIG_SPIFFS_USE_MAGIC 1
#define CONFIG_SPIFFS_USE_MAGIC_LENGTH 1
#define CONFIG_SPIFFS_META_LENGTH 4
#define CONFIG_SPIFFS_USE_MTIME 1
#define CONFIG_WS_TRANSPORT 1
#define CONFIG_WS_BUFFER_SIZE 1024
#define CONFIG_UNITY_ENABLE_FLOAT 1
#define CONFIG_UNITY_ENABLE_DOUBLE 1
#define CONFIG_UNITY_ENABLE_IDF_TEST_RUNNER 1
#define CONFIG_VFS_SUPPORT_IO 1
#define CONFIG_VFS_SUPPORT_DIR 1
#define CONFIG_VFS_SUPPORT_SELECT 1
#define CONFIG_VFS_SUPPRESS_SELECT_DEBUG_OUTPUT 1
#define CONFIG_VFS_SUPPORT_TERMIOS 1
#define CONFIG_VFS_SEMIHOSTFS_MAX_MOUNT_POINTS 1
#define CONFIG_WL_SECTOR_SIZE_4096 1
#define CONFIG_WL_SECTOR_SIZE 4096
#define CONFIG_WIFI_PROV_SCAN_MAX_ENTRIES 16
#define CONFIG_WIFI_PROV_AUTOSTOP_TIMEOUT 30
#define CONFIG_WPA_MBEDTLS_CRYPTO 1
#define CONFIG_DIAG_LOG_MSG_ARG_FORMAT_TLV 1
#define CONFIG_DIAG_LOG_MSG_ARG_MAX_SIZE 64
#define CONFIG_DIAG_LOG_DROP_WIFI_LOGS 1
#define CONFIG_DIAG_ENABLE_METRICS 1
#define CONFIG_DIAG_METRICS_MAX_COUNT 20
#define CONFIG_DIAG_ENABLE_HEAP_METRICS 1
#define CONFIG_DIAG_ENABLE_WIFI_METRICS 1
#define CONFIG_DIAG_ENABLE_VARIABLES 1
#define CONFIG_DIAG_VARIABLES_MAX_COUNT 20
#define CONFIG_DIAG_ENABLE_NETWORK_VARIABLES 1
#define CONFIG_ESP_INSIGHTS_ENABLED 1
#define CONFIG_ESP_INSIGHTS_COREDUMP_ENABLE 1
#define CONFIG_ESP_INSIGHTS_TRANSPORT_HTTPS 1
#define CONFIG_ESP_INSIGHTS_TRANSPORT_HTTPS_HOST "https://client.insights.espressif.com"
#define CONFIG_ESP_INSIGHTS_CLOUD_POST_MIN_INTERVAL_SEC 60
#define CONFIG_ESP_INSIGHTS_CLOUD_POST_MAX_INTERVAL_SEC 240
#define CONFIG_ESP_RMAKER_LIB_ESP_MQTT 1
#define CONFIG_ESP_RMAKER_MQTT_GLUE_LIB 1
#define CONFIG_ESP_RMAKER_MQTT_PORT_443 1
#define CONFIG_ESP_RMAKER_MQTT_PORT 1
#define CONFIG_ESP_RMAKER_MQTT_SEND_USERNAME 1
#define CONFIG_ESP_RMAKER_MQTT_PRODUCT_NAME "RMDev"
#define CONFIG_ESP_RMAKER_MQTT_PRODUCT_VERSION "1x0"
#define CONFIG_ESP_RMAKER_MQTT_PRODUCT_SKU "EX00"
#define CONFIG_ESP_RMAKER_MQTT_USE_CERT_BUNDLE 1
#define CONFIG_ESP_RMAKER_MAX_MQTT_SUBSCRIPTIONS 10
#define CONFIG_ESP_RMAKER_WORK_QUEUE_TASK_STACK 4096
#define CONFIG_ESP_RMAKER_WORK_QUEUE_TASK_PRIORITY 5
#define CONFIG_ESP_RMAKER_FACTORY_PARTITION_NAME "fctry"
#define CONFIG_ESP_RMAKER_FACTORY_NAMESPACE "rmaker_creds"
#define CONFIG_ESP_RMAKER_DEF_TIMEZONE "Asia/Shanghai"
#define CONFIG_ESP_RMAKER_SNTP_SERVER_NAME "pool.ntp.org"
#define CONFIG_ESP_RMAKER_MAX_COMMANDS 10
#define CONFIG_RTC_STORE_DATA_SIZE 3072
#define CONFIG_RTC_STORE_CRITICAL_DATA_SIZE 2048
#define CONFIG_RTC_STORE_REPORTING_WATERMARK_PERCENT 80
#define CONFIG_IO_GLITCH_FILTER_TIME_MS 50
#define CONFIG_OV7670_SUPPORT 1
#define CONFIG_OV7725_SUPPORT 1
#define CONFIG_NT99141_SUPPORT 1
#define CONFIG_OV2640_SUPPORT 1
#define CONFIG_OV3660_SUPPORT 1
#define CONFIG_OV5640_SUPPORT 1
#define CONFIG_GC2145_SUPPORT 1
#define CONFIG_GC032A_SUPPORT 1
#define CONFIG_GC0308_SUPPORT 1
#define CONFIG_BF3005_SUPPORT 1
#define CONFIG_BF20A6_SUPPORT 1
#define CONFIG_SC030IOT_SUPPORT 1
#define CONFIG_SCCB_HARDWARE_I2C_PORT1 1
#define CONFIG_SCCB_CLK_FREQ 100000
#define CONFIG_GC_SENSOR_SUBSAMPLE_MODE 1
#define CONFIG_CAMERA_TASK_STACK_SIZE 2048
#define CONFIG_CAMERA_CORE0 1
#define CONFIG_CAMERA_DMA_BUFFER_SIZE_MAX 32768
#define CONFIG_LITTLEFS_MAX_PARTITIONS 3
#define CONFIG_LITTLEFS_PAGE_SIZE 256
#define CONFIG_LITTLEFS_OBJ_NAME_LEN 64
#define CONFIG_LITTLEFS_READ_SIZE 128
#define CONFIG_LITTLEFS_WRITE_SIZE 128
#define CONFIG_LITTLEFS_LOOKAHEAD_SIZE 128
#define CONFIG_LITTLEFS_CACHE_SIZE 512
#define CONFIG_LITTLEFS_BLOCK_CYCLES 512
#define CONFIG_LITTLEFS_USE_MTIME 1
#define CONFIG_LITTLEFS_MTIME_USE_SECONDS 1
#define CONFIG_DSP_OPTIMIZATIONS_SUPPORTED 1
#define CONFIG_DSP_OPTIMIZED 1
#define CONFIG_DSP_OPTIMIZATION 1
#define CONFIG_DSP_MAX_FFT_SIZE_4096 1
#define CONFIG_DSP_MAX_FFT_SIZE 4096

/* List of deprecated options */
#define CONFIG_A2DP_ENABLE CONFIG_BT_A2DP_ENABLE
#define CONFIG_ADC2_DISABLE_DAC CONFIG_ADC_DISABLE_DAC
#define CONFIG_APP_ROLLBACK_ENABLE CONFIG_BOOTLOADER_APP_ROLLBACK_ENABLE
#define CONFIG_BLE_ADV_REPORT_DISCARD_THRSHOLD CONFIG_BTDM_BLE_ADV_REPORT_DISCARD_THRSHOLD
#define CONFIG_BLE_ADV_REPORT_FLOW_CONTROL_NUM CONFIG_BTDM_BLE_ADV_REPORT_FLOW_CTRL_NUM
#define CONFIG_BLE_ADV_REPORT_FLOW_CONTROL_SUPPORTED CONFIG_BTDM_BLE_ADV_REPORT_FLOW_CTRL_SUPP
#define CONFIG_BLE_ESTABLISH_LINK_CONNECTION_TIMEOUT CONFIG_BT_BLE_ESTAB_LINK_CONN_TOUT
#define CONFIG_BLE_MESH_SCAN_DUPLICATE_EN CONFIG_BTDM_BLE_MESH_SCAN_DUPL_EN
#define CONFIG_BLE_SCAN_DUPLICATE CONFIG_BTDM_BLE_SCAN_DUPL
#define CONFIG_BLE_SMP_ENABLE CONFIG_BT_BLE_SMP_ENABLE
#define CONFIG_BLUEDROID_ENABLED CONFIG_BT_BLUEDROID_ENABLED
#define CONFIG_BLUEDROID_PINNED_TO_CORE CONFIG_BT_BLUEDROID_PINNED_TO_CORE
#define CONFIG_BLUEDROID_PINNED_TO_CORE_0 CONFIG_BT_BLUEDROID_PINNED_TO_CORE_0
#define CONFIG_BROWNOUT_DET CONFIG_ESP32_BROWNOUT_DET
#define CONFIG_BROWNOUT_DET_LVL CONFIG_ESP32_BROWNOUT_DET_LVL
#define CONFIG_BROWNOUT_DET_LVL_SEL_0 CONFIG_ESP32_BROWNOUT_DET_LVL_SEL_0
#define CONFIG_BTC_TASK_STACK_SIZE CONFIG_BT_BTC_TASK_STACK_SIZE
#define CONFIG_BTDM_CONTROLLER_BLE_MAX_CONN CONFIG_BTDM_CTRL_BLE_MAX_CONN
#define CONFIG_BTDM_CONTROLLER_BLE_MAX_CONN_EFF CONFIG_BTDM_CTRL_BLE_MAX_CONN_EFF
#define CONFIG_BTDM_CONTROLLER_BR_EDR_MAX_ACL_CONN CONFIG_BTDM_CTRL_BR_EDR_MAX_ACL_CONN
#define CONFIG_BTDM_CONTROLLER_BR_EDR_MAX_ACL_CONN_EFF CONFIG_BTDM_CTRL_BR_EDR_MAX_ACL_CONN_EFF
#define CONFIG_BTDM_CONTROLLER_BR_EDR_MAX_SYNC_CONN CONFIG_BTDM_CTRL_BR_EDR_MAX_SYNC_CONN
#define CONFIG_BTDM_CONTROLLER_BR_EDR_MAX_SYNC_CONN_EFF CONFIG_BTDM_CTRL_BR_EDR_MAX_SYNC_CONN_EFF
#define CONFIG_BTDM_CONTROLLER_FULL_SCAN_SUPPORTED CONFIG_BTDM_CTRL_FULL_SCAN_SUPPORTED
#define CONFIG_BTDM_CONTROLLER_HCI_MODE_VHCI CONFIG_BTDM_CTRL_HCI_MODE_VHCI
#define CONFIG_BTDM_CONTROLLER_MODEM_SLEEP CONFIG_BTDM_CTRL_MODEM_SLEEP
#define CONFIG_BTDM_CONTROLLER_MODE_BTDM CONFIG_BTDM_CTRL_MODE_BTDM
#define CONFIG_BTDM_CONTROLLER_PINNED_TO_CORE CONFIG_BTDM_CTRL_PINNED_TO_CORE
#define CONFIG_BTU_TASK_STACK_SIZE CONFIG_BT_BTU_TASK_STACK_SIZE
#define CONFIG_CLASSIC_BT_ENABLED CONFIG_BT_CLASSIC_ENABLED
#define CONFIG_COMPILER_OPTIMIZATION_LEVEL_RELEASE CONFIG_COMPILER_OPTIMIZATION_SIZE
#define CONFIG_CONSOLE_UART CONFIG_ESP_CONSOLE_UART
#define CONFIG_CONSOLE_UART_BAUDRATE CONFIG_ESP_CONSOLE_UART_BAUDRATE
#define CONFIG_CONSOLE_UART_DEFAULT CONFIG_ESP_CONSOLE_UART_DEFAULT
#define CONFIG_CONSOLE_UART_NUM CONFIG_ESP_CONSOLE_UART_NUM
#define CONFIG_CXX_EXCEPTIONS CONFIG_COMPILER_CXX_EXCEPTIONS
#define CONFIG_CXX_EXCEPTIONS_EMG_POOL_SIZE CONFIG_COMPILER_CXX_EXCEPTIONS_EMG_POOL_SIZE
#define CONFIG_DUPLICATE_SCAN_CACHE_SIZE CONFIG_BTDM_SCAN_DUPL_CACHE_SIZE
#define CONFIG_ESP32S2_PANIC_PRINT_REBOOT CONFIG_ESP_SYSTEM_PANIC_PRINT_REBOOT
#define CONFIG_ESP32_APPTRACE_DEST_NONE CONFIG_APPTRACE_DEST_NONE
#define CONFIG_ESP32_APPTRACE_LOCK_ENABLE CONFIG_APPTRACE_LOCK_ENABLE
#define CONFIG_ESP32_COREDUMP_CHECKSUM_CRC32 CONFIG_ESP_COREDUMP_CHECKSUM_CRC32
#define CONFIG_ESP32_COREDUMP_DATA_FORMAT_ELF CONFIG_ESP_COREDUMP_DATA_FORMAT_ELF
#define CONFIG_ESP32_CORE_DUMP_MAX_TASKS_NUM CONFIG_ESP_COREDUMP_MAX_TASKS_NUM
#define CONFIG_ESP32_CORE_DUMP_STACK_SIZE CONFIG_ESP_COREDUMP_STACK_SIZE
#define CONFIG_ESP32_DEFAULT_PTHREAD_CORE_NO_AFFINITY CONFIG_PTHREAD_DEFAULT_CORE_NO_AFFINITY
#define CONFIG_ESP32_ENABLE_COREDUMP CONFIG_ESP_COREDUMP_ENABLE
#define CONFIG_ESP32_ENABLE_COREDUMP_TO_FLASH CONFIG_ESP_COREDUMP_ENABLE_TO_FLASH
#define CONFIG_ESP32_PANIC_PRINT_REBOOT CONFIG_ESP_SYSTEM_PANIC_PRINT_REBOOT
#define CONFIG_ESP32_PHY_CALIBRATION_AND_DATA_STORAGE CONFIG_ESP_PHY_CALIBRATION_AND_DATA_STORAGE
#define CONFIG_ESP32_PHY_MAX_TX_POWER CONFIG_ESP_PHY_MAX_TX_POWER
#define CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER CONFIG_ESP_PHY_MAX_WIFI_TX_POWER
#define CONFIG_ESP32_PTHREAD_STACK_MIN CONFIG_PTHREAD_STACK_MIN
#define CONFIG_ESP32_PTHREAD_TASK_CORE_DEFAULT CONFIG_PTHREAD_TASK_CORE_DEFAULT
#define CONFIG_ESP32_PTHREAD_TASK_NAME_DEFAULT CONFIG_PTHREAD_TASK_NAME_DEFAULT
#define CONFIG_ESP32_PTHREAD_TASK_PRIO_DEFAULT CONFIG_PTHREAD_TASK_PRIO_DEFAULT
#define CONFIG_ESP32_PTHREAD_TASK_STACK_SIZE_DEFAULT CONFIG_PTHREAD_TASK_STACK_SIZE_DEFAULT
#define CONFIG_ESP32_RTC_CLOCK_SOURCE_INTERNAL_RC CONFIG_ESP32_RTC_CLK_SRC_INT_RC
#define CONFIG_ESP_GRATUITOUS_ARP CONFIG_LWIP_ESP_GRATUITOUS_ARP
#define CONFIG_FLASHMODE_QIO CONFIG_ESPTOOLPY_FLASHMODE_QIO
#define CONFIG_FOUR_UNIVERSAL_MAC_ADDRESS CONFIG_ESP32_UNIVERSAL_MAC_ADDRESSES_FOUR
#define CONFIG_GARP_TMR_INTERVAL CONFIG_LWIP_GARP_TMR_INTERVAL
#define CONFIG_GATTC_ENABLE CONFIG_BT_GATTC_ENABLE
#define CONFIG_GATTS_ENABLE CONFIG_BT_GATTS_ENABLE
#define CONFIG_GATTS_SEND_SERVICE_CHANGE_AUTO CONFIG_BT_GATTS_SEND_SERVICE_CHANGE_AUTO
#define CONFIG_GATTS_SEND_SERVICE_CHANGE_MODE CONFIG_BT_GATTS_SEND_SERVICE_CHANGE_MODE
#define CONFIG_HFP_AUDIO_DATA_PATH_PCM CONFIG_BT_HFP_AUDIO_DATA_PATH_PCM
#define CONFIG_HFP_CLIENT_ENABLE CONFIG_BT_HFP_CLIENT_ENABLE
#define CONFIG_HFP_ENABLE CONFIG_BT_HFP_ENABLE
#define CONFIG_INT_WDT CONFIG_ESP_INT_WDT
#define CONFIG_INT_WDT_CHECK_CPU1 CONFIG_ESP_INT_WDT_CHECK_CPU1
#define CONFIG_INT_WDT_TIMEOUT_MS CONFIG_ESP_INT_WDT_TIMEOUT_MS
#define CONFIG_IPC_TASK_STACK_SIZE CONFIG_ESP_IPC_TASK_STACK_SIZE
#define CONFIG_LOG_BOOTLOADER_LEVEL CONFIG_BOOTLOADER_LOG_LEVEL
#define CONFIG_LOG_BOOTLOADER_LEVEL_NONE CONFIG_BOOTLOADER_LOG_LEVEL_NONE
#define CONFIG_MAIN_TASK_STACK_SIZE CONFIG_ESP_MAIN_TASK_STACK_SIZE
#define CONFIG_MB_CONTROLLER_NOTIFY_QUEUE_SIZE CONFIG_FMB_CONTROLLER_NOTIFY_QUEUE_SIZE
#define CONFIG_MB_CONTROLLER_NOTIFY_TIMEOUT CONFIG_FMB_CONTROLLER_NOTIFY_TIMEOUT
#define CONFIG_MB_CONTROLLER_STACK_SIZE CONFIG_FMB_CONTROLLER_STACK_SIZE
#define CONFIG_MB_EVENT_QUEUE_TIMEOUT CONFIG_FMB_EVENT_QUEUE_TIMEOUT
#define CONFIG_MB_MASTER_DELAY_MS_CONVERT CONFIG_FMB_MASTER_DELAY_MS_CONVERT
#define CONFIG_MB_MASTER_TIMEOUT_MS_RESPOND CONFIG_FMB_MASTER_TIMEOUT_MS_RESPOND
#define CONFIG_MB_QUEUE_LENGTH CONFIG_FMB_QUEUE_LENGTH
#define CONFIG_MB_SERIAL_BUF_SIZE CONFIG_FMB_SERIAL_BUF_SIZE
#define CONFIG_MB_SERIAL_TASK_PRIO CONFIG_FMB_PORT_TASK_PRIO
#define CONFIG_MB_SERIAL_TASK_STACK_SIZE CONFIG_FMB_PORT_TASK_STACK_SIZE
#define CONFIG_MB_TIMER_PORT_ENABLED CONFIG_FMB_TIMER_PORT_ENABLED
#define CONFIG_MESH_DUPLICATE_SCAN_CACHE_SIZE CONFIG_BTDM_MESH_DUPL_SCAN_CACHE_SIZE
#define CONFIG_MONITOR_BAUD CONFIG_ESPTOOLPY_MONITOR_BAUD
#define CONFIG_MONITOR_BAUD_115200B CONFIG_ESPTOOLPY_MONITOR_BAUD_115200B
#define CONFIG_MONITOR_BAUD_OTHER_VAL CONFIG_ESPTOOLPY_MONITOR_BAUD_OTHER_VAL
#define CONFIG_NUMBER_OF_UNIVERSAL_MAC_ADDRESS CONFIG_ESP32_UNIVERSAL_MAC_ADDRESSES
#define CONFIG_OPTIMIZATION_ASSERTIONS_ENABLED CONFIG_COMPILER_OPTIMIZATION_ASSERTIONS_ENABLE
#define CONFIG_OPTIMIZATION_ASSERTION_LEVEL CONFIG_COMPILER_OPTIMIZATION_ASSERTION_LEVEL
#define CONFIG_OPTIMIZATION_LEVEL_RELEASE CONFIG_COMPILER_OPTIMIZATION_SIZE
#define CONFIG_POST_EVENTS_FROM_IRAM_ISR CONFIG_ESP_EVENT_POST_FROM_IRAM_ISR
#define CONFIG_POST_EVENTS_FROM_ISR CONFIG_ESP_EVENT_POST_FROM_ISR
#define CONFIG_SCAN_DUPLICATE_BY_DEVICE_ADDR CONFIG_BTDM_SCAN_DUPL_TYPE_DEVICE
#define CONFIG_SCAN_DUPLICATE_TYPE CONFIG_BTDM_SCAN_DUPL_TYPE
#define CONFIG_SEMIHOSTFS_MAX_MOUNT_POINTS CONFIG_VFS_SEMIHOSTFS_MAX_MOUNT_POINTS
#define CONFIG_SMP_ENABLE CONFIG_BT_SMP_ENABLE
#define CONFIG_SPIRAM_SUPPORT CONFIG_ESP32_SPIRAM_SUPPORT
#define CONFIG_SPI_FLASH_WRITING_DANGEROUS_REGIONS_ABORTS CONFIG_SPI_FLASH_DANGEROUS_WRITE_ABORTS
#define CONFIG_STACK_CHECK CONFIG_COMPILER_STACK_CHECK
#define CONFIG_STACK_CHECK_NORM CONFIG_COMPILER_STACK_CHECK_MODE_NORM
#define CONFIG_SUPPORT_TERMIOS CONFIG_VFS_SUPPORT_TERMIOS
#define CONFIG_SUPPRESS_SELECT_DEBUG_OUTPUT CONFIG_VFS_SUPPRESS_SELECT_DEBUG_OUTPUT
#define CONFIG_SW_COEXIST_ENABLE CONFIG_ESP32_WIFI_SW_COEXIST_ENABLE
#define CONFIG_SYSTEM_EVENT_QUEUE_SIZE CONFIG_ESP_SYSTEM_EVENT_QUEUE_SIZE
#define CONFIG_SYSTEM_EVENT_TASK_STACK_SIZE CONFIG_ESP_SYSTEM_EVENT_TASK_STACK_SIZE
#define CONFIG_TASK_WDT CONFIG_ESP_TASK_WDT
#define CONFIG_TASK_WDT_CHECK_IDLE_TASK_CPU0 CONFIG_ESP_TASK_WDT_CHECK_IDLE_TASK_CPU0
#define CONFIG_TASK_WDT_PANIC CONFIG_ESP_TASK_WDT_PANIC
#define CONFIG_TASK_WDT_TIMEOUT_S CONFIG_ESP_TASK_WDT_TIMEOUT_S
#define CONFIG_TCPIP_RECVMBOX_SIZE CONFIG_LWIP_TCPIP_RECVMBOX_SIZE
#define CONFIG_TCPIP_TASK_AFFINITY CONFIG_LWIP_TCPIP_TASK_AFFINITY
#define CONFIG_TCPIP_TASK_AFFINITY_CPU0 CONFIG_LWIP_TCPIP_TASK_AFFINITY_CPU0
#define CONFIG_TCPIP_TASK_STACK_SIZE CONFIG_LWIP_TCPIP_TASK_STACK_SIZE
#define CONFIG_TCP_MAXRTX CONFIG_LWIP_TCP_MAXRTX
#define CONFIG_TCP_MSL CONFIG_LWIP_TCP_MSL
#define CONFIG_TCP_MSS CONFIG_LWIP_TCP_MSS
#define CONFIG_TCP_OVERSIZE_MSS CONFIG_LWIP_TCP_OVERSIZE_MSS
#define CONFIG_TCP_QUEUE_OOSEQ CONFIG_LWIP_TCP_QUEUE_OOSEQ
#define CONFIG_TCP_RECVMBOX_SIZE CONFIG_LWIP_TCP_RECVMBOX_SIZE
#define CONFIG_TCP_SND_BUF_DEFAULT CONFIG_LWIP_TCP_SND_BUF_DEFAULT
#define CONFIG_TCP_SYNMAXRTX CONFIG_LWIP_TCP_SYNMAXRTX
#define CONFIG_TCP_WND_DEFAULT CONFIG_LWIP_TCP_WND_DEFAULT
#define CONFIG_TIMER_QUEUE_LENGTH CONFIG_FREERTOS_TIMER_QUEUE_LENGTH
#define CONFIG_TIMER_TASK_PRIORITY CONFIG_FREERTOS_TIMER_TASK_PRIORITY
#define CONFIG_TIMER_TASK_STACK_DEPTH CONFIG_FREERTOS_TIMER_TASK_STACK_DEPTH
#define CONFIG_TIMER_TASK_STACK_SIZE CONFIG_ESP_TIMER_TASK_STACK_SIZE
#define CONFIG_TOOLPREFIX CONFIG_SDK_TOOLPREFIX
#define CONFIG_TRACEMEM_RESERVE_DRAM CONFIG_ESP32_TRACEMEM_RESERVE_DRAM
#define CONFIG_UDP_RECVMBOX_SIZE CONFIG_LWIP_UDP_RECVMBOX_SIZE
#define CONFIG_ULP_COPROC_ENABLED CONFIG_ESP32_ULP_COPROC_ENABLED
#define CONFIG_ULP_COPROC_RESERVE_MEM CONFIG_ESP32_ULP_COPROC_RESERVE_MEM
#define CONFIG_WARN_WRITE_STRINGS CONFIG_COMPILER_WARN_WRITE_STRINGS
#define CONFIG_ARDUINO_IDF_COMMIT "0b31c7ab79"
#define CONFIG_ARDUINO_IDF_BRANCH "release/v4.4"
