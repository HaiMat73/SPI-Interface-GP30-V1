/*
 * GP30_CFG_Macros.h
 *
 *  Created on: 19.08.2022
 *      Author: Matthias Hainz
 */

#ifndef INC_GP30_CFG_MACROS_H_
#define INC_GP30_CFG_MACROS_H_

/* Exported macros -----------------------------------------------------------*/
/** @defgroup _Exported_Macros  Exported Macros"
  * @{
  */

/** @defgroup GP30_C0 register
* @{
*/
#define GP30_C0_WD_DIS_SET(__Val__)                 	(((__Val__) << GP30_C0_WD_DIS_Pos) & GP30_C0_WD_DIS_Msk)		/*!< Default = 0x48DBA399 */
/**
* @}
*/

/** @defgroup GP30_C1 register
* @{
*/
#define GP30_C1_PI_TPW_SET(__Val__)                 	(((__Val__) << GP30_C1_PI_TPW_Pos) & GP30_C1_PI_TPW_Msk)		/*!< Default = 0xA */
#define GP30_C1_PI_EN_SET(__Val__)                  	(((__Val__) << GP30_C1_PI_EN_Pos) & GP30_C1_PI_EN_Msk)		/*!< Default = 0x1 */
#define GP30_C1_PI_OUT_MODE_SET(__Val__)            	(((__Val__) << GP30_C1_PI_OUT_MODE_Pos) & GP30_C1_PI_OUT_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C1_PI_UPD_MODE_SET(__Val__)            	(((__Val__) << GP30_C1_PI_UPD_MODE_Pos) & GP30_C1_PI_UPD_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C1_NOT_USED_11_SET(__Val__)            	(((__Val__) << GP30_C1_NOT_USED_11_Pos) & GP30_C1_NOT_USED_11_Msk)		/*!< Default = 0x0 */
#define GP30_C1_E2P_MODE_SET(__Val__)               	(((__Val__) << GP30_C1_E2P_MODE_Pos) & GP30_C1_E2P_MODE_Msk)		/*!< Default = 0x3 */
#define GP30_C1_E2P_ADR_SET(__Val__)                	(((__Val__) << GP30_C1_E2P_ADR_Pos) & GP30_C1_E2P_ADR_Msk)		/*!< Default = 0x50 */
#define GP30_C1_E2P_PU_EN_SET(__Val__)              	(((__Val__) << GP30_C1_E2P_PU_EN_Pos) & GP30_C1_E2P_PU_EN_Msk)		/*!< Default = 0x1 */
#define GP30_C1_NOT_USED_31_22_SET(__Val__)         	(((__Val__) << GP30_C1_NOT_USED_31_22_Pos) & GP30_C1_NOT_USED_31_22_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_C2 register
* @{
*/
#define GP30_C2_GP0_DIR_SET(__Val__)                	(((__Val__) << GP30_C2_GP0_DIR_Pos) & GP30_C2_GP0_DIR_Msk)		/*!< Default = 0x0 */
#define GP30_C2_GP0_SEL_SET(__Val__)                	(((__Val__) << GP30_C2_GP0_SEL_Pos) & GP30_C2_GP0_SEL_Msk)		/*!< Default = 0x1 */
#define GP30_C2_GP1_DIR_SET(__Val__)                	(((__Val__) << GP30_C2_GP1_DIR_Pos) & GP30_C2_GP1_DIR_Msk)		/*!< Default = 0x0 */
#define GP30_C2_GP1_SEL_SET(__Val__)                	(((__Val__) << GP30_C2_GP1_SEL_Pos) & GP30_C2_GP1_SEL_Msk)		/*!< Default = 0x1 */
#define GP30_C2_GP2_DIR_SET(__Val__)                	(((__Val__) << GP30_C2_GP2_DIR_Pos) & GP30_C2_GP2_DIR_Msk)		/*!< Default = 0x1 */
#define GP30_C2_GP2_SEL_SET(__Val__)                	(((__Val__) << GP30_C2_GP2_SEL_Pos) & GP30_C2_GP2_SEL_Msk)		/*!< Default = 0x0 */
#define GP30_C2_GP3_DIR_SET(__Val__)                	(((__Val__) << GP30_C2_GP3_DIR_Pos) & GP30_C2_GP3_DIR_Msk)		/*!< Default = 0x1 */
#define GP30_C2_GP3_SEL_SET(__Val__)                	(((__Val__) << GP30_C2_GP3_SEL_Pos) & GP30_C2_GP3_SEL_Msk)		/*!< Default = 0x0 */
#define GP30_C2_GP4_DIR_SET(__Val__)                	(((__Val__) << GP30_C2_GP4_DIR_Pos) & GP30_C2_GP4_DIR_Msk)		/*!< Default = 0x1 */
#define GP30_C2_GP4_SEL_SET(__Val__)                	(((__Val__) << GP30_C2_GP4_SEL_Pos) & GP30_C2_GP4_SEL_Msk)		/*!< Default = 0x0 */
#define GP30_C2_GP5_DIR_SET(__Val__)                	(((__Val__) << GP30_C2_GP5_DIR_Pos) & GP30_C2_GP5_DIR_Msk)		/*!< Default = 0x1 */
#define GP30_C2_GP5_SEL_SET(__Val__)                	(((__Val__) << GP30_C2_GP5_SEL_Pos) & GP30_C2_GP5_SEL_Msk)		/*!< Default = 0x0 */
#define GP30_C2_GP6_DIR_SET(__Val__)                	(((__Val__) << GP30_C2_GP6_DIR_Pos) & GP30_C2_GP6_DIR_Msk)		/*!< Default = 0x1 */
#define GP30_C2_GP6_SEL_SET(__Val__)                	(((__Val__) << GP30_C2_GP6_SEL_Pos) & GP30_C2_GP6_SEL_Msk)		/*!< Default = 0x0 */
#define GP30_C2_NOT_USED_29_28_SET(__Val__)         	(((__Val__) << GP30_C2_NOT_USED_29_28_Pos) & GP30_C2_NOT_USED_29_28_Msk)		/*!< Default = 0x0 */
#define GP30_C2_SCK_RXD_CFG_SET(__Val__)            	(((__Val__) << GP30_C2_SCK_RXD_CFG_Pos) & GP30_C2_SCK_RXD_CFG_Msk)		/*!< Default = 0x2 */
/**
* @}
*/

/** @defgroup GP30_C3 register
* @{
*/
#define GP30_C3_UART_DATA_MSG_LEN_SET(__Val__)      	(((__Val__) << GP30_C3_UART_DATA_MSG_LEN_Pos) & GP30_C3_UART_DATA_MSG_LEN_Msk)		/*!< Default = 0x0 */
#define GP30_C3_UART_DATA_MSG_ADR_SET(__Val__)      	(((__Val__) << GP30_C3_UART_DATA_MSG_ADR_Pos) & GP30_C3_UART_DATA_MSG_ADR_Msk)		/*!< Default = 0x0 */
#define GP30_C3_UART_IRQ_CLR_MODE_SET(__Val__)      	(((__Val__) << GP30_C3_UART_IRQ_CLR_MODE_Pos) & GP30_C3_UART_IRQ_CLR_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C3_UART_HB_MODE_SET(__Val__)           	(((__Val__) << GP30_C3_UART_HB_MODE_Pos) & GP30_C3_UART_HB_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C3_UART_HBR_SET(__Val__)               	(((__Val__) << GP30_C3_UART_HBR_Pos) & GP30_C3_UART_HBR_Msk)		/*!< Default = 0x0 */
#define GP30_C3_UART_WUP_EN_SET(__Val__)            	(((__Val__) << GP30_C3_UART_WUP_EN_Pos) & GP30_C3_UART_WUP_EN_Msk)		/*!< Default = 0x1 */
#define GP30_C3_UART_CRC_MODE_SET(__Val__)          	(((__Val__) << GP30_C3_UART_CRC_MODE_Pos) & GP30_C3_UART_CRC_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C3_UART_CRC_INIT_VAL_SET(__Val__)      	(((__Val__) << GP30_C3_UART_CRC_INIT_VAL_Pos) & GP30_C3_UART_CRC_INIT_VAL_Msk)		/*!< Default = 0x1 */
#define GP30_C3_UART_CRC_ORDER_SET(__Val__)         	(((__Val__) << GP30_C3_UART_CRC_ORDER_Pos) & GP30_C3_UART_CRC_ORDER_Msk)		/*!< Default = 0x0 */
#define GP30_C3_UART_CRC_POLY_SET(__Val__)          	(((__Val__) << GP30_C3_UART_CRC_POLY_Pos) & GP30_C3_UART_CRC_POLY_Msk)		/*!< Default = 0x1021 */
/**
* @}
*/

/** @defgroup GP30_C4 register
* @{
*/
#define GP30_C4_EF_EN_TDC_TMO_SET(__Val__)          	(((__Val__) << GP30_C4_EF_EN_TDC_TMO_Pos) & GP30_C4_EF_EN_TDC_TMO_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_TOF_TMO_SET(__Val__)          	(((__Val__) << GP30_C4_EF_EN_TOF_TMO_Pos) & GP30_C4_EF_EN_TOF_TMO_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_AM_TMO_SET(__Val__)           	(((__Val__) << GP30_C4_EF_EN_AM_TMO_Pos) & GP30_C4_EF_EN_AM_TMO_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_TM_OC_SET(__Val__)            	(((__Val__) << GP30_C4_EF_EN_TM_OC_Pos) & GP30_C4_EF_EN_TM_OC_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_TM_SC_SET(__Val__)            	(((__Val__) << GP30_C4_EF_EN_TM_SC_Pos) & GP30_C4_EF_EN_TM_SC_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_ZCC_ERR_SET(__Val__)          	(((__Val__) << GP30_C4_EF_EN_ZCC_ERR_Pos) & GP30_C4_EF_EN_ZCC_ERR_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_LBD_ERR_SET(__Val__)          	(((__Val__) << GP30_C4_EF_EN_LBD_ERR_Pos) & GP30_C4_EF_EN_LBD_ERR_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_USM_SQC_TMO_SET(__Val__)      	(((__Val__) << GP30_C4_EF_EN_USM_SQC_TMO_Pos) & GP30_C4_EF_EN_USM_SQC_TMO_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_TM_SQC_TMO_SET(__Val__)       	(((__Val__) << GP30_C4_EF_EN_TM_SQC_TMO_Pos) & GP30_C4_EF_EN_TM_SQC_TMO_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_TSQ_TMO_SET(__Val__)          	(((__Val__) << GP30_C4_EF_EN_TSQ_TMO_Pos) & GP30_C4_EF_EN_TSQ_TMO_Msk)		/*!< Default = 0x1 */
#define GP30_C4_EF_EN_E2P_ACK_ERR_SET(__Val__)      	(((__Val__) << GP30_C4_EF_EN_E2P_ACK_ERR_Pos) & GP30_C4_EF_EN_E2P_ACK_ERR_Msk)		/*!< Default = 0x0 */
#define GP30_C4_NOT_USED_11_SET(__Val__)            	(((__Val__) << GP30_C4_NOT_USED_11_Pos) & GP30_C4_NOT_USED_11_Msk)		/*!< Default = 0x0 */
#define GP30_C4_EF_EN_CS_FWD1_ERR_SET(__Val__)      	(((__Val__) << GP30_C4_EF_EN_CS_FWD1_ERR_Pos) & GP30_C4_EF_EN_CS_FWD1_ERR_Msk)		/*!< Default = 0x0 */
#define GP30_C4_EF_EN_CS_FWD2_ERR_SET(__Val__)      	(((__Val__) << GP30_C4_EF_EN_CS_FWD2_ERR_Pos) & GP30_C4_EF_EN_CS_FWD2_ERR_Msk)		/*!< Default = 0x0 */
#define GP30_C4_EF_EN_CS_FWU_ERR_SET(__Val__)       	(((__Val__) << GP30_C4_EF_EN_CS_FWU_ERR_Pos) & GP30_C4_EF_EN_CS_FWU_ERR_Msk)		/*!< Default = 0x0 */
#define GP30_C4_EF_EN_CS_FWA_ERR_SET(__Val__)       	(((__Val__) << GP30_C4_EF_EN_CS_FWA_ERR_Pos) & GP30_C4_EF_EN_CS_FWA_ERR_Msk)		/*!< Default = 0x0 */
#define GP30_C4_IRQ_EN_TSQ_FNS_SET(__Val__)         	(((__Val__) << GP30_C4_IRQ_EN_TSQ_FNS_Pos) & GP30_C4_IRQ_EN_TSQ_FNS_Msk)		/*!< Default = 0x1 */
#define GP30_C4_IRQ_EN_TRANS_FNS_SET(__Val__)       	(((__Val__) << GP30_C4_IRQ_EN_TRANS_FNS_Pos) & GP30_C4_IRQ_EN_TRANS_FNS_Msk)		/*!< Default = 0x1 */
#define GP30_C4_IRQ_EN_BLD_FNS_SET(__Val__)         	(((__Val__) << GP30_C4_IRQ_EN_BLD_FNS_Pos) & GP30_C4_IRQ_EN_BLD_FNS_Msk)		/*!< Default = 0x1 */
#define GP30_C4_IRQ_EN_CHKSUM_FNS_SET(__Val__)      	(((__Val__) << GP30_C4_IRQ_EN_CHKSUM_FNS_Pos) & GP30_C4_IRQ_EN_CHKSUM_FNS_Msk)		/*!< Default = 0x1 */
#define GP30_C4_IRQ_EN_FW_S_SET(__Val__)            	(((__Val__) << GP30_C4_IRQ_EN_FW_S_Pos) & GP30_C4_IRQ_EN_FW_S_Msk)		/*!< Default = 0x1 */
#define GP30_C4_IRQ_EN_FW_SET(__Val__)              	(((__Val__) << GP30_C4_IRQ_EN_FW_Pos) & GP30_C4_IRQ_EN_FW_Msk)		/*!< Default = 0x0 */
#define GP30_C4_IRQ_EN_DBG_STEP_FNS_SET(__Val__)    	(((__Val__) << GP30_C4_IRQ_EN_DBG_STEP_FNS_Pos) & GP30_C4_IRQ_EN_DBG_STEP_FNS_Msk)		/*!< Default = 0x0 */
#define GP30_C4_IRQ_EN_ERR_FLAG_SET(__Val__)        	(((__Val__) << GP30_C4_IRQ_EN_ERR_FLAG_Pos) & GP30_C4_IRQ_EN_ERR_FLAG_Msk)		/*!< Default = 0x0 */
#define GP30_C4_CPU_REQ_EN_PP_SET(__Val__)          	(((__Val__) << GP30_C4_CPU_REQ_EN_PP_Pos) & GP30_C4_CPU_REQ_EN_PP_Msk)		/*!< Default = 0x0 */
#define GP30_C4_HIDDEN_25_SET(__Val__)              	(((__Val__) << GP30_C4_HIDDEN_25_Pos) & GP30_C4_HIDDEN_25_Msk)		/*!< Default = 0x0 */
#define GP30_C4_CPU_REQ_EN_GPH_SET(__Val__)         	(((__Val__) << GP30_C4_CPU_REQ_EN_GPH_Pos) & GP30_C4_CPU_REQ_EN_GPH_Msk)		/*!< Default = 0x0 */
#define GP30_C4_HIDDEN_27_SET(__Val__)              	(((__Val__) << GP30_C4_HIDDEN_27_Pos) & GP30_C4_HIDDEN_27_Msk)		/*!< Default = 0x0 */
#define GP30_C4_CPU_GPT_SET(__Val__)                	(((__Val__) << GP30_C4_CPU_GPT_Pos) & GP30_C4_CPU_GPT_Msk)		/*!< Default = 0x0 */
#define GP30_C4_CPU_BLD_CS_SET(__Val__)             	(((__Val__) << GP30_C4_CPU_BLD_CS_Pos) & GP30_C4_CPU_BLD_CS_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_C5 register
* @{
*/
#define GP30_C5_HIDDEN_1_0_SET(__Val__)             	(((__Val__) << GP30_C5_HIDDEN_1_0_Pos) & GP30_C5_HIDDEN_1_0_Msk)		/*!< Default = 0x0 */
#define GP30_C5_HS_CLK_ST_SET(__Val__)              	(((__Val__) << GP30_C5_HS_CLK_ST_Pos) & GP30_C5_HS_CLK_ST_Msk)		/*!< Default = 0x2 */
#define GP30_C5_HBR_TO_SET(__Val__)                 	(((__Val__) << GP30_C5_HBR_TO_Pos) & GP30_C5_HBR_TO_Msk)		/*!< Default = 0x7 */
#define GP30_C5_HS_CLK_SEL_SET(__Val__)             	(((__Val__) << GP30_C5_HS_CLK_SEL_Pos) & GP30_C5_HS_CLK_SEL_Msk)		/*!< Default = 0x0 */
#define GP30_C5_HSC_RATE_SET(__Val__)               	(((__Val__) << GP30_C5_HSC_RATE_Pos) & GP30_C5_HSC_RATE_Msk)		/*!< Default = 0x5 */
#define GP30_C5_GPH_MODE_SET(__Val__)               	(((__Val__) << GP30_C5_GPH_MODE_Pos) & GP30_C5_GPH_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C5_VM_RATE_SET(__Val__)                	(((__Val__) << GP30_C5_VM_RATE_Pos) & GP30_C5_VM_RATE_Msk)		/*!< Default = 0x6 */
#define GP30_C5_LBD_TH_SET(__Val__)                 	(((__Val__) << GP30_C5_LBD_TH_Pos) & GP30_C5_LBD_TH_Msk)		/*!< Default = 0xE */
#define GP30_C5_TSV_UPD_MODE_SET(__Val__)           	(((__Val__) << GP30_C5_TSV_UPD_MODE_Pos) & GP30_C5_TSV_UPD_MODE_Msk)		/*!< Default = 0x1 */
#define GP30_C5_BF_SEL_SET(__Val__)                 	(((__Val__) << GP30_C5_BF_SEL_Pos) & GP30_C5_BF_SEL_Msk)		/*!< Default = 0x0 */
#define GP30_C5_NOT_USED_31_24_SET(__Val__)         	(((__Val__) << GP30_C5_NOT_USED_31_24_Pos) & GP30_C5_NOT_USED_31_24_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_C6 register
* @{
*/
#define GP30_C6_MR_CT_SET(__Val__)                  	(((__Val__) << GP30_C6_MR_CT_Pos) & GP30_C6_MR_CT_Msk)		/*!< Default = 0x80 */
#define GP30_C6_TS_RESTART_EN_SET(__Val__)          	(((__Val__) << GP30_C6_TS_RESTART_EN_Pos) & GP30_C6_TS_RESTART_EN_Msk)		/*!< Default = 0x1 */
#define GP30_C6_PP_EN_SET(__Val__)                  	(((__Val__) << GP30_C6_PP_EN_Pos) & GP30_C6_PP_EN_Msk)		/*!< Default = 0x0 */
#define GP30_C6_PP_MODE_SET(__Val__)                	(((__Val__) << GP30_C6_PP_MODE_Pos) & GP30_C6_PP_MODE_Msk)		/*!< Default = 0x1 */
#define GP30_C6_BG_PLS_MODE_SET(__Val__)            	(((__Val__) << GP30_C6_BG_PLS_MODE_Pos) & GP30_C6_BG_PLS_MODE_Msk)		/*!< Default = 0x1 */
#define GP30_C6_HIDDEN_19_17_SET(__Val__)           	(((__Val__) << GP30_C6_HIDDEN_19_17_Pos) & GP30_C6_HIDDEN_19_17_Msk)		/*!< Default = 0x0 */
#define GP30_C6_TS_CST_SET(__Val__)                 	(((__Val__) << GP30_C6_TS_CST_Pos) & GP30_C6_TS_CST_Msk)		/*!< Default = 0x1 */
#define GP30_C6_TS_START_MODE_SET(__Val__)          	(((__Val__) << GP30_C6_TS_START_MODE_Pos) & GP30_C6_TS_START_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C6_NOT_USED_31_24_SET(__Val__)         	(((__Val__) << GP30_C6_NOT_USED_31_24_Pos) & GP30_C6_NOT_USED_31_24_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_C7 register
* @{
*/
#define GP30_C7_TM_RATE_SET(__Val__)                	(((__Val__) << GP30_C7_TM_RATE_Pos) & GP30_C7_TM_RATE_Msk)		/*!< Default = 0x0 */
#define GP30_C7_TM_PAUSE_SET(__Val__)               	(((__Val__) << GP30_C7_TM_PAUSE_Pos) & GP30_C7_TM_PAUSE_Msk)		/*!< Default = 0x5 */
#define GP30_C7_TM_MODE_SET(__Val__)                	(((__Val__) << GP30_C7_TM_MODE_Pos) & GP30_C7_TM_MODE_Msk)		/*!< Default = 0x1 */
#define GP30_C7_TM_WIRE_MODE_SET(__Val__)           	(((__Val__) << GP30_C7_TM_WIRE_MODE_Pos) & GP30_C7_TM_WIRE_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C7_TM_PORT_NO_SET(__Val__)             	(((__Val__) << GP30_C7_TM_PORT_NO_Pos) & GP30_C7_TM_PORT_NO_Msk)		/*!< Default = 0x1 */
#define GP30_C7_TM_PORT_MODE_SET(__Val__)           	(((__Val__) << GP30_C7_TM_PORT_MODE_Pos) & GP30_C7_TM_PORT_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C7_TM_PORT_ORDER_SET(__Val__)          	(((__Val__) << GP30_C7_TM_PORT_ORDER_Pos) & GP30_C7_TM_PORT_ORDER_Msk)		/*!< Default = 0x2 */
#define GP30_C7_TM_LD_DLY_SET(__Val__)              	(((__Val__) << GP30_C7_TM_LD_DLY_Pos) & GP30_C7_TM_LD_DLY_Msk)		/*!< Default = 0x3 */
#define GP30_C7_TM_DCH_SEL_SET(__Val__)             	(((__Val__) << GP30_C7_TM_DCH_SEL_Pos) & GP30_C7_TM_DCH_SEL_Msk)		/*!< Default = 0x1 */
#define GP30_C7_TM_FAKE_NO_SET(__Val__)             	(((__Val__) << GP30_C7_TM_FAKE_NO_Pos) & GP30_C7_TM_FAKE_NO_Msk)		/*!< Default = 0x0 */
#define GP30_C7_NOT_USED_31_24_SET(__Val__)         	(((__Val__) << GP30_C7_NOT_USED_31_24_Pos) & GP30_C7_NOT_USED_31_24_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_C8 register
* @{
*/
#define GP30_C8_USM_PAUSE_SET(__Val__)              	(((__Val__) << GP30_C8_USM_PAUSE_Pos) & GP30_C8_USM_PAUSE_Msk)		/*!< Default = 0x4 */
#define GP30_C8_NOT_USED_3_SET(__Val__)             	(((__Val__) << GP30_C8_NOT_USED_3_Pos) & GP30_C8_NOT_USED_3_Msk)		/*!< Default = 0x0 */
#define GP30_C8_USM_DIR_MODE_SET(__Val__)           	(((__Val__) << GP30_C8_USM_DIR_MODE_Pos) & GP30_C8_USM_DIR_MODE_Msk)		/*!< Default = 0x2 */
#define GP30_C8_HIDDEN_7_6_SET(__Val__)             	(((__Val__) << GP30_C8_HIDDEN_7_6_Pos) & GP30_C8_HIDDEN_7_6_Msk)		/*!< Default = 0x0 */
#define GP30_C8_USM_NOISE_MASK_WIN_SET(__Val__)     	(((__Val__) << GP30_C8_USM_NOISE_MASK_WIN_Pos) & GP30_C8_USM_NOISE_MASK_WIN_Msk)		/*!< Default = 0x28 */
#define GP30_C8_USM_TO_SET(__Val__)                 	(((__Val__) << GP30_C8_USM_TO_Pos) & GP30_C8_USM_TO_Msk)		/*!< Default = 0x0 */
#define GP30_C8_NOT_USED_31_18_SET(__Val__)         	(((__Val__) << GP30_C8_NOT_USED_31_18_Pos) & GP30_C8_NOT_USED_31_18_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_C9 register
* @{
*/
#define GP30_C9_FPG_CLK_DIV_SET(__Val__)            	(((__Val__) << GP30_C9_FPG_CLK_DIV_Pos) & GP30_C9_FPG_CLK_DIV_Msk)		/*!< Default = 0x3 */
#define GP30_C9_FPG_FP_NO_SET(__Val__)              	(((__Val__) << GP30_C9_FPG_FP_NO_Pos) & GP30_C9_FPG_FP_NO_Msk)		/*!< Default = 0x19 */
#define GP30_C9_ZCD_FHL_POL_SET(__Val__)            	(((__Val__) << GP30_C9_ZCD_FHL_POL_Pos) & GP30_C9_ZCD_FHL_POL_Msk)		/*!< Default = 0x0 */
#define GP30_C9_ZCC_RATE_SET(__Val__)               	(((__Val__) << GP30_C9_ZCC_RATE_Pos) & GP30_C9_ZCC_RATE_Msk)		/*!< Default = 0x6 */
#define GP30_C9_TI_PATH_SEL_SET(__Val__)            	(((__Val__) << GP30_C9_TI_PATH_SEL_Pos) & GP30_C9_TI_PATH_SEL_Msk)		/*!< Default = 0x1 */
#define GP30_C9_TI_ERA_EN_SET(__Val__)              	(((__Val__) << GP30_C9_TI_ERA_EN_Pos) & GP30_C9_TI_ERA_EN_Msk)		/*!< Default = 0x0 */
#define GP30_C9_TI_PATH_EN_SET(__Val__)             	(((__Val__) << GP30_C9_TI_PATH_EN_Pos) & GP30_C9_TI_PATH_EN_Msk)		/*!< Default = 0x1F */
#define GP30_C9_TI_GM_MODE_SET(__Val__)             	(((__Val__) << GP30_C9_TI_GM_MODE_Pos) & GP30_C9_TI_GM_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_C9_NOT_USED_31_27_SET(__Val__)         	(((__Val__) << GP30_C9_NOT_USED_31_27_Pos) & GP30_C9_NOT_USED_31_27_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_CA register
* @{
*/
#define GP30_CA_TOF_START_HIT_MODE_SET(__Val__)     	(((__Val__) << GP30_CA_TOF_START_HIT_MODE_Pos) & GP30_CA_TOF_START_HIT_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_CA_TOF_START_HIT_NO_SET(__Val__)       	(((__Val__) << GP30_CA_TOF_START_HIT_NO_Pos) & GP30_CA_TOF_START_HIT_NO_Msk)		/*!< Default = 0x8 */
#define GP30_CA_TOF_HIT_IGN_SET(__Val__)            	(((__Val__) << GP30_CA_TOF_HIT_IGN_Pos) & GP30_CA_TOF_HIT_IGN_Msk)		/*!< Default = 0x0 */
#define GP30_CA_TOF_HIT_NO_SET(__Val__)             	(((__Val__) << GP30_CA_TOF_HIT_NO_Pos) & GP30_CA_TOF_HIT_NO_Msk)		/*!< Default = 0xC */
#define GP30_CA_TOF_HITS_TO_FDB_SET(__Val__)        	(((__Val__) << GP30_CA_TOF_HITS_TO_FDB_Pos) & GP30_CA_TOF_HITS_TO_FDB_Msk)		/*!< Default = 0x1 */
#define GP30_CA_TOF_EDGE_MODE_SET(__Val__)          	(((__Val__) << GP30_CA_TOF_EDGE_MODE_Pos) & GP30_CA_TOF_EDGE_MODE_Msk)		/*!< Default = 0x0 */
#define GP30_CA_NOT_USED_31_16_SET(__Val__)         	(((__Val__) << GP30_CA_NOT_USED_31_16_Pos) & GP30_CA_NOT_USED_31_16_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_CB register
* @{
*/
#define GP30_CB_AM_RATE_SET(__Val__)                	(((__Val__) << GP30_CB_AM_RATE_Pos) & GP30_CB_AM_RATE_Msk)		/*!< Default = 0x1 */
#define GP30_CB_HIDDEN_3_SET(__Val__)               	(((__Val__) << GP30_CB_HIDDEN_3_Pos) & GP30_CB_HIDDEN_3_Msk)		/*!< Default = 0x0 */
#define GP30_CB_AM_PD_END_SET(__Val__)              	(((__Val__) << GP30_CB_AM_PD_END_Pos) & GP30_CB_AM_PD_END_Msk)		/*!< Default = 0x8 */
#define GP30_CB_HIDDEN_11_9_SET(__Val__)            	(((__Val__) << GP30_CB_HIDDEN_11_9_Pos) & GP30_CB_HIDDEN_11_9_Msk)		/*!< Default = 0x2 */
#define GP30_CB_AMC_RATE_SET(__Val__)               	(((__Val__) << GP30_CB_AMC_RATE_Pos) & GP30_CB_AMC_RATE_Msk)		/*!< Default = 0x5 */
#define GP30_CB_PWD_EN_SET(__Val__)                 	(((__Val__) << GP30_CB_PWD_EN_Pos) & GP30_CB_PWD_EN_Msk)		/*!< Default = 0x1 */
#define GP30_CB_NOT_USED_31_16_SET(__Val__)         	(((__Val__) << GP30_CB_NOT_USED_31_16_Pos) & GP30_CB_NOT_USED_31_16_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_CC register
* @{
*/
#define GP30_CC_CR_TRIM1_SET(__Val__)               	(((__Val__) << GP30_CC_CR_TRIM1_Pos) & GP30_CC_CR_TRIM1_Msk)		/*!< Default = 0x84A0C47C */
/**
* @}
*/

/** @defgroup GP30_CD register
* @{
*/
#define GP30_CD_CR_TRIM2_SET(__Val__)               	(((__Val__) << GP30_CD_CR_TRIM2_Pos) & GP30_CD_CR_TRIM2_Msk)		/*!< Default = 0x401725CF */
/**
* @}
*/

/** @defgroup GP30_CE register
* @{
*/
#define GP30_CE_CR_TRIM3_SET(__Val__)               	(((__Val__) << GP30_CE_CR_TRIM3_Pos) & GP30_CE_CR_TRIM3_Msk)		/*!< Default = 0x00270808 */
/**
* @}
*/

/** @defgroup GP30_D0 register
* @{
*/
#define GP30_D0_TOF_RATE_SET(__Val__)               	(((__Val__) << GP30_D0_TOF_RATE_Pos) & GP30_D0_TOF_RATE_Msk)		/*!< Default = 0x1 */
#define GP30_D0_NOT_USED_31_6_SET(__Val__)          	(((__Val__) << GP30_D0_NOT_USED_31_6_Pos) & GP30_D0_NOT_USED_31_6_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_DA register
* @{
*/
#define GP30_DA_ZCD_FHL_U_SET(__Val__)              	(((__Val__) << GP30_DA_ZCD_FHL_U_Pos) & GP30_DA_ZCD_FHL_U_Msk)		/*!< Default = 0x55 */
#define GP30_DA_NOT_USED_31_8_SET(__Val__)          	(((__Val__) << GP30_DA_NOT_USED_31_8_Pos) & GP30_DA_NOT_USED_31_8_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_DB register
* @{
*/
#define GP30_DB_ZCD_FHL_D_SET(__Val__)              	(((__Val__) << GP30_DB_ZCD_FHL_D_Pos) & GP30_DB_ZCD_FHL_D_Msk)		/*!< Default = 0x55 */
#define GP30_DB_NOT_USED_31_8_SET(__Val__)          	(((__Val__) << GP30_DB_NOT_USED_31_8_Pos) & GP30_DB_NOT_USED_31_8_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_D8 register
* @{
*/
#define GP30_D8_TOF_START_HIT_DLY_SET(__Val__)      	(((__Val__) << GP30_D8_TOF_START_HIT_DLY_Pos) & GP30_D8_TOF_START_HIT_DLY_Msk)		/*!< Default = 0x0 */
#define GP30_D8_NOT_USED_31_19_SET(__Val__)         	(((__Val__) << GP30_D8_NOT_USED_31_19_Pos) & GP30_D8_NOT_USED_31_19_Msk)		/*!< Default = 0x0 */
/**
* @}
*/

/** @defgroup GP30_DE register
* @{
*/
#define GP30_DE_HS_CLK_SEL_SET(__Val__)             	(((__Val__) << GP30_DE_HS_CLK_SEL_Pos) & GP30_DE_HS_CLK_SEL_Msk)		/*!< Default = 0x01 */
/**
* @}
*/

/**
* @}
*/


#endif /* INC_GP30_CFG_MACROS_H_ */
