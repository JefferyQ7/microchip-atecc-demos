/*******************************************************************************
  System Configuration Header

  File Name:
    configuration.h

  Summary:
    Build-time configuration header for the system defined by this project.

  Description:
    An MPLAB Project may have multiple configurations.  This file defines the
    build-time options for a single configuration.

  Remarks:
    This configuration header must not define any prototypes or data
    definitions (or include any files that do).  It only provides macro
    definitions for build-time configuration options

*******************************************************************************/

// DOM-IGNORE-BEGIN
/*******************************************************************************
* Copyright (C) 2018 Microchip Technology Inc. and its subsidiaries.
*
* Subject to your compliance with these terms, you may use Microchip software
* and any derivatives exclusively with Microchip products. It is your
* responsibility to comply with third party license terms applicable to your
* use of third party software (including open source software) that may
* accompany Microchip software.
*
* THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
* EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
* WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
* PARTICULAR PURPOSE.
*
* IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
* INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
* WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
* BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
* FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
* ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
* THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
*******************************************************************************/
// DOM-IGNORE-END

#ifndef CONFIGURATION_H
#define CONFIGURATION_H

// *****************************************************************************
// *****************************************************************************
// Section: Included Files
// *****************************************************************************
// *****************************************************************************
/*  This section Includes other configuration headers necessary to completely
    define this configuration.
*/

#include "user.h"
#include "toolchain_specifics.h"

// DOM-IGNORE-BEGIN
#ifdef __cplusplus  // Provide C++ Compatibility

extern "C" {

#endif
// DOM-IGNORE-END

// *****************************************************************************
// *****************************************************************************
// Section: System Configuration
// *****************************************************************************
// *****************************************************************************



// *****************************************************************************
// *****************************************************************************
// Section: System Service Configuration
// *****************************************************************************
// *****************************************************************************
/* TIME System Service Configuration Options */
#define SYS_TIME_INDEX_0                            (0)
#define SYS_TIME_MAX_TIMERS                         (25)
#define SYS_TIME_HW_COUNTER_WIDTH                   (16)
#define SYS_TIME_HW_COUNTER_PERIOD                  (65535U)
#define SYS_TIME_HW_COUNTER_HALF_PERIOD             (SYS_TIME_HW_COUNTER_PERIOD>>1)
#define SYS_TIME_CPU_CLOCK_FREQUENCY                (48000000)
#define SYS_TIME_COMPARE_UPDATE_EXECUTION_CYCLES    (200)



// *****************************************************************************
// *****************************************************************************
// Section: Driver Configuration
// *****************************************************************************
// *****************************************************************************
/*** WiFi WINC Driver Configuration ***/
#define WDRV_WINC_EIC_SOURCE                EIC_PIN_5
#define WDRV_WINC_SPI_INDEX                 DRV_SPI_INDEX_0
#define WDRV_WINC_NETWORK_MODE_SOCKET
#define WDRV_WINC_DEVICE_WINC1500
#define WDRV_WINC_DEVICE_SPLIT_INIT
#define WDRV_WINC_DEVICE_ENTERPRISE_CONNECT
#define WDRV_WINC_DEVICE_EXT_CONNECT_PARAMS
#define WDRV_WINC_DEVICE_BSS_ROAMING
#define WDRV_WINC_DEVICE_FLEXIBLE_FLASH_MAP
#define WDRV_WINC_DEVICE_DYNAMIC_BYPASS_MODE
#define WDRV_WINC_DEVICE_WPA_SOFT_AP
#define WDRV_WINC_DEVICE_CONF_NTP_SERVER
#define WDRV_WINC_DEVICE_HOST_FILE_DOWNLOAD
#define WDRV_WINC_DEVICE_SOFT_AP_EXT
#define WDRV_WINC_DEVICE_MULTI_GAIN_TABLE
#define WDRV_WINC_DEVICE_URL_TYPE           unsigned char
//#define WDRV_WINC_DEVICE_SCAN_STOP_ON_FIRST
#define WDRV_WINC_DEVICE_OTA_STATUS_EXTENDED
#define WDRV_WINC_DEVICE_SCAN_SSID_LIST
#define WDRV_WINC_DEBUG_LEVEL               WDRV_WINC_DEBUG_TYPE_NONE

/* SPI Driver Instance 0 Configuration Options */
#define DRV_SPI_INDEX_0                       0
#define DRV_SPI_CLIENTS_NUMBER_IDX0           1
#define DRV_SPI_DMA_MODE
#define DRV_SPI_XMIT_DMA_CH_IDX0              SYS_DMA_CHANNEL_2
#define DRV_SPI_RCV_DMA_CH_IDX0               SYS_DMA_CHANNEL_3
#define DRV_SPI_QUEUE_SIZE_IDX0               4

/* SPI Driver Common Configuration Options */
#define DRV_SPI_INSTANCES_NUMBER              1



// *****************************************************************************
// *****************************************************************************
// Section: Middleware & Other Library Configuration
// *****************************************************************************
// *****************************************************************************

/*** wolfMQTT configuration ***/
#define WOLFMQTT_NONBLOCK
#define WOLFMQTT_USER_SETTINGS
// #define WOLFMQTT_NO_TIMEOUT
// #define WOLFMQTT_NO_STDIN_CAP

#define WOLFMQTT_DISCONNECT_CB
#define WOLFMQTT_NO_ERROR_STRINGS
#define WOLFMQTT_NO_STDIO

#define ENABLE_MQTT_TLS

/*** wolMQTT Net Glue configuration ***/
#define WMQTT_NET_GLUE_FORCE_TLS			true
#define WMQTT_NET_GLUE_IPV6					false
#define WMQTT_NET_GLUE_MAX_BROKER_NAME		64
#define WMQTT_NET_GLUE_DEBUG_ENABLE			false
#define WMQTT_NET_GLUE_ERROR_STRINGS		true
#define WMQTT_NET_GLUE_MALLOC				malloc
#define WMQTT_NET_GLUE_FREE					free
#define WMQTT_NET_SKT_TX_BUFF				2048
#define WMQTT_NET_SKT_RX_BUFF				2048





/******************************************************************************/
/*wolfSSL TLS Layer Configuration*/
/******************************************************************************/

#if 0 /* disabled to save code space */
#define WOLFSSL_ALT_NAMES
#define WOLFSSL_DER_LOAD
#define KEEP_OUR_CERT
#define KEEP_PEER_CERT
#define HAVE_CRL_IO
#define HAVE_IO_TIMEOUT
#endif
#define TFM_NO_ASM
#define WOLFSSL_NO_ASM
#define SIZEOF_LONG_LONG 8
#define WOLFSSL_USER_IO
#define NO_WRITEV
//#define MICROCHIP_TCPIP

#define NO_PWDBASED

#define HAVE_TLS_EXTENSIONS
#define HAVE_SUPPORTED_CURVES
#define HAVE_SNI
#define HAVE_EXTENDED_MASTER    
#define HAVE_ENCRYPT_THEN_MAC

#define NO_SESSION_CACHE

//#define DEBUG_WOLFSSL
//#define NO_ERROR_STRINGS

#define NO_OLD_TLS
    
#define USE_FAST_MATH
    
#define NO_WOLFSSL_SERVER
#define HAVE_PK_CALLBACKS
#define WOLFSSL_ATECC608A
#define WOLFSSL_ATECC_TNGTLS
#define WOLFSSL_BASE64_ENCODE

#define WOLFSSL_SMALL_STACK
#define WOLFSSL_SMALL_STACK_CACHE /* reduce heap thrash with SHA256 */
#define WOLFSSL_ALT_CERT_CHAINS /* allow just the peer certificate to verify - not all intermediates */
#define WOLFSSL_VERIFY_CB_ALL_CERTS /* Issue callback for all intermediate certificates */


/*** wolfCrypt Library Configuration ***/
#define MICROCHIP_PIC32
#define MICROCHIP_MPLAB_HARMONY
#define MICROCHIP_MPLAB_HARMONY_3
#define HAVE_MCAPI
#define SIZEOF_LONG_LONG 8
#define WOLFSSL_USER_IO
#define NO_WRITEV
#define NO_FILESYSTEM
#define USE_FAST_MATH
#define NO_PWDBASED
#define HAVE_MCAPI
#define WOLF_CRYPTO_CB  // provide call-back support
// ---------- FUNCTIONAL CONFIGURATION START ----------
#define NO_MD4
#define NO_MD5
#define WOLFSSL_SHA224
#define WOLFSSL_SHA384
#define NO_SHA512
#define NO_DES3
#define WOLFSSL_AES_128
#define NO_AES_192 // not supported by HW accelerator
#define NO_AES_256 // not supported by HW accelerator
#define WOLFSSL_AES_DIRECT
#define HAVE_AES_DECRYPT
#define HAVE_AES_ECB
#define NO_AES_CBC
#define HAVE_AESGCM
#define NO_RC4
#define NO_HC128
#define NO_RABBIT
#define HAVE_ECC
#define NO_DH
#define NO_DSA
#define NO_RSA
#define NO_DEV_RANDOM
#define HAVE_HASHDRBG
#define TFM_TIMING_RESISTANT
#define ECC_TIMING_RESISTANT
#define WC_RSA_BLINDING
#define SINGLE_THREADED
#define NO_SIG_WRAPPER
#define NO_WOLFSSL_MEMORY
// ---------- FUNCTIONAL CONFIGURATION END ----------


#define FP_MAX_BITS (384 * 2) /* max ECC key size * 2 */

#if 0
/* Disable certificate date checking for testing */
#define NO_ASN_TIME
#else
/* Override Current Time */
/* Allows custom "custom_time()" function to be used for benchmark */
#define WOLFSSL_USER_CURRTIME
#define WOLFSSL_GMTIME
#define USER_TICKS
extern unsigned long my_time(unsigned long* timer);
#define XTIME my_time
#endif

// *****************************************************************************
// *****************************************************************************
// Section: Application Configuration
// *****************************************************************************
// *****************************************************************************


//DOM-IGNORE-BEGIN
#ifdef __cplusplus
}
#endif
//DOM-IGNORE-END

#endif // CONFIGURATION_H
/*******************************************************************************
 End of File
*/
