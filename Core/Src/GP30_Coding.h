/*
 * GP30_Coding.h
 *
 *  Created on: 19.08.2022
 *      Author: Matthias Hainz
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef INC_GP30_CODING_H_
#define INC_GP30_CODING_H_

/* Includes ------------------------------------------------------------------*/
#include "GP30_Bit_Definition.h"
#include "GP30_CFG_Macros.h"

/* Exported types ------------------------------------------------------------*/
/** @defgroup GP30_Exported_Types GP30 Exported Types
  * @{
  */

/* Private defines -----------------------------------------------------------*/
/** @defgroup GP30_Private_Constants GP30 Private Constants
  * @{
  */
#define __GP30_CFG_Declaration	uint32_t
#define __GP30_CFG_Array_Size		20		/* Addresses from CR[0] up to CR[19] */
/**
* @}
*/
/**
  * @brief  GP30 Opcode definition
  */
typedef enum _GP30_OpcodeTypeDef
{
	/* Opcode = Hex / Description */
	RC_SYS_RST      = 0x99U,    /*!< Resets GP30 completely                            */
	RC_SYS_INIT     = 0x9AU,    /*!< Resets whole GP30 without configuration registers */
	RC_CPU_INIT     = 0x9BU,    /*!< Resets CPU                                        */
	RC_SV_INIT      = 0x9CU,    /*!< Resets Supervisor                                 */
	RC_FEP_INIT     = 0x9DU,    /*!< Resets Frontend Processing                        */
	RC_RAA_WR       = 0x5AU,    /*!< Write to RAM or register area                     */
	RC_RAA_WR_NVRAM = 0x5BU,    /*!< Write to FW data area (NVRAM)                     */
	RC_RAA_RD       = 0x7AU,    /*!< Read from RAM or register area                    */
	RC_RAA_RD_NVRAM = 0x7BU,    /*!< Read from FW data area (NVRAM)                    */
	RC_FWC_WR       = 0x5CU,    /*!< Write to FW code area (NVRAM)                     */
	RC_MT_REQ       = 0xDAU,    /*!< Measure Task Request                              */
	RC_BM_RLS       = 0x87U,    /*!< Bus Master Release                                */
	RC_BM_REQ       = 0x88U,    /*!< Bus Master Request                                */
	RC_MCT_OFF      = 0x8AU,    /*!< Measure Cycle Timer Off                           */
	RC_MCT_ON       = 0x8BU,    /*!< Measure Cycle Timer On                            */
	RC_GPR_REQ      = 0x8CU,    /*!< General Purpose Request                           */
	RC_IF_CLR       = 0x8DU,    /*!< Interrupt Flags Clear                             */
	RC_COM_REQ      = 0x8EU,    /*!< Communication Request                             */
	RC_FW_CHKSUM    = 0xB8U     /*!< Builds checksum of all FW memories                */
} GP30_OpcodeTypeDef;

/**
  * @brief  GP30 State structure definition
  */
typedef enum _GP30_StateTypeDef
{
	GP30_STATE_RESET      = 0x00U,    /*!< Device not Initialized                           */
	GP30_STATE_READY      = 0x01U,    /*!< Device Configured, Initialized and ready for use */
	GP30_STATE_BUSY       = 0x02U,    /*!< an internal process is ongoing                   */
	GP30_STATE_INTN       = 0x03U,    /*!< Device interrupt state                           */
	GP30_STATE_ERROR      = 0x04U     /*!< Device error state                               */
} GP30_StateTypeDef;

/* Exported types ------------------------------------------------------------*/
/** @defgroup GP30_Exported_Types GP30 Exported Types
  * @{
  */
/**
  * @brief  Configuration CR[0] Structure definition
  */
typedef struct {
	uint32_t WD_DIS;             	/*!< Watchdog Disable */
} GP30_CR0TypeDef;

/**
  * @brief  Configuration CR[1] Structure definition
  */
typedef struct {
	uint8_t PI_TPW;             	/*!< Pulse Interface, Pulse Width */
	uint8_t PI_EN;              	/*!< Pulse Interface Enable */
	uint8_t PI_OUT_MODE;        	/*!< Pulse Interface, Output Mode */
	uint8_t PI_UPD_MODE;        	/*!< Pulse Interface, Automatic Update Mode */
	uint8_t NOT_USED_11;        	/*!< Not used */
	uint8_t E2P_MODE;           	/*!< EEPROM Interface Mode */
	uint8_t E2P_ADR;            	/*!< EEPROM Interface Slave Address */
	uint8_t E2P_PU_EN;          	/*!< EEPROM Interface Pull-up Enable */
	uint32_t NOT_USED_31_22;     	/*!< Not used */
} GP30_CR1TypeDef;

/**
  * @brief  Configuration CR[2] Structure definition
  */
typedef struct {
	uint8_t GP0_DIR;            	/*!< Direction of General Purpose Port 0 */
	uint8_t GP0_SEL;            	/*!< Output Select of General Purpose Port 0 */
	uint8_t GP1_DIR;            	/*!< Direction of General Purpose Port 1 */
	uint8_t GP1_SEL;            	/*!< Output Select of General Purpose Port 1 */
	uint8_t GP2_DIR;            	/*!< Direction of General Purpose Port 2 */
	uint8_t GP2_SEL;            	/*!< Output Select of General Purpose Port 2 */
	uint8_t GP3_DIR;            	/*!< Direction of General Purpose Port 3 */
	uint8_t GP3_SEL;            	/*!< Output Select of General Purpose Port 3 */
	uint8_t GP4_DIR;            	/*!< Direction of General Purpose Port 4 */
	uint8_t GP4_SEL;            	/*!< Output Select of General Purpose Port 4 */
	uint8_t GP5_DIR;            	/*!< Direction of General Purpose Port 5 */
	uint8_t GP5_SEL;            	/*!< Output Select of General Purpose Port 5 */
	uint8_t GP6_DIR;            	/*!< Direction of General Purpose Port 6 */
	uint8_t GP6_SEL;            	/*!< Output Select of General Purpose Port 6 */
	uint8_t NOT_USED_29_28;     	/*!< Not used */
	uint8_t SCK_RXD_CFG;        	/*!< Configuration of SCK (SPI) or RXD (UART) Port */
} GP30_CR2TypeDef;

/**
  * @brief  Configuration CR[3] Structure definition
  */
typedef struct {
	uint8_t UART_DATA_MSG_LEN;  	/*!< Length of automatic data message */
	uint8_t UART_DATA_MSG_ADR;  	/*!< Start of address block of automatic data message */
	uint8_t UART_IRQ_CLR_MODE;  	/*!< UART Interrupt Clear Mode */
	uint8_t UART_HB_MODE;       	/*!< UART High Baud Mode */
	uint8_t UART_HBR;           	/*!< UART High Baud Rate */
	uint8_t UART_WUP_EN;        	/*!< CRC Wake Up Command Enable */
	uint8_t UART_CRC_MODE;      	/*!< CRC Mode */
	uint8_t UART_CRC_INIT_VAL;  	/*!< CRC Initial Value */
	uint8_t UART_CRC_ORDER;     	/*!< CRC unreversed/reversed order */
	uint32_t UART_CRC_POLY;      	/*!< CRC Polynom */
} GP30_CR3TypeDef;

/**
  * @brief  Configuration CR[4] Structure definition
  */
typedef struct {
	uint8_t EF_EN_TDC_TMO;      	/*!< Error Flag Enable, TDC Timeout */
	uint8_t EF_EN_TOF_TMO;      	/*!< Error Flag Enable, TOF Timeout */
	uint8_t EF_EN_AM_TMO;       	/*!< Error Flag Enable, Amplitude Measurement Timeout */
	uint8_t EF_EN_TM_OC;        	/*!< Error Flag Enable, Temperature Measurement Open Circuit */
	uint8_t EF_EN_TM_SC;        	/*!< Error Flag Enable, Temperature Measurement Short Circuit */
	uint8_t EF_EN_ZCC_ERR;      	/*!< Error Flag Enable, Zero Cross Calibration Error */
	uint8_t EF_EN_LBD_ERR;      	/*!< Error Flag Enable, Low Battery Detect Error */
	uint8_t EF_EN_USM_SQC_TMO;  	/*!< Error Flag Enable, Ultrasonic Sequence Timeout */
	uint8_t EF_EN_TM_SQC_TMO;   	/*!< Error Flag Enable, Temperature Sequence Timeout */
	uint8_t EF_EN_TSQ_TMO;      	/*!< Error Flag Enable, Task Sequencer Timeout */
	uint8_t EF_EN_E2P_ACK_ERR;  	/*!< Error Flag Enable, EEPROM Acknowledge Error */
	uint8_t NOT_USED_11;        	/*!< Not used */
	uint8_t EF_EN_CS_FWD1_ERR;  	/*!< Error Flag Enable, FWD1 Checksum Error */
	uint8_t EF_EN_CS_FWD2_ERR;  	/*!< Error Flag Enable, FWD2 Checksum Error */
	uint8_t EF_EN_CS_FWU_ERR;   	/*!< Error Flag Enable, FWU Checksum Error */
	uint8_t EF_EN_CS_FWA_ERR;   	/*!< Error Flag Enable, FWA Checksum Error */
	uint8_t IRQ_EN_TSQ_FNS;     	/*!< Interrupt Request Enable, Task Sequencer finished */
	uint8_t IRQ_EN_TRANS_FNS;   	/*!< Interrupt Request Enable, FW Transaction finished */
	uint8_t IRQ_EN_BLD_FNS;     	/*!< Interrupt Request Enable, Bootload finished */
	uint8_t IRQ_EN_CHKSUM_FNS;  	/*!< Interrupt Request Enable, Checksum generation finished */
	uint8_t IRQ_EN_FW_S;        	/*!< Interrupt Request Enable, Firmware, synchronized with task sequencer */
	uint8_t IRQ_EN_FW;          	/*!< Interrupt Request Enable, Firmware */
	uint8_t IRQ_EN_DBG_STEP_FNS;	/*!< Interrupt Request Enable, Debug Step Finished */
	uint8_t IRQ_EN_ERR_FLAG;    	/*!< Interrupt Request Enable, Error Flag */
	uint8_t CPU_REQ_EN_PP;      	/*!< CPU Request Enable, Post Processing */
	uint8_t HIDDEN_25;          	/*!< Not used */
	uint8_t CPU_REQ_EN_GPH;     	/*!< CPU Request Enable, General Purpose Handling */
	uint8_t HIDDEN_27;          	/*!< Mandatory setting: b0 */
	uint8_t CPU_GPT;            	/*!< General Purpose Timer */
	uint8_t CPU_BLD_CS;         	/*!< Checksum Execution after bootloader */
} GP30_CR4TypeDef;

/**
  * @brief  Configuration CR[5] Structure definition
  */
typedef struct {
	uint8_t HIDDEN_1_0;         	/*!< Mandatory setting: b00 */
	uint8_t HS_CLK_ST;          	/*!< High-Speed Clock Settling Time */
	uint8_t HBR_TO;             	/*!< High-Speed Clock Timeout if High Baud rate enabled */
	uint8_t HS_CLK_SEL;         	/*!< High-Speed Clock Select, if operating in flow meter mode. For initial communication or operating in time conversion mode, HS_CLK_SEL in SHR_RC 0xDE has to be used.  */
	uint8_t HSC_RATE;           	/*!< High-Speed Clock Calibration Rate */
	uint8_t GPH_MODE;           	/*!< General Purpose Handling Mode */
	uint8_t VM_RATE;            	/*!< VCC Voltage measurement rate */
	uint8_t LBD_TH;             	/*!< Low battery detection threshold */
	uint8_t TSV_UPD_MODE;       	/*!< Time stamp update mode */
	uint8_t BF_SEL;             	/*!< Base Frequency Select */
	uint8_t NOT_USED_31_24;     	/*!< Not used */
} GP30_CR5TypeDef;

/**
  * @brief  Configuration CR[6] Structure definition
  */
typedef struct {
	uint32_t MR_CT;              	/*!< Measure rate cycle time */
	uint8_t TS_RESTART_EN;      	/*!< Task Sequencer Restart Enable */
	uint8_t PP_EN;              	/*!< Post processing enable */
	uint8_t PP_MODE;            	/*!< Post processing mode (only if post processing is enabled) */
	uint8_t BG_PLS_MODE;        	/*!< Bandgap pulse mode */
	uint8_t HIDDEN_19_17;       	/*!< Mandatory setting: b000 */
	uint8_t TS_CST;             	/*!< Checksum Timer */
	uint8_t TS_START_MODE;      	/*!< Task Sequencing Start Mode */
	uint8_t NOT_USED_31_24;     	/*!< Not used */
} GP30_CR6TypeDef;

/**
  * @brief  Configuration CR[7] Structure definition
  */
typedef struct {
	uint32_t TM_RATE;            	/*!< Temperature Measurement Rate */
	uint8_t TM_PAUSE;           	/*!< Pause time between 2 temperature measurements */
	uint8_t TM_MODE;            	/*!< Temperature Measurement Mode */
	uint8_t TM_WIRE_MODE;       	/*!< Temperature Measurement Wire Mode */
	uint8_t TM_PORT_NO;         	/*!< Number of Ports */
	uint8_t TM_PORT_MODE;       	/*!< Port Mode */
	uint8_t TM_PORT_ORDER;      	/*!< TM Measurement Port Order */
	uint8_t TM_LD_DLY;          	/*!< Temperature Measurement Load Delay */
	uint8_t TM_DCH_SEL;         	/*!< TM Discharge Select */
	uint8_t TM_FAKE_NO;         	/*!< Number of Fake measurements */
	uint8_t NOT_USED_31_24;     	/*!< Not used */
} GP30_CR7TypeDef;

/**
  * @brief  Configuration CR[8] Structure definition
  */
typedef struct {
	uint8_t USM_PAUSE;          	/*!< Pause time between 2 ultrasonic measurements */
	uint8_t NOT_USED_3;         	/*!< Not used */
	uint8_t USM_DIR_MODE;       	/*!< Ultrasonic Measurement Direction Mode */
	uint8_t HIDDEN_7_6;         	/*!< Mandatory setting: b00 */
	uint8_t USM_NOISE_MASK_WIN; 	/*!< Noise Mask Window */
	uint8_t USM_TO;             	/*!< Timeout */
	uint32_t NOT_USED_31_18;     	/*!< Not used */
} GP30_CR8TypeDef;

/**
  * @brief  Configuration CR[9] Structure definition
  */
typedef struct {
	uint8_t FPG_CLK_DIV;        	/*!< Fire pulse generator clock divider, Frequency = High Speed Clock divided by (FPG_CLK_DIV + 1) */
	uint8_t FPG_FP_NO;          	/*!< Number of fire pulses */
	uint8_t ZCD_FHL_POL;        	/*!< First Hit Level polarity */
	uint8_t ZCC_RATE;           	/*!< Zero Cross Calibration Rate */
	uint8_t TI_PATH_SEL;        	/*!< Transducer interface path select */
	uint8_t TI_ERA_EN;          	/*!< External receive amplifier */
	uint8_t TI_PATH_EN;         	/*!< Transducer Interface Path Enable */
	uint8_t TI_GM_MODE;         	/*!< Gas Meter Mode */
	uint8_t NOT_USED_31_27;     	/*!< Not used */
} GP30_CR9TypeDef;

/**
  * @brief  Configuration CR[10] Structure definition
  */
typedef struct {
	uint8_t TOF_START_HIT_MODE; 	/*!< Selects mode for TOF start hit */
	uint8_t TOF_START_HIT_NO;   	/*!< Defines number of detected hits after first hit */
	uint8_t TOF_HIT_IGN;        	/*!< Number of hits ignored between two TOF hits taken for TDC measurement */
	uint8_t TOF_HIT_NO;         	/*!< Number of TOF hits taken for TDC measurement */
	uint8_t TOF_HITS_TO_FDB;    	/*!< TOF Hits stored to frontend data buffer */
	uint8_t TOF_EDGE_MODE;      	/*!< Time of Flight, Edge Mode */
	uint32_t NOT_USED_31_16;     	/*!< Not used */
} GP30_CR10TypeDef;

/**
  * @brief  Configuration CR[11] Structure definition
  */
typedef struct {
	uint8_t AM_RATE;            	/*!< Amplitude measurement Rate */
	uint8_t HIDDEN_3;           	/*!< Mandatory setting: b0 */
	uint8_t AM_PD_END;          	/*!< Amplitude Measurement, Peak Detection End */
	uint8_t HIDDEN_11_9;        	/*!< Mandatory setting: b111 */
	uint8_t AMC_RATE;           	/*!< Amplitude measurement calibration rate */
	uint8_t PWD_EN;             	/*!< Enables pulse width detection */
	uint32_t NOT_USED_31_16;     	/*!< Not used */
} GP30_CR11TypeDef;

/**
  * @brief  Configuration CR[12] Structure definition
  */
typedef struct {
	uint32_t CR_TRIM1;           	/*!< Default settung: 0x84A0C47C */
} GP30_CR12TypeDef;

/**
  * @brief  Configuration CR[13] Structure definition
  */
typedef struct {
	uint32_t CR_TRIM2;           	/*!< Default settung: 0x401725CF */
} GP30_CR13TypeDef;

/**
  * @brief  Configuration CR[14] Structure definition
  */
typedef struct {
	uint32_t CR_TRIM3;           	/*!< Default settung: 0x00270808 */
} GP30_CR14TypeDef;

/**
  * @brief  Configuration CR[15] Structure definition
  */
typedef struct {
	uint8_t TOF_RATE;           	/*!< TOF Rate */
	uint32_t NOT_USED_31_6;      	/*!< Not used */
} GP30_CR15TypeDef;

/**
  * @brief  Configuration CR[16] Structure definition
  */
typedef struct {
	uint8_t ZCD_FHL_U;          	/*!< First Hit Level Up */
	uint32_t NOT_USED_31_8;      	/*!< Not used */
} GP30_CR16TypeDef;

/**
  * @brief  Configuration CR[17] Structure definition
  */
typedef struct {
	uint8_t ZCD_FHL_D;          	/*!< First Hit Level Down */
	uint32_t NOT_USED_31_8;      	/*!< Not used */
} GP30_CR17TypeDef;

/**
  * @brief  Configuration CR[18] Structure definition
  */
typedef struct {
	uint32_t TOF_START_HIT_DLY;  	/*!< Hit Release Delay */
	uint32_t NOT_USED_31_19;     	/*!< Not used */
} GP30_CR18TypeDef;

/**
  * @brief  Configuration CR[19] Structure definition
  */
typedef struct {
	uint8_t HS_CLK_SEL;         	/*!< Initiale Communication value? */
} GP30_CR19TypeDef;


/**
  * @brief  Configuration Structure definition
  */
typedef struct {
	GP30_CR0TypeDef CR0;	/*!< Configuration Register Address C0 */
	GP30_CR1TypeDef CR1;	/*!< Configuration Register Address C1 */
	GP30_CR2TypeDef CR2;	/*!< Configuration Register Address C2 */
	GP30_CR3TypeDef CR3;	/*!< Configuration Register Address C3 */
	GP30_CR4TypeDef CR4;	/*!< Configuration Register Address C4 */
	GP30_CR5TypeDef CR5;	/*!< Configuration Register Address C5 */
	GP30_CR6TypeDef CR6;	/*!< Configuration Register Address C6 */
	GP30_CR7TypeDef CR7;	/*!< Configuration Register Address C7 */
	GP30_CR8TypeDef CR8;	/*!< Configuration Register Address C8 */
	GP30_CR9TypeDef CR9;	/*!< Configuration Register Address C9 */
	GP30_CR10TypeDef CR10;	/*!< Configuration Register Address CA */
	GP30_CR11TypeDef CR11;	/*!< Configuration Register Address CB */
	GP30_CR12TypeDef CR12;	/*!< Configuration Register Address CC */
	GP30_CR13TypeDef CR13;	/*!< Configuration Register Address CD */
	GP30_CR14TypeDef CR14;	/*!< Configuration Register Address CE */
	GP30_CR15TypeDef CR15;	/*!< Configuration Register Address D0 */
	GP30_CR16TypeDef CR16;	/*!< Configuration Register Address DA */
	GP30_CR17TypeDef CR17;	/*!< Configuration Register Address DB */
	GP30_CR18TypeDef CR18;	/*!< Configuration Register Address D8 */
	GP30_CR19TypeDef CR19;	/*!< Configuration Register Address DE */

	/* additional parameter, more than one register long
	 * custom content */

	//uint32_t refclk_division;
} GP30_ParamTypeDef;
/**
* @}
*/

/**
  * @brief  Initialization Structure definition
  */
typedef struct {
	__GP30_CFG_Declaration CR[__GP30_CFG_Array_Size];

	GP30_ParamTypeDef Param;	/*!< Configuration Parameter */

	/* place for custom content
	 * e.g. further registers */

	GP30_StateTypeDef State;	/*!< Status of GP30 */

} GP30_InitTypeDef;
/**
* @}
*/

/* Private function prototypes -----------------------------------------------*/
/** @defgroup GP30_Private_Functions GP30 Private Functions
  * @{
  */
/**
  * @brief  Handle parameter update.
  * @param  init pointer to a GP30_InitTypeDef structure that contains
  *               the configuration information for the specified device.
  * @retval None
  */
void GP30_Update_Param(GP30_InitTypeDef* init)  {
	/* Read all content from CR[] and write into every parameter
	 * Update for each parameter */
	/* Parameter of CR[0] */
	init->Param.CR0.WD_DIS = ( (init->CR[0]) & GP30_C0_WD_DIS_Msk ) >> GP30_C0_WD_DIS_Pos;
	/* Parameter of CR[1] */
	init->Param.CR1.PI_TPW = ( (init->CR[1]) & GP30_C1_PI_TPW_Msk ) >> GP30_C1_PI_TPW_Pos;
	init->Param.CR1.PI_EN = ( (init->CR[1]) & GP30_C1_PI_EN_Msk ) >> GP30_C1_PI_EN_Pos;
	init->Param.CR1.PI_OUT_MODE = ( (init->CR[1]) & GP30_C1_PI_OUT_MODE_Msk ) >> GP30_C1_PI_OUT_MODE_Pos;
	init->Param.CR1.PI_UPD_MODE = ( (init->CR[1]) & GP30_C1_PI_UPD_MODE_Msk ) >> GP30_C1_PI_UPD_MODE_Pos;
	init->Param.CR1.NOT_USED_11 = ( (init->CR[1]) & GP30_C1_NOT_USED_11_Msk ) >> GP30_C1_NOT_USED_11_Pos;
	init->Param.CR1.E2P_MODE = ( (init->CR[1]) & GP30_C1_E2P_MODE_Msk ) >> GP30_C1_E2P_MODE_Pos;
	init->Param.CR1.E2P_ADR = ( (init->CR[1]) & GP30_C1_E2P_ADR_Msk ) >> GP30_C1_E2P_ADR_Pos;
	init->Param.CR1.E2P_PU_EN = ( (init->CR[1]) & GP30_C1_E2P_PU_EN_Msk ) >> GP30_C1_E2P_PU_EN_Pos;
	init->Param.CR1.NOT_USED_31_22 = ( (init->CR[1]) & GP30_C1_NOT_USED_31_22_Msk ) >> GP30_C1_NOT_USED_31_22_Pos;
	/* Parameter of CR[2] */
	init->Param.CR2.GP0_DIR = ( (init->CR[2]) & GP30_C2_GP0_DIR_Msk ) >> GP30_C2_GP0_DIR_Pos;
	init->Param.CR2.GP0_SEL = ( (init->CR[2]) & GP30_C2_GP0_SEL_Msk ) >> GP30_C2_GP0_SEL_Pos;
	init->Param.CR2.GP1_DIR = ( (init->CR[2]) & GP30_C2_GP1_DIR_Msk ) >> GP30_C2_GP1_DIR_Pos;
	init->Param.CR2.GP1_SEL = ( (init->CR[2]) & GP30_C2_GP1_SEL_Msk ) >> GP30_C2_GP1_SEL_Pos;
	init->Param.CR2.GP2_DIR = ( (init->CR[2]) & GP30_C2_GP2_DIR_Msk ) >> GP30_C2_GP2_DIR_Pos;
	init->Param.CR2.GP2_SEL = ( (init->CR[2]) & GP30_C2_GP2_SEL_Msk ) >> GP30_C2_GP2_SEL_Pos;
	init->Param.CR2.GP3_DIR = ( (init->CR[2]) & GP30_C2_GP3_DIR_Msk ) >> GP30_C2_GP3_DIR_Pos;
	init->Param.CR2.GP3_SEL = ( (init->CR[2]) & GP30_C2_GP3_SEL_Msk ) >> GP30_C2_GP3_SEL_Pos;
	init->Param.CR2.GP4_DIR = ( (init->CR[2]) & GP30_C2_GP4_DIR_Msk ) >> GP30_C2_GP4_DIR_Pos;
	init->Param.CR2.GP4_SEL = ( (init->CR[2]) & GP30_C2_GP4_SEL_Msk ) >> GP30_C2_GP4_SEL_Pos;
	init->Param.CR2.GP5_DIR = ( (init->CR[2]) & GP30_C2_GP5_DIR_Msk ) >> GP30_C2_GP5_DIR_Pos;
	init->Param.CR2.GP5_SEL = ( (init->CR[2]) & GP30_C2_GP5_SEL_Msk ) >> GP30_C2_GP5_SEL_Pos;
	init->Param.CR2.GP6_DIR = ( (init->CR[2]) & GP30_C2_GP6_DIR_Msk ) >> GP30_C2_GP6_DIR_Pos;
	init->Param.CR2.GP6_SEL = ( (init->CR[2]) & GP30_C2_GP6_SEL_Msk ) >> GP30_C2_GP6_SEL_Pos;
	init->Param.CR2.NOT_USED_29_28 = ( (init->CR[2]) & GP30_C2_NOT_USED_29_28_Msk ) >> GP30_C2_NOT_USED_29_28_Pos;
	init->Param.CR2.SCK_RXD_CFG = ( (init->CR[2]) & GP30_C2_SCK_RXD_CFG_Msk ) >> GP30_C2_SCK_RXD_CFG_Pos;
	/* Parameter of CR[3] */
	init->Param.CR3.UART_DATA_MSG_LEN = ( (init->CR[3]) & GP30_C3_UART_DATA_MSG_LEN_Msk ) >> GP30_C3_UART_DATA_MSG_LEN_Pos;
	init->Param.CR3.UART_DATA_MSG_ADR = ( (init->CR[3]) & GP30_C3_UART_DATA_MSG_ADR_Msk ) >> GP30_C3_UART_DATA_MSG_ADR_Pos;
	init->Param.CR3.UART_IRQ_CLR_MODE = ( (init->CR[3]) & GP30_C3_UART_IRQ_CLR_MODE_Msk ) >> GP30_C3_UART_IRQ_CLR_MODE_Pos;
	init->Param.CR3.UART_HB_MODE = ( (init->CR[3]) & GP30_C3_UART_HB_MODE_Msk ) >> GP30_C3_UART_HB_MODE_Pos;
	init->Param.CR3.UART_HBR = ( (init->CR[3]) & GP30_C3_UART_HBR_Msk ) >> GP30_C3_UART_HBR_Pos;
	init->Param.CR3.UART_WUP_EN = ( (init->CR[3]) & GP30_C3_UART_WUP_EN_Msk ) >> GP30_C3_UART_WUP_EN_Pos;
	init->Param.CR3.UART_CRC_MODE = ( (init->CR[3]) & GP30_C3_UART_CRC_MODE_Msk ) >> GP30_C3_UART_CRC_MODE_Pos;
	init->Param.CR3.UART_CRC_INIT_VAL = ( (init->CR[3]) & GP30_C3_UART_CRC_INIT_VAL_Msk ) >> GP30_C3_UART_CRC_INIT_VAL_Pos;
	init->Param.CR3.UART_CRC_ORDER = ( (init->CR[3]) & GP30_C3_UART_CRC_ORDER_Msk ) >> GP30_C3_UART_CRC_ORDER_Pos;
	init->Param.CR3.UART_CRC_POLY = ( (init->CR[3]) & GP30_C3_UART_CRC_POLY_Msk ) >> GP30_C3_UART_CRC_POLY_Pos;
	/* Parameter of CR[4] */
	init->Param.CR4.EF_EN_TDC_TMO = ( (init->CR[4]) & GP30_C4_EF_EN_TDC_TMO_Msk ) >> GP30_C4_EF_EN_TDC_TMO_Pos;
	init->Param.CR4.EF_EN_TOF_TMO = ( (init->CR[4]) & GP30_C4_EF_EN_TOF_TMO_Msk ) >> GP30_C4_EF_EN_TOF_TMO_Pos;
	init->Param.CR4.EF_EN_AM_TMO = ( (init->CR[4]) & GP30_C4_EF_EN_AM_TMO_Msk ) >> GP30_C4_EF_EN_AM_TMO_Pos;
	init->Param.CR4.EF_EN_TM_OC = ( (init->CR[4]) & GP30_C4_EF_EN_TM_OC_Msk ) >> GP30_C4_EF_EN_TM_OC_Pos;
	init->Param.CR4.EF_EN_TM_SC = ( (init->CR[4]) & GP30_C4_EF_EN_TM_SC_Msk ) >> GP30_C4_EF_EN_TM_SC_Pos;
	init->Param.CR4.EF_EN_ZCC_ERR = ( (init->CR[4]) & GP30_C4_EF_EN_ZCC_ERR_Msk ) >> GP30_C4_EF_EN_ZCC_ERR_Pos;
	init->Param.CR4.EF_EN_LBD_ERR = ( (init->CR[4]) & GP30_C4_EF_EN_LBD_ERR_Msk ) >> GP30_C4_EF_EN_LBD_ERR_Pos;
	init->Param.CR4.EF_EN_USM_SQC_TMO = ( (init->CR[4]) & GP30_C4_EF_EN_USM_SQC_TMO_Msk ) >> GP30_C4_EF_EN_USM_SQC_TMO_Pos;
	init->Param.CR4.EF_EN_TM_SQC_TMO = ( (init->CR[4]) & GP30_C4_EF_EN_TM_SQC_TMO_Msk ) >> GP30_C4_EF_EN_TM_SQC_TMO_Pos;
	init->Param.CR4.EF_EN_TSQ_TMO = ( (init->CR[4]) & GP30_C4_EF_EN_TSQ_TMO_Msk ) >> GP30_C4_EF_EN_TSQ_TMO_Pos;
	init->Param.CR4.EF_EN_E2P_ACK_ERR = ( (init->CR[4]) & GP30_C4_EF_EN_E2P_ACK_ERR_Msk ) >> GP30_C4_EF_EN_E2P_ACK_ERR_Pos;
	init->Param.CR4.NOT_USED_11 = ( (init->CR[4]) & GP30_C4_NOT_USED_11_Msk ) >> GP30_C4_NOT_USED_11_Pos;
	init->Param.CR4.EF_EN_CS_FWD1_ERR = ( (init->CR[4]) & GP30_C4_EF_EN_CS_FWD1_ERR_Msk ) >> GP30_C4_EF_EN_CS_FWD1_ERR_Pos;
	init->Param.CR4.EF_EN_CS_FWD2_ERR = ( (init->CR[4]) & GP30_C4_EF_EN_CS_FWD2_ERR_Msk ) >> GP30_C4_EF_EN_CS_FWD2_ERR_Pos;
	init->Param.CR4.EF_EN_CS_FWU_ERR = ( (init->CR[4]) & GP30_C4_EF_EN_CS_FWU_ERR_Msk ) >> GP30_C4_EF_EN_CS_FWU_ERR_Pos;
	init->Param.CR4.EF_EN_CS_FWA_ERR = ( (init->CR[4]) & GP30_C4_EF_EN_CS_FWA_ERR_Msk ) >> GP30_C4_EF_EN_CS_FWA_ERR_Pos;
	init->Param.CR4.IRQ_EN_TSQ_FNS = ( (init->CR[4]) & GP30_C4_IRQ_EN_TSQ_FNS_Msk ) >> GP30_C4_IRQ_EN_TSQ_FNS_Pos;
	init->Param.CR4.IRQ_EN_TRANS_FNS = ( (init->CR[4]) & GP30_C4_IRQ_EN_TRANS_FNS_Msk ) >> GP30_C4_IRQ_EN_TRANS_FNS_Pos;
	init->Param.CR4.IRQ_EN_BLD_FNS = ( (init->CR[4]) & GP30_C4_IRQ_EN_BLD_FNS_Msk ) >> GP30_C4_IRQ_EN_BLD_FNS_Pos;
	init->Param.CR4.IRQ_EN_CHKSUM_FNS = ( (init->CR[4]) & GP30_C4_IRQ_EN_CHKSUM_FNS_Msk ) >> GP30_C4_IRQ_EN_CHKSUM_FNS_Pos;
	init->Param.CR4.IRQ_EN_FW_S = ( (init->CR[4]) & GP30_C4_IRQ_EN_FW_S_Msk ) >> GP30_C4_IRQ_EN_FW_S_Pos;
	init->Param.CR4.IRQ_EN_FW = ( (init->CR[4]) & GP30_C4_IRQ_EN_FW_Msk ) >> GP30_C4_IRQ_EN_FW_Pos;
	init->Param.CR4.IRQ_EN_DBG_STEP_FNS = ( (init->CR[4]) & GP30_C4_IRQ_EN_DBG_STEP_FNS_Msk ) >> GP30_C4_IRQ_EN_DBG_STEP_FNS_Pos;
	init->Param.CR4.IRQ_EN_ERR_FLAG = ( (init->CR[4]) & GP30_C4_IRQ_EN_ERR_FLAG_Msk ) >> GP30_C4_IRQ_EN_ERR_FLAG_Pos;
	init->Param.CR4.CPU_REQ_EN_PP = ( (init->CR[4]) & GP30_C4_CPU_REQ_EN_PP_Msk ) >> GP30_C4_CPU_REQ_EN_PP_Pos;
	init->Param.CR4.HIDDEN_25 = ( (init->CR[4]) & GP30_C4_HIDDEN_25_Msk ) >> GP30_C4_HIDDEN_25_Pos;
	init->Param.CR4.CPU_REQ_EN_GPH = ( (init->CR[4]) & GP30_C4_CPU_REQ_EN_GPH_Msk ) >> GP30_C4_CPU_REQ_EN_GPH_Pos;
	init->Param.CR4.HIDDEN_27 = ( (init->CR[4]) & GP30_C4_HIDDEN_27_Msk ) >> GP30_C4_HIDDEN_27_Pos;
	init->Param.CR4.CPU_GPT = ( (init->CR[4]) & GP30_C4_CPU_GPT_Msk ) >> GP30_C4_CPU_GPT_Pos;
	init->Param.CR4.CPU_BLD_CS = ( (init->CR[4]) & GP30_C4_CPU_BLD_CS_Msk ) >> GP30_C4_CPU_BLD_CS_Pos;
	/* Parameter of CR[5] */
	init->Param.CR5.HIDDEN_1_0 = ( (init->CR[5]) & GP30_C5_HIDDEN_1_0_Msk ) >> GP30_C5_HIDDEN_1_0_Pos;
	init->Param.CR5.HS_CLK_ST = ( (init->CR[5]) & GP30_C5_HS_CLK_ST_Msk ) >> GP30_C5_HS_CLK_ST_Pos;
	init->Param.CR5.HBR_TO = ( (init->CR[5]) & GP30_C5_HBR_TO_Msk ) >> GP30_C5_HBR_TO_Pos;
	init->Param.CR5.HS_CLK_SEL = ( (init->CR[5]) & GP30_C5_HS_CLK_SEL_Msk ) >> GP30_C5_HS_CLK_SEL_Pos;
	init->Param.CR5.HSC_RATE = ( (init->CR[5]) & GP30_C5_HSC_RATE_Msk ) >> GP30_C5_HSC_RATE_Pos;
	init->Param.CR5.GPH_MODE = ( (init->CR[5]) & GP30_C5_GPH_MODE_Msk ) >> GP30_C5_GPH_MODE_Pos;
	init->Param.CR5.VM_RATE = ( (init->CR[5]) & GP30_C5_VM_RATE_Msk ) >> GP30_C5_VM_RATE_Pos;
	init->Param.CR5.LBD_TH = ( (init->CR[5]) & GP30_C5_LBD_TH_Msk ) >> GP30_C5_LBD_TH_Pos;
	init->Param.CR5.TSV_UPD_MODE = ( (init->CR[5]) & GP30_C5_TSV_UPD_MODE_Msk ) >> GP30_C5_TSV_UPD_MODE_Pos;
	init->Param.CR5.BF_SEL = ( (init->CR[5]) & GP30_C5_BF_SEL_Msk ) >> GP30_C5_BF_SEL_Pos;
	init->Param.CR5.NOT_USED_31_24 = ( (init->CR[5]) & GP30_C5_NOT_USED_31_24_Msk ) >> GP30_C5_NOT_USED_31_24_Pos;
	/* Parameter of CR[6] */
	init->Param.CR6.MR_CT = ( (init->CR[6]) & GP30_C6_MR_CT_Msk ) >> GP30_C6_MR_CT_Pos;
	init->Param.CR6.TS_RESTART_EN = ( (init->CR[6]) & GP30_C6_TS_RESTART_EN_Msk ) >> GP30_C6_TS_RESTART_EN_Pos;
	init->Param.CR6.PP_EN = ( (init->CR[6]) & GP30_C6_PP_EN_Msk ) >> GP30_C6_PP_EN_Pos;
	init->Param.CR6.PP_MODE = ( (init->CR[6]) & GP30_C6_PP_MODE_Msk ) >> GP30_C6_PP_MODE_Pos;
	init->Param.CR6.BG_PLS_MODE = ( (init->CR[6]) & GP30_C6_BG_PLS_MODE_Msk ) >> GP30_C6_BG_PLS_MODE_Pos;
	init->Param.CR6.HIDDEN_19_17 = ( (init->CR[6]) & GP30_C6_HIDDEN_19_17_Msk ) >> GP30_C6_HIDDEN_19_17_Pos;
	init->Param.CR6.TS_CST = ( (init->CR[6]) & GP30_C6_TS_CST_Msk ) >> GP30_C6_TS_CST_Pos;
	init->Param.CR6.TS_START_MODE = ( (init->CR[6]) & GP30_C6_TS_START_MODE_Msk ) >> GP30_C6_TS_START_MODE_Pos;
	init->Param.CR6.NOT_USED_31_24 = ( (init->CR[6]) & GP30_C6_NOT_USED_31_24_Msk ) >> GP30_C6_NOT_USED_31_24_Pos;
	/* Parameter of CR[7] */
	init->Param.CR7.TM_RATE = ( (init->CR[7]) & GP30_C7_TM_RATE_Msk ) >> GP30_C7_TM_RATE_Pos;
	init->Param.CR7.TM_PAUSE = ( (init->CR[7]) & GP30_C7_TM_PAUSE_Msk ) >> GP30_C7_TM_PAUSE_Pos;
	init->Param.CR7.TM_MODE = ( (init->CR[7]) & GP30_C7_TM_MODE_Msk ) >> GP30_C7_TM_MODE_Pos;
	init->Param.CR7.TM_WIRE_MODE = ( (init->CR[7]) & GP30_C7_TM_WIRE_MODE_Msk ) >> GP30_C7_TM_WIRE_MODE_Pos;
	init->Param.CR7.TM_PORT_NO = ( (init->CR[7]) & GP30_C7_TM_PORT_NO_Msk ) >> GP30_C7_TM_PORT_NO_Pos;
	init->Param.CR7.TM_PORT_MODE = ( (init->CR[7]) & GP30_C7_TM_PORT_MODE_Msk ) >> GP30_C7_TM_PORT_MODE_Pos;
	init->Param.CR7.TM_PORT_ORDER = ( (init->CR[7]) & GP30_C7_TM_PORT_ORDER_Msk ) >> GP30_C7_TM_PORT_ORDER_Pos;
	init->Param.CR7.TM_LD_DLY = ( (init->CR[7]) & GP30_C7_TM_LD_DLY_Msk ) >> GP30_C7_TM_LD_DLY_Pos;
	init->Param.CR7.TM_DCH_SEL = ( (init->CR[7]) & GP30_C7_TM_DCH_SEL_Msk ) >> GP30_C7_TM_DCH_SEL_Pos;
	init->Param.CR7.TM_FAKE_NO = ( (init->CR[7]) & GP30_C7_TM_FAKE_NO_Msk ) >> GP30_C7_TM_FAKE_NO_Pos;
	init->Param.CR7.NOT_USED_31_24 = ( (init->CR[7]) & GP30_C7_NOT_USED_31_24_Msk ) >> GP30_C7_NOT_USED_31_24_Pos;
	/* Parameter of CR[8] */
	init->Param.CR8.USM_PAUSE = ( (init->CR[8]) & GP30_C8_USM_PAUSE_Msk ) >> GP30_C8_USM_PAUSE_Pos;
	init->Param.CR8.NOT_USED_3 = ( (init->CR[8]) & GP30_C8_NOT_USED_3_Msk ) >> GP30_C8_NOT_USED_3_Pos;
	init->Param.CR8.USM_DIR_MODE = ( (init->CR[8]) & GP30_C8_USM_DIR_MODE_Msk ) >> GP30_C8_USM_DIR_MODE_Pos;
	init->Param.CR8.HIDDEN_7_6 = ( (init->CR[8]) & GP30_C8_HIDDEN_7_6_Msk ) >> GP30_C8_HIDDEN_7_6_Pos;
	init->Param.CR8.USM_NOISE_MASK_WIN = ( (init->CR[8]) & GP30_C8_USM_NOISE_MASK_WIN_Msk ) >> GP30_C8_USM_NOISE_MASK_WIN_Pos;
	init->Param.CR8.USM_TO = ( (init->CR[8]) & GP30_C8_USM_TO_Msk ) >> GP30_C8_USM_TO_Pos;
	init->Param.CR8.NOT_USED_31_18 = ( (init->CR[8]) & GP30_C8_NOT_USED_31_18_Msk ) >> GP30_C8_NOT_USED_31_18_Pos;
	/* Parameter of CR[9] */
	init->Param.CR9.FPG_CLK_DIV = ( (init->CR[9]) & GP30_C9_FPG_CLK_DIV_Msk ) >> GP30_C9_FPG_CLK_DIV_Pos;
	init->Param.CR9.FPG_FP_NO = ( (init->CR[9]) & GP30_C9_FPG_FP_NO_Msk ) >> GP30_C9_FPG_FP_NO_Pos;
	init->Param.CR9.ZCD_FHL_POL = ( (init->CR[9]) & GP30_C9_ZCD_FHL_POL_Msk ) >> GP30_C9_ZCD_FHL_POL_Pos;
	init->Param.CR9.ZCC_RATE = ( (init->CR[9]) & GP30_C9_ZCC_RATE_Msk ) >> GP30_C9_ZCC_RATE_Pos;
	init->Param.CR9.TI_PATH_SEL = ( (init->CR[9]) & GP30_C9_TI_PATH_SEL_Msk ) >> GP30_C9_TI_PATH_SEL_Pos;
	init->Param.CR9.TI_ERA_EN = ( (init->CR[9]) & GP30_C9_TI_ERA_EN_Msk ) >> GP30_C9_TI_ERA_EN_Pos;
	init->Param.CR9.TI_PATH_EN = ( (init->CR[9]) & GP30_C9_TI_PATH_EN_Msk ) >> GP30_C9_TI_PATH_EN_Pos;
	init->Param.CR9.TI_GM_MODE = ( (init->CR[9]) & GP30_C9_TI_GM_MODE_Msk ) >> GP30_C9_TI_GM_MODE_Pos;
	init->Param.CR9.NOT_USED_31_27 = ( (init->CR[9]) & GP30_C9_NOT_USED_31_27_Msk ) >> GP30_C9_NOT_USED_31_27_Pos;
	/* Parameter of CR[10] */
	init->Param.CR10.TOF_START_HIT_MODE = ( (init->CR[10]) & GP30_CA_TOF_START_HIT_MODE_Msk ) >> GP30_CA_TOF_START_HIT_MODE_Pos;
	init->Param.CR10.TOF_START_HIT_NO = ( (init->CR[10]) & GP30_CA_TOF_START_HIT_NO_Msk ) >> GP30_CA_TOF_START_HIT_NO_Pos;
	init->Param.CR10.TOF_HIT_IGN = ( (init->CR[10]) & GP30_CA_TOF_HIT_IGN_Msk ) >> GP30_CA_TOF_HIT_IGN_Pos;
	init->Param.CR10.TOF_HIT_NO = ( (init->CR[10]) & GP30_CA_TOF_HIT_NO_Msk ) >> GP30_CA_TOF_HIT_NO_Pos;
	init->Param.CR10.TOF_HITS_TO_FDB = ( (init->CR[10]) & GP30_CA_TOF_HITS_TO_FDB_Msk ) >> GP30_CA_TOF_HITS_TO_FDB_Pos;
	init->Param.CR10.TOF_EDGE_MODE = ( (init->CR[10]) & GP30_CA_TOF_EDGE_MODE_Msk ) >> GP30_CA_TOF_EDGE_MODE_Pos;
	init->Param.CR10.NOT_USED_31_16 = ( (init->CR[10]) & GP30_CA_NOT_USED_31_16_Msk ) >> GP30_CA_NOT_USED_31_16_Pos;
	/* Parameter of CR[11] */
	init->Param.CR11.AM_RATE = ( (init->CR[11]) & GP30_CB_AM_RATE_Msk ) >> GP30_CB_AM_RATE_Pos;
	init->Param.CR11.HIDDEN_3 = ( (init->CR[11]) & GP30_CB_HIDDEN_3_Msk ) >> GP30_CB_HIDDEN_3_Pos;
	init->Param.CR11.AM_PD_END = ( (init->CR[11]) & GP30_CB_AM_PD_END_Msk ) >> GP30_CB_AM_PD_END_Pos;
	init->Param.CR11.HIDDEN_11_9 = ( (init->CR[11]) & GP30_CB_HIDDEN_11_9_Msk ) >> GP30_CB_HIDDEN_11_9_Pos;
	init->Param.CR11.AMC_RATE = ( (init->CR[11]) & GP30_CB_AMC_RATE_Msk ) >> GP30_CB_AMC_RATE_Pos;
	init->Param.CR11.PWD_EN = ( (init->CR[11]) & GP30_CB_PWD_EN_Msk ) >> GP30_CB_PWD_EN_Pos;
	init->Param.CR11.NOT_USED_31_16 = ( (init->CR[11]) & GP30_CB_NOT_USED_31_16_Msk ) >> GP30_CB_NOT_USED_31_16_Pos;
	/* Parameter of CR[12] */
	init->Param.CR12.CR_TRIM1 = ( (init->CR[12]) & GP30_CC_CR_TRIM1_Msk ) >> GP30_CC_CR_TRIM1_Pos;
	/* Parameter of CR[13] */
	init->Param.CR13.CR_TRIM2 = ( (init->CR[13]) & GP30_CD_CR_TRIM2_Msk ) >> GP30_CD_CR_TRIM2_Pos;
	/* Parameter of CR[14] */
	init->Param.CR14.CR_TRIM3 = ( (init->CR[14]) & GP30_CE_CR_TRIM3_Msk ) >> GP30_CE_CR_TRIM3_Pos;
	/* Parameter of CR[15] */
	init->Param.CR15.TOF_RATE = ( (init->CR[15]) & GP30_D0_TOF_RATE_Msk ) >> GP30_D0_TOF_RATE_Pos;
	init->Param.CR15.NOT_USED_31_6 = ( (init->CR[15]) & GP30_D0_NOT_USED_31_6_Msk ) >> GP30_D0_NOT_USED_31_6_Pos;
	/* Parameter of CR[16] */
	init->Param.CR16.ZCD_FHL_U = ( (init->CR[16]) & GP30_DA_ZCD_FHL_U_Msk ) >> GP30_DA_ZCD_FHL_U_Pos;
	init->Param.CR16.NOT_USED_31_8 = ( (init->CR[16]) & GP30_DA_NOT_USED_31_8_Msk ) >> GP30_DA_NOT_USED_31_8_Pos;
	/* Parameter of CR[17] */
	init->Param.CR17.ZCD_FHL_D = ( (init->CR[17]) & GP30_DB_ZCD_FHL_D_Msk ) >> GP30_DB_ZCD_FHL_D_Pos;
	init->Param.CR17.NOT_USED_31_8 = ( (init->CR[17]) & GP30_DB_NOT_USED_31_8_Msk ) >> GP30_DB_NOT_USED_31_8_Pos;
	/* Parameter of CR[18] */
	init->Param.CR18.TOF_START_HIT_DLY = ( (init->CR[18]) & GP30_D8_TOF_START_HIT_DLY_Msk ) >> GP30_D8_TOF_START_HIT_DLY_Pos;
	init->Param.CR18.NOT_USED_31_19 = ( (init->CR[18]) & GP30_D8_NOT_USED_31_19_Msk ) >> GP30_D8_NOT_USED_31_19_Pos;
	/* Parameter of CR[19] */
	init->Param.CR19.HS_CLK_SEL = ( (init->CR[19]) & GP30_DE_HS_CLK_SEL_Msk ) >> GP30_DE_HS_CLK_SEL_Pos;
}
/**
* @}
*/

/**
  * @brief  Handle configuration registers update.
  * @param  init pointer to a GP30_InitTypeDef structure that contains
  *               the parameter information for the specified device.
  * @retval None
  */
void GP30_Update_CFG(GP30_InitTypeDef* init)  {
	/* Writes all parameters into every configuration register */
	/* Parameter for CR[0] */
	init->CR[0]	|= GP30_C0_WD_DIS_SET(init->Param.CR0.WD_DIS);
	/* Parameter for CR[1] */
	init->CR[1]	|= GP30_C1_PI_TPW_SET(init->Param.CR1.PI_TPW);
	init->CR[1]	|= GP30_C1_PI_EN_SET(init->Param.CR1.PI_EN);
	init->CR[1]	|= GP30_C1_PI_OUT_MODE_SET(init->Param.CR1.PI_OUT_MODE);
	init->CR[1]	|= GP30_C1_PI_UPD_MODE_SET(init->Param.CR1.PI_UPD_MODE);
	init->CR[1]	|= GP30_C1_NOT_USED_11_SET(init->Param.CR1.NOT_USED_11);
	init->CR[1]	|= GP30_C1_E2P_MODE_SET(init->Param.CR1.E2P_MODE);
	init->CR[1]	|= GP30_C1_E2P_ADR_SET(init->Param.CR1.E2P_ADR);
	init->CR[1]	|= GP30_C1_E2P_PU_EN_SET(init->Param.CR1.E2P_PU_EN);
	init->CR[1]	|= GP30_C1_NOT_USED_31_22_SET(init->Param.CR1.NOT_USED_31_22);
	/* Parameter for CR[2] */
	init->CR[2]	|= GP30_C2_GP0_DIR_SET(init->Param.CR2.GP0_DIR);
	init->CR[2]	|= GP30_C2_GP0_SEL_SET(init->Param.CR2.GP0_SEL);
	init->CR[2]	|= GP30_C2_GP1_DIR_SET(init->Param.CR2.GP1_DIR);
	init->CR[2]	|= GP30_C2_GP1_SEL_SET(init->Param.CR2.GP1_SEL);
	init->CR[2]	|= GP30_C2_GP2_DIR_SET(init->Param.CR2.GP2_DIR);
	init->CR[2]	|= GP30_C2_GP2_SEL_SET(init->Param.CR2.GP2_SEL);
	init->CR[2]	|= GP30_C2_GP3_DIR_SET(init->Param.CR2.GP3_DIR);
	init->CR[2]	|= GP30_C2_GP3_SEL_SET(init->Param.CR2.GP3_SEL);
	init->CR[2]	|= GP30_C2_GP4_DIR_SET(init->Param.CR2.GP4_DIR);
	init->CR[2]	|= GP30_C2_GP4_SEL_SET(init->Param.CR2.GP4_SEL);
	init->CR[2]	|= GP30_C2_GP5_DIR_SET(init->Param.CR2.GP5_DIR);
	init->CR[2]	|= GP30_C2_GP5_SEL_SET(init->Param.CR2.GP5_SEL);
	init->CR[2]	|= GP30_C2_GP6_DIR_SET(init->Param.CR2.GP6_DIR);
	init->CR[2]	|= GP30_C2_GP6_SEL_SET(init->Param.CR2.GP6_SEL);
	init->CR[2]	|= GP30_C2_NOT_USED_29_28_SET(init->Param.CR2.NOT_USED_29_28);
	init->CR[2]	|= GP30_C2_SCK_RXD_CFG_SET(init->Param.CR2.SCK_RXD_CFG);
	/* Parameter for CR[3] */
	init->CR[3]	|= GP30_C3_UART_DATA_MSG_LEN_SET(init->Param.CR3.UART_DATA_MSG_LEN);
	init->CR[3]	|= GP30_C3_UART_DATA_MSG_ADR_SET(init->Param.CR3.UART_DATA_MSG_ADR);
	init->CR[3]	|= GP30_C3_UART_IRQ_CLR_MODE_SET(init->Param.CR3.UART_IRQ_CLR_MODE);
	init->CR[3]	|= GP30_C3_UART_HB_MODE_SET(init->Param.CR3.UART_HB_MODE);
	init->CR[3]	|= GP30_C3_UART_HBR_SET(init->Param.CR3.UART_HBR);
	init->CR[3]	|= GP30_C3_UART_WUP_EN_SET(init->Param.CR3.UART_WUP_EN);
	init->CR[3]	|= GP30_C3_UART_CRC_MODE_SET(init->Param.CR3.UART_CRC_MODE);
	init->CR[3]	|= GP30_C3_UART_CRC_INIT_VAL_SET(init->Param.CR3.UART_CRC_INIT_VAL);
	init->CR[3]	|= GP30_C3_UART_CRC_ORDER_SET(init->Param.CR3.UART_CRC_ORDER);
	init->CR[3]	|= GP30_C3_UART_CRC_POLY_SET(init->Param.CR3.UART_CRC_POLY);
	/* Parameter for CR[4] */
	init->CR[4]	|= GP30_C4_EF_EN_TDC_TMO_SET(init->Param.CR4.EF_EN_TDC_TMO);
	init->CR[4]	|= GP30_C4_EF_EN_TOF_TMO_SET(init->Param.CR4.EF_EN_TOF_TMO);
	init->CR[4]	|= GP30_C4_EF_EN_AM_TMO_SET(init->Param.CR4.EF_EN_AM_TMO);
	init->CR[4]	|= GP30_C4_EF_EN_TM_OC_SET(init->Param.CR4.EF_EN_TM_OC);
	init->CR[4]	|= GP30_C4_EF_EN_TM_SC_SET(init->Param.CR4.EF_EN_TM_SC);
	init->CR[4]	|= GP30_C4_EF_EN_ZCC_ERR_SET(init->Param.CR4.EF_EN_ZCC_ERR);
	init->CR[4]	|= GP30_C4_EF_EN_LBD_ERR_SET(init->Param.CR4.EF_EN_LBD_ERR);
	init->CR[4]	|= GP30_C4_EF_EN_USM_SQC_TMO_SET(init->Param.CR4.EF_EN_USM_SQC_TMO);
	init->CR[4]	|= GP30_C4_EF_EN_TM_SQC_TMO_SET(init->Param.CR4.EF_EN_TM_SQC_TMO);
	init->CR[4]	|= GP30_C4_EF_EN_TSQ_TMO_SET(init->Param.CR4.EF_EN_TSQ_TMO);
	init->CR[4]	|= GP30_C4_EF_EN_E2P_ACK_ERR_SET(init->Param.CR4.EF_EN_E2P_ACK_ERR);
	init->CR[4]	|= GP30_C4_NOT_USED_11_SET(init->Param.CR4.NOT_USED_11);
	init->CR[4]	|= GP30_C4_EF_EN_CS_FWD1_ERR_SET(init->Param.CR4.EF_EN_CS_FWD1_ERR);
	init->CR[4]	|= GP30_C4_EF_EN_CS_FWD2_ERR_SET(init->Param.CR4.EF_EN_CS_FWD2_ERR);
	init->CR[4]	|= GP30_C4_EF_EN_CS_FWU_ERR_SET(init->Param.CR4.EF_EN_CS_FWU_ERR);
	init->CR[4]	|= GP30_C4_EF_EN_CS_FWA_ERR_SET(init->Param.CR4.EF_EN_CS_FWA_ERR);
	init->CR[4]	|= GP30_C4_IRQ_EN_TSQ_FNS_SET(init->Param.CR4.IRQ_EN_TSQ_FNS);
	init->CR[4]	|= GP30_C4_IRQ_EN_TRANS_FNS_SET(init->Param.CR4.IRQ_EN_TRANS_FNS);
	init->CR[4]	|= GP30_C4_IRQ_EN_BLD_FNS_SET(init->Param.CR4.IRQ_EN_BLD_FNS);
	init->CR[4]	|= GP30_C4_IRQ_EN_CHKSUM_FNS_SET(init->Param.CR4.IRQ_EN_CHKSUM_FNS);
	init->CR[4]	|= GP30_C4_IRQ_EN_FW_S_SET(init->Param.CR4.IRQ_EN_FW_S);
	init->CR[4]	|= GP30_C4_IRQ_EN_FW_SET(init->Param.CR4.IRQ_EN_FW);
	init->CR[4]	|= GP30_C4_IRQ_EN_DBG_STEP_FNS_SET(init->Param.CR4.IRQ_EN_DBG_STEP_FNS);
	init->CR[4]	|= GP30_C4_IRQ_EN_ERR_FLAG_SET(init->Param.CR4.IRQ_EN_ERR_FLAG);
	init->CR[4]	|= GP30_C4_CPU_REQ_EN_PP_SET(init->Param.CR4.CPU_REQ_EN_PP);
	init->CR[4]	|= GP30_C4_HIDDEN_25_SET(init->Param.CR4.HIDDEN_25);
	init->CR[4]	|= GP30_C4_CPU_REQ_EN_GPH_SET(init->Param.CR4.CPU_REQ_EN_GPH);
	init->CR[4]	|= GP30_C4_HIDDEN_27_SET(init->Param.CR4.HIDDEN_27);
	init->CR[4]	|= GP30_C4_CPU_GPT_SET(init->Param.CR4.CPU_GPT);
	init->CR[4]	|= GP30_C4_CPU_BLD_CS_SET(init->Param.CR4.CPU_BLD_CS);
	/* Parameter for CR[5] */
	init->CR[5]	|= GP30_C5_HIDDEN_1_0_SET(init->Param.CR5.HIDDEN_1_0);
	init->CR[5]	|= GP30_C5_HS_CLK_ST_SET(init->Param.CR5.HS_CLK_ST);
	init->CR[5]	|= GP30_C5_HBR_TO_SET(init->Param.CR5.HBR_TO);
	init->CR[5]	|= GP30_C5_HS_CLK_SEL_SET(init->Param.CR5.HS_CLK_SEL);
	init->CR[5]	|= GP30_C5_HSC_RATE_SET(init->Param.CR5.HSC_RATE);
	init->CR[5]	|= GP30_C5_GPH_MODE_SET(init->Param.CR5.GPH_MODE);
	init->CR[5]	|= GP30_C5_VM_RATE_SET(init->Param.CR5.VM_RATE);
	init->CR[5]	|= GP30_C5_LBD_TH_SET(init->Param.CR5.LBD_TH);
	init->CR[5]	|= GP30_C5_TSV_UPD_MODE_SET(init->Param.CR5.TSV_UPD_MODE);
	init->CR[5]	|= GP30_C5_BF_SEL_SET(init->Param.CR5.BF_SEL);
	init->CR[5]	|= GP30_C5_NOT_USED_31_24_SET(init->Param.CR5.NOT_USED_31_24);
	/* Parameter for CR[6] */
	init->CR[6]	|= GP30_C6_MR_CT_SET(init->Param.CR6.MR_CT);
	init->CR[6]	|= GP30_C6_TS_RESTART_EN_SET(init->Param.CR6.TS_RESTART_EN);
	init->CR[6]	|= GP30_C6_PP_EN_SET(init->Param.CR6.PP_EN);
	init->CR[6]	|= GP30_C6_PP_MODE_SET(init->Param.CR6.PP_MODE);
	init->CR[6]	|= GP30_C6_BG_PLS_MODE_SET(init->Param.CR6.BG_PLS_MODE);
	init->CR[6]	|= GP30_C6_HIDDEN_19_17_SET(init->Param.CR6.HIDDEN_19_17);
	init->CR[6]	|= GP30_C6_TS_CST_SET(init->Param.CR6.TS_CST);
	init->CR[6]	|= GP30_C6_TS_START_MODE_SET(init->Param.CR6.TS_START_MODE);
	init->CR[6]	|= GP30_C6_NOT_USED_31_24_SET(init->Param.CR6.NOT_USED_31_24);
	/* Parameter for CR[7] */
	init->CR[7]	|= GP30_C7_TM_RATE_SET(init->Param.CR7.TM_RATE);
	init->CR[7]	|= GP30_C7_TM_PAUSE_SET(init->Param.CR7.TM_PAUSE);
	init->CR[7]	|= GP30_C7_TM_MODE_SET(init->Param.CR7.TM_MODE);
	init->CR[7]	|= GP30_C7_TM_WIRE_MODE_SET(init->Param.CR7.TM_WIRE_MODE);
	init->CR[7]	|= GP30_C7_TM_PORT_NO_SET(init->Param.CR7.TM_PORT_NO);
	init->CR[7]	|= GP30_C7_TM_PORT_MODE_SET(init->Param.CR7.TM_PORT_MODE);
	init->CR[7]	|= GP30_C7_TM_PORT_ORDER_SET(init->Param.CR7.TM_PORT_ORDER);
	init->CR[7]	|= GP30_C7_TM_LD_DLY_SET(init->Param.CR7.TM_LD_DLY);
	init->CR[7]	|= GP30_C7_TM_DCH_SEL_SET(init->Param.CR7.TM_DCH_SEL);
	init->CR[7]	|= GP30_C7_TM_FAKE_NO_SET(init->Param.CR7.TM_FAKE_NO);
	init->CR[7]	|= GP30_C7_NOT_USED_31_24_SET(init->Param.CR7.NOT_USED_31_24);
	/* Parameter for CR[8] */
	init->CR[8]	|= GP30_C8_USM_PAUSE_SET(init->Param.CR8.USM_PAUSE);
	init->CR[8]	|= GP30_C8_NOT_USED_3_SET(init->Param.CR8.NOT_USED_3);
	init->CR[8]	|= GP30_C8_USM_DIR_MODE_SET(init->Param.CR8.USM_DIR_MODE);
	init->CR[8]	|= GP30_C8_HIDDEN_7_6_SET(init->Param.CR8.HIDDEN_7_6);
	init->CR[8]	|= GP30_C8_USM_NOISE_MASK_WIN_SET(init->Param.CR8.USM_NOISE_MASK_WIN);
	init->CR[8]	|= GP30_C8_USM_TO_SET(init->Param.CR8.USM_TO);
	init->CR[8]	|= GP30_C8_NOT_USED_31_18_SET(init->Param.CR8.NOT_USED_31_18);
	/* Parameter for CR[9] */
	init->CR[9]	|= GP30_C9_FPG_CLK_DIV_SET(init->Param.CR9.FPG_CLK_DIV);
	init->CR[9]	|= GP30_C9_FPG_FP_NO_SET(init->Param.CR9.FPG_FP_NO);
	init->CR[9]	|= GP30_C9_ZCD_FHL_POL_SET(init->Param.CR9.ZCD_FHL_POL);
	init->CR[9]	|= GP30_C9_ZCC_RATE_SET(init->Param.CR9.ZCC_RATE);
	init->CR[9]	|= GP30_C9_TI_PATH_SEL_SET(init->Param.CR9.TI_PATH_SEL);
	init->CR[9]	|= GP30_C9_TI_ERA_EN_SET(init->Param.CR9.TI_ERA_EN);
	init->CR[9]	|= GP30_C9_TI_PATH_EN_SET(init->Param.CR9.TI_PATH_EN);
	init->CR[9]	|= GP30_C9_TI_GM_MODE_SET(init->Param.CR9.TI_GM_MODE);
	init->CR[9]	|= GP30_C9_NOT_USED_31_27_SET(init->Param.CR9.NOT_USED_31_27);
	/* Parameter for CR[10] */
	init->CR[10]	|= GP30_CA_TOF_START_HIT_MODE_SET(init->Param.CR10.TOF_START_HIT_MODE);
	init->CR[10]	|= GP30_CA_TOF_START_HIT_NO_SET(init->Param.CR10.TOF_START_HIT_NO);
	init->CR[10]	|= GP30_CA_TOF_HIT_IGN_SET(init->Param.CR10.TOF_HIT_IGN);
	init->CR[10]	|= GP30_CA_TOF_HIT_NO_SET(init->Param.CR10.TOF_HIT_NO);
	init->CR[10]	|= GP30_CA_TOF_HITS_TO_FDB_SET(init->Param.CR10.TOF_HITS_TO_FDB);
	init->CR[10]	|= GP30_CA_TOF_EDGE_MODE_SET(init->Param.CR10.TOF_EDGE_MODE);
	init->CR[10]	|= GP30_CA_NOT_USED_31_16_SET(init->Param.CR10.NOT_USED_31_16);
	/* Parameter for CR[11] */
	init->CR[11]	|= GP30_CB_AM_RATE_SET(init->Param.CR11.AM_RATE);
	init->CR[11]	|= GP30_CB_HIDDEN_3_SET(init->Param.CR11.HIDDEN_3);
	init->CR[11]	|= GP30_CB_AM_PD_END_SET(init->Param.CR11.AM_PD_END);
	init->CR[11]	|= GP30_CB_HIDDEN_11_9_SET(init->Param.CR11.HIDDEN_11_9);
	init->CR[11]	|= GP30_CB_AMC_RATE_SET(init->Param.CR11.AMC_RATE);
	init->CR[11]	|= GP30_CB_PWD_EN_SET(init->Param.CR11.PWD_EN);
	init->CR[11]	|= GP30_CB_NOT_USED_31_16_SET(init->Param.CR11.NOT_USED_31_16);
	/* Parameter for CR[12] */
	init->CR[12]	|= GP30_CC_CR_TRIM1_SET(init->Param.CR12.CR_TRIM1);
	/* Parameter for CR[13] */
	init->CR[13]	|= GP30_CD_CR_TRIM2_SET(init->Param.CR13.CR_TRIM2);
	/* Parameter for CR[14] */
	init->CR[14]	|= GP30_CE_CR_TRIM3_SET(init->Param.CR14.CR_TRIM3);
	/* Parameter for CR[15] */
	init->CR[15]	|= GP30_D0_TOF_RATE_SET(init->Param.CR15.TOF_RATE);
	init->CR[15]	|= GP30_D0_NOT_USED_31_6_SET(init->Param.CR15.NOT_USED_31_6);
	/* Parameter for CR[16] */
	init->CR[16]	|= GP30_DA_ZCD_FHL_U_SET(init->Param.CR16.ZCD_FHL_U);
	init->CR[16]	|= GP30_DA_NOT_USED_31_8_SET(init->Param.CR16.NOT_USED_31_8);
	/* Parameter for CR[17] */
	init->CR[17]	|= GP30_DB_ZCD_FHL_D_SET(init->Param.CR17.ZCD_FHL_D);
	init->CR[17]	|= GP30_DB_NOT_USED_31_8_SET(init->Param.CR17.NOT_USED_31_8);
	/* Parameter for CR[18] */
	init->CR[18]	|= GP30_D8_TOF_START_HIT_DLY_SET(init->Param.CR18.TOF_START_HIT_DLY);
	init->CR[18]	|= GP30_D8_NOT_USED_31_19_SET(init->Param.CR18.NOT_USED_31_19);
	/* Parameter for CR[19] */
	init->CR[19]	|= GP30_DE_HS_CLK_SEL_SET(init->Param.CR19.HS_CLK_SEL);
}
/**
* @}
*/

/**
  * @brief  Handle initialization of configuration.
  * @param  init pointer to a GP30_InitTypeDef structure that contains
  *               the configuration information for the specified device.
  * @param  array pointer to declarated configuration register for the specified device.
  * @retval None
  */
void GP30_Init_CFG(GP30_InitTypeDef* init, __GP30_CFG_Declaration* array)  {
	uint8_t idx;
	/* Update content of CR for external usage */
	for (idx = 0; idx <= __GP30_CFG_Array_Size; idx++) {
		init->CR[idx] = array[idx];
	}

	/* Update Parameter */
	GP30_Update_Param(init);

}
/**
* @}
*/

/**
* @}
*/


#endif /* INC_GP30_CODING_H_ */
