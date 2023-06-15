/*
 * GP30_Bit_Definition.h
 *
 *  Created on: 19.08.2022
 *      Author: Matthias Hainz
 */

#ifndef INC_GP30_BIT_DEFINITION_H_
#define INC_GP30_BIT_DEFINITION_H_

/******************************************************************************/
/*                                                                            */
/*                        UFC GP30                   */
/*                                                                            */
/******************************************************************************/

/*******************  Bit definition for GP30_C0 register  ********************/
#define GP30_C0_WD_DIS_Pos                 	(0U)
#define GP30_C0_WD_DIS_Msk                 	(0xFFFFFFFFUL << GP30_C0_WD_DIS_Pos)		/*!< 0xFFFFFFFF */
#define GP30_C0_WD_DIS                 		GP30_C0_WD_DIS_Msk					/*!< WD_DIS[31:0]Watchdog Disable */
#define GP30_C0_WD_DIS_0                 		(0x00000001 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_1                 		(0x00000002 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_2                 		(0x00000004 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_3                 		(0x00000008 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_4                 		(0x00000010 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_5                 		(0x00000020 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_6                 		(0x00000040 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_7                 		(0x00000080 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_8                 		(0x00000100 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_9                 		(0x00000200 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_10                 		(0x00000400 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_11                 		(0x00000800 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_12                 		(0x00001000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_13                 		(0x00002000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_14                 		(0x00004000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_15                 		(0x00008000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_16                 		(0x00010000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_17                 		(0x00020000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_18                 		(0x00040000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_19                 		(0x00080000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_20                 		(0x00100000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_21                 		(0x00200000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_22                 		(0x00400000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_23                 		(0x00800000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_24                 		(0x01000000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_25                 		(0x02000000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_26                 		(0x04000000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_27                 		(0x08000000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_28                 		(0x10000000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_29                 		(0x20000000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_30                 		(0x40000000 << GP30_C0_WD_DIS_Pos)	
#define GP30_C0_WD_DIS_31                 		(0x80000000 << GP30_C0_WD_DIS_Pos)	

/*******************  Bit definition for GP30_C1 register  ********************/
#define GP30_C1_PI_TPW_Pos                 	(0U)
#define GP30_C1_PI_TPW_Msk                 	(0xFFUL << GP30_C1_PI_TPW_Pos)		/*!< 0x000000FF */
#define GP30_C1_PI_TPW                 		GP30_C1_PI_TPW_Msk					/*!< PI_TPW[7:0]Pulse Interface, Pulse Width */
#define GP30_C1_PI_TPW_0                 		(0x00000001 << GP30_C1_PI_TPW_Pos)	
#define GP30_C1_PI_TPW_1                 		(0x00000002 << GP30_C1_PI_TPW_Pos)	
#define GP30_C1_PI_TPW_2                 		(0x00000004 << GP30_C1_PI_TPW_Pos)	
#define GP30_C1_PI_TPW_3                 		(0x00000008 << GP30_C1_PI_TPW_Pos)	
#define GP30_C1_PI_TPW_4                 		(0x00000010 << GP30_C1_PI_TPW_Pos)	
#define GP30_C1_PI_TPW_5                 		(0x00000020 << GP30_C1_PI_TPW_Pos)	
#define GP30_C1_PI_TPW_6                 		(0x00000040 << GP30_C1_PI_TPW_Pos)	
#define GP30_C1_PI_TPW_7                 		(0x00000080 << GP30_C1_PI_TPW_Pos)	
#define GP30_C1_PI_EN_Pos                  	(8U)
#define GP30_C1_PI_EN_Msk                  	(0x1UL << GP30_C1_PI_EN_Pos)		/*!< 0x00000100 */
#define GP30_C1_PI_EN                  		GP30_C1_PI_EN_Msk					/*!< Pulse Interface Enable */
#define GP30_C1_PI_OUT_MODE_Pos            	(9U)
#define GP30_C1_PI_OUT_MODE_Msk            	(0x1UL << GP30_C1_PI_OUT_MODE_Pos)		/*!< 0x00000200 */
#define GP30_C1_PI_OUT_MODE            		GP30_C1_PI_OUT_MODE_Msk					/*!< Pulse Interface, Output Mode */
#define GP30_C1_PI_UPD_MODE_Pos            	(10U)
#define GP30_C1_PI_UPD_MODE_Msk            	(0x1UL << GP30_C1_PI_UPD_MODE_Pos)		/*!< 0x00000400 */
#define GP30_C1_PI_UPD_MODE            		GP30_C1_PI_UPD_MODE_Msk					/*!< Pulse Interface, Automatic Update Mode */
#define GP30_C1_NOT_USED_11_Pos            	(11U)
#define GP30_C1_NOT_USED_11_Msk            	(0x1UL << GP30_C1_NOT_USED_11_Pos)		/*!< 0x00000800 */
#define GP30_C1_NOT_USED_11            		GP30_C1_NOT_USED_11_Msk					/*!< Not used */
#define GP30_C1_E2P_MODE_Pos               	(12U)
#define GP30_C1_E2P_MODE_Msk               	(0x03UL << GP30_C1_E2P_MODE_Pos)		/*!< 0x00003000 */
#define GP30_C1_E2P_MODE               		GP30_C1_E2P_MODE_Msk					/*!< E2P_MODE[13:12]EEPROM Interface Mode */
#define GP30_C1_E2P_MODE_0               		(0x00000001 << GP30_C1_E2P_MODE_Pos)	
#define GP30_C1_E2P_MODE_1               		(0x00000002 << GP30_C1_E2P_MODE_Pos)	
#define GP30_C1_E2P_ADR_Pos                	(14U)
#define GP30_C1_E2P_ADR_Msk                	(0x07FUL << GP30_C1_E2P_ADR_Pos)		/*!< 0x001FC000 */
#define GP30_C1_E2P_ADR                		GP30_C1_E2P_ADR_Msk					/*!< E2P_ADR[20:14]EEPROM Interface Slave Address */
#define GP30_C1_E2P_ADR_0                		(0x00000001 << GP30_C1_E2P_ADR_Pos)	
#define GP30_C1_E2P_ADR_1                		(0x00000002 << GP30_C1_E2P_ADR_Pos)	
#define GP30_C1_E2P_ADR_2                		(0x00000004 << GP30_C1_E2P_ADR_Pos)	
#define GP30_C1_E2P_ADR_3                		(0x00000008 << GP30_C1_E2P_ADR_Pos)	
#define GP30_C1_E2P_ADR_4                		(0x00000010 << GP30_C1_E2P_ADR_Pos)	
#define GP30_C1_E2P_ADR_5                		(0x00000020 << GP30_C1_E2P_ADR_Pos)	
#define GP30_C1_E2P_ADR_6                		(0x00000040 << GP30_C1_E2P_ADR_Pos)	
#define GP30_C1_E2P_PU_EN_Pos              	(21U)
#define GP30_C1_E2P_PU_EN_Msk              	(0x1UL << GP30_C1_E2P_PU_EN_Pos)		/*!< 0x00200000 */
#define GP30_C1_E2P_PU_EN              		GP30_C1_E2P_PU_EN_Msk					/*!< EEPROM Interface Pull-up Enable */
#define GP30_C1_NOT_USED_31_22_Pos         	(22U)
#define GP30_C1_NOT_USED_31_22_Msk         	(0x03FFUL << GP30_C1_NOT_USED_31_22_Pos)		/*!< 0xFFC00000 */
#define GP30_C1_NOT_USED_31_22         		GP30_C1_NOT_USED_31_22_Msk					/*!< NOT_USED_31_22[31:22]Not used */
#define GP30_C1_NOT_USED_31_22_0         		(0x00000001 << GP30_C1_NOT_USED_31_22_Pos)	
#define GP30_C1_NOT_USED_31_22_1         		(0x00000002 << GP30_C1_NOT_USED_31_22_Pos)	
#define GP30_C1_NOT_USED_31_22_2         		(0x00000004 << GP30_C1_NOT_USED_31_22_Pos)	
#define GP30_C1_NOT_USED_31_22_3         		(0x00000008 << GP30_C1_NOT_USED_31_22_Pos)	
#define GP30_C1_NOT_USED_31_22_4         		(0x00000010 << GP30_C1_NOT_USED_31_22_Pos)	
#define GP30_C1_NOT_USED_31_22_5         		(0x00000020 << GP30_C1_NOT_USED_31_22_Pos)	
#define GP30_C1_NOT_USED_31_22_6         		(0x00000040 << GP30_C1_NOT_USED_31_22_Pos)	
#define GP30_C1_NOT_USED_31_22_7         		(0x00000080 << GP30_C1_NOT_USED_31_22_Pos)	
#define GP30_C1_NOT_USED_31_22_8         		(0x00000100 << GP30_C1_NOT_USED_31_22_Pos)	
#define GP30_C1_NOT_USED_31_22_9         		(0x00000200 << GP30_C1_NOT_USED_31_22_Pos)	

/*******************  Bit definition for GP30_C2 register  ********************/
#define GP30_C2_GP0_DIR_Pos                	(0U)
#define GP30_C2_GP0_DIR_Msk                	(0x03UL << GP30_C2_GP0_DIR_Pos)		/*!< 0x00000003 */
#define GP30_C2_GP0_DIR                		GP30_C2_GP0_DIR_Msk					/*!< GP0_DIR[1:0]Direction of General Purpose Port 0 */
#define GP30_C2_GP0_DIR_0                		(0x00000001 << GP30_C2_GP0_DIR_Pos)	
#define GP30_C2_GP0_DIR_1                		(0x00000002 << GP30_C2_GP0_DIR_Pos)	
#define GP30_C2_GP0_SEL_Pos                	(2U)
#define GP30_C2_GP0_SEL_Msk                	(0x03UL << GP30_C2_GP0_SEL_Pos)		/*!< 0x0000000C */
#define GP30_C2_GP0_SEL                		GP30_C2_GP0_SEL_Msk					/*!< GP0_SEL[3:2]Output Select of General Purpose Port 0 */
#define GP30_C2_GP0_SEL_0                		(0x00000001 << GP30_C2_GP0_SEL_Pos)	
#define GP30_C2_GP0_SEL_1                		(0x00000002 << GP30_C2_GP0_SEL_Pos)	
#define GP30_C2_GP1_DIR_Pos                	(4U)
#define GP30_C2_GP1_DIR_Msk                	(0x03UL << GP30_C2_GP1_DIR_Pos)		/*!< 0x00000030 */
#define GP30_C2_GP1_DIR                		GP30_C2_GP1_DIR_Msk					/*!< GP1_DIR[5:4]Direction of General Purpose Port 1 */
#define GP30_C2_GP1_DIR_0                		(0x00000001 << GP30_C2_GP1_DIR_Pos)	
#define GP30_C2_GP1_DIR_1                		(0x00000002 << GP30_C2_GP1_DIR_Pos)	
#define GP30_C2_GP1_SEL_Pos                	(6U)
#define GP30_C2_GP1_SEL_Msk                	(0x03UL << GP30_C2_GP1_SEL_Pos)		/*!< 0x000000C0 */
#define GP30_C2_GP1_SEL                		GP30_C2_GP1_SEL_Msk					/*!< GP1_SEL[7:6]Output Select of General Purpose Port 1 */
#define GP30_C2_GP1_SEL_0                		(0x00000001 << GP30_C2_GP1_SEL_Pos)	
#define GP30_C2_GP1_SEL_1                		(0x00000002 << GP30_C2_GP1_SEL_Pos)	
#define GP30_C2_GP2_DIR_Pos                	(8U)
#define GP30_C2_GP2_DIR_Msk                	(0x03UL << GP30_C2_GP2_DIR_Pos)		/*!< 0x00000300 */
#define GP30_C2_GP2_DIR                		GP30_C2_GP2_DIR_Msk					/*!< GP2_DIR[9:8]Direction of General Purpose Port 2 */
#define GP30_C2_GP2_DIR_0                		(0x00000001 << GP30_C2_GP2_DIR_Pos)	
#define GP30_C2_GP2_DIR_1                		(0x00000002 << GP30_C2_GP2_DIR_Pos)	
#define GP30_C2_GP2_SEL_Pos                	(10U)
#define GP30_C2_GP2_SEL_Msk                	(0x03UL << GP30_C2_GP2_SEL_Pos)		/*!< 0x00000C00 */
#define GP30_C2_GP2_SEL                		GP30_C2_GP2_SEL_Msk					/*!< GP2_SEL[11:10]Output Select of General Purpose Port 2 */
#define GP30_C2_GP2_SEL_0                		(0x00000001 << GP30_C2_GP2_SEL_Pos)	
#define GP30_C2_GP2_SEL_1                		(0x00000002 << GP30_C2_GP2_SEL_Pos)	
#define GP30_C2_GP3_DIR_Pos                	(12U)
#define GP30_C2_GP3_DIR_Msk                	(0x03UL << GP30_C2_GP3_DIR_Pos)		/*!< 0x00003000 */
#define GP30_C2_GP3_DIR                		GP30_C2_GP3_DIR_Msk					/*!< GP3_DIR[13:12]Direction of General Purpose Port 3 */
#define GP30_C2_GP3_DIR_0                		(0x00000001 << GP30_C2_GP3_DIR_Pos)	
#define GP30_C2_GP3_DIR_1                		(0x00000002 << GP30_C2_GP3_DIR_Pos)	
#define GP30_C2_GP3_SEL_Pos                	(14U)
#define GP30_C2_GP3_SEL_Msk                	(0x03UL << GP30_C2_GP3_SEL_Pos)		/*!< 0x0000C000 */
#define GP30_C2_GP3_SEL                		GP30_C2_GP3_SEL_Msk					/*!< GP3_SEL[15:14]Output Select of General Purpose Port 3 */
#define GP30_C2_GP3_SEL_0                		(0x00000001 << GP30_C2_GP3_SEL_Pos)	
#define GP30_C2_GP3_SEL_1                		(0x00000002 << GP30_C2_GP3_SEL_Pos)	
#define GP30_C2_GP4_DIR_Pos                	(16U)
#define GP30_C2_GP4_DIR_Msk                	(0x03UL << GP30_C2_GP4_DIR_Pos)		/*!< 0x00030000 */
#define GP30_C2_GP4_DIR                		GP30_C2_GP4_DIR_Msk					/*!< GP4_DIR[17:16]Direction of General Purpose Port 4 */
#define GP30_C2_GP4_DIR_0                		(0x00000001 << GP30_C2_GP4_DIR_Pos)	
#define GP30_C2_GP4_DIR_1                		(0x00000002 << GP30_C2_GP4_DIR_Pos)	
#define GP30_C2_GP4_SEL_Pos                	(18U)
#define GP30_C2_GP4_SEL_Msk                	(0x03UL << GP30_C2_GP4_SEL_Pos)		/*!< 0x000C0000 */
#define GP30_C2_GP4_SEL                		GP30_C2_GP4_SEL_Msk					/*!< GP4_SEL[19:18]Output Select of General Purpose Port 4 */
#define GP30_C2_GP4_SEL_0                		(0x00000001 << GP30_C2_GP4_SEL_Pos)	
#define GP30_C2_GP4_SEL_1                		(0x00000002 << GP30_C2_GP4_SEL_Pos)	
#define GP30_C2_GP5_DIR_Pos                	(20U)
#define GP30_C2_GP5_DIR_Msk                	(0x03UL << GP30_C2_GP5_DIR_Pos)		/*!< 0x00300000 */
#define GP30_C2_GP5_DIR                		GP30_C2_GP5_DIR_Msk					/*!< GP5_DIR[21:20]Direction of General Purpose Port 5 */
#define GP30_C2_GP5_DIR_0                		(0x00000001 << GP30_C2_GP5_DIR_Pos)	
#define GP30_C2_GP5_DIR_1                		(0x00000002 << GP30_C2_GP5_DIR_Pos)	
#define GP30_C2_GP5_SEL_Pos                	(22U)
#define GP30_C2_GP5_SEL_Msk                	(0x03UL << GP30_C2_GP5_SEL_Pos)		/*!< 0x00C00000 */
#define GP30_C2_GP5_SEL                		GP30_C2_GP5_SEL_Msk					/*!< GP5_SEL[23:22]Output Select of General Purpose Port 5 */
#define GP30_C2_GP5_SEL_0                		(0x00000001 << GP30_C2_GP5_SEL_Pos)	
#define GP30_C2_GP5_SEL_1                		(0x00000002 << GP30_C2_GP5_SEL_Pos)	
#define GP30_C2_GP6_DIR_Pos                	(24U)
#define GP30_C2_GP6_DIR_Msk                	(0x03UL << GP30_C2_GP6_DIR_Pos)		/*!< 0x03000000 */
#define GP30_C2_GP6_DIR                		GP30_C2_GP6_DIR_Msk					/*!< GP6_DIR[25:24]Direction of General Purpose Port 6 */
#define GP30_C2_GP6_DIR_0                		(0x00000001 << GP30_C2_GP6_DIR_Pos)	
#define GP30_C2_GP6_DIR_1                		(0x00000002 << GP30_C2_GP6_DIR_Pos)	
#define GP30_C2_GP6_SEL_Pos                	(26U)
#define GP30_C2_GP6_SEL_Msk                	(0x03UL << GP30_C2_GP6_SEL_Pos)		/*!< 0x0C000000 */
#define GP30_C2_GP6_SEL                		GP30_C2_GP6_SEL_Msk					/*!< GP6_SEL[27:26]Output Select of General Purpose Port 6 */
#define GP30_C2_GP6_SEL_0                		(0x00000001 << GP30_C2_GP6_SEL_Pos)	
#define GP30_C2_GP6_SEL_1                		(0x00000002 << GP30_C2_GP6_SEL_Pos)	
#define GP30_C2_NOT_USED_29_28_Pos         	(28U)
#define GP30_C2_NOT_USED_29_28_Msk         	(0x03UL << GP30_C2_NOT_USED_29_28_Pos)		/*!< 0x30000000 */
#define GP30_C2_NOT_USED_29_28         		GP30_C2_NOT_USED_29_28_Msk					/*!< NOT_USED_29_28[29:28]Not used */
#define GP30_C2_NOT_USED_29_28_0         		(0x00000001 << GP30_C2_NOT_USED_29_28_Pos)	
#define GP30_C2_NOT_USED_29_28_1         		(0x00000002 << GP30_C2_NOT_USED_29_28_Pos)	
#define GP30_C2_SCK_RXD_CFG_Pos            	(30U)
#define GP30_C2_SCK_RXD_CFG_Msk            	(0x03UL << GP30_C2_SCK_RXD_CFG_Pos)		/*!< 0xC0000000 */
#define GP30_C2_SCK_RXD_CFG            		GP30_C2_SCK_RXD_CFG_Msk					/*!< SCK_RXD_CFG[31:30]Configuration of SCK (SPI) or RXD (UART) Port */
#define GP30_C2_SCK_RXD_CFG_0            		(0x00000001 << GP30_C2_SCK_RXD_CFG_Pos)	
#define GP30_C2_SCK_RXD_CFG_1            		(0x00000002 << GP30_C2_SCK_RXD_CFG_Pos)	

/*******************  Bit definition for GP30_C3 register  ********************/
#define GP30_C3_UART_DATA_MSG_LEN_Pos      	(0U)
#define GP30_C3_UART_DATA_MSG_LEN_Msk      	(0xFUL << GP30_C3_UART_DATA_MSG_LEN_Pos)		/*!< 0x0000000F */
#define GP30_C3_UART_DATA_MSG_LEN      		GP30_C3_UART_DATA_MSG_LEN_Msk					/*!< UART_DATA_MSG_LEN[3:0]Length of automatic data message */
#define GP30_C3_UART_DATA_MSG_LEN_0      		(0x00000001 << GP30_C3_UART_DATA_MSG_LEN_Pos)	
#define GP30_C3_UART_DATA_MSG_LEN_1      		(0x00000002 << GP30_C3_UART_DATA_MSG_LEN_Pos)	
#define GP30_C3_UART_DATA_MSG_LEN_2      		(0x00000004 << GP30_C3_UART_DATA_MSG_LEN_Pos)	
#define GP30_C3_UART_DATA_MSG_LEN_3      		(0x00000008 << GP30_C3_UART_DATA_MSG_LEN_Pos)	
#define GP30_C3_UART_DATA_MSG_ADR_Pos      	(4U)
#define GP30_C3_UART_DATA_MSG_ADR_Msk      	(0xFUL << GP30_C3_UART_DATA_MSG_ADR_Pos)		/*!< 0x000000F0 */
#define GP30_C3_UART_DATA_MSG_ADR      		GP30_C3_UART_DATA_MSG_ADR_Msk					/*!< UART_DATA_MSG_ADR[7:4]Start of address block of automatic data message */
#define GP30_C3_UART_DATA_MSG_ADR_0      		(0x00000001 << GP30_C3_UART_DATA_MSG_ADR_Pos)	
#define GP30_C3_UART_DATA_MSG_ADR_1      		(0x00000002 << GP30_C3_UART_DATA_MSG_ADR_Pos)	
#define GP30_C3_UART_DATA_MSG_ADR_2      		(0x00000004 << GP30_C3_UART_DATA_MSG_ADR_Pos)	
#define GP30_C3_UART_DATA_MSG_ADR_3      		(0x00000008 << GP30_C3_UART_DATA_MSG_ADR_Pos)	
#define GP30_C3_UART_IRQ_CLR_MODE_Pos      	(8U)
#define GP30_C3_UART_IRQ_CLR_MODE_Msk      	(0x1UL << GP30_C3_UART_IRQ_CLR_MODE_Pos)		/*!< 0x00000100 */
#define GP30_C3_UART_IRQ_CLR_MODE      		GP30_C3_UART_IRQ_CLR_MODE_Msk					/*!< UART Interrupt Clear Mode */
#define GP30_C3_UART_HB_MODE_Pos           	(9U)
#define GP30_C3_UART_HB_MODE_Msk           	(0x1UL << GP30_C3_UART_HB_MODE_Pos)		/*!< 0x00000200 */
#define GP30_C3_UART_HB_MODE           		GP30_C3_UART_HB_MODE_Msk					/*!< UART High Baud Mode */
#define GP30_C3_UART_HBR_Pos               	(10U)
#define GP30_C3_UART_HBR_Msk               	(0x03UL << GP30_C3_UART_HBR_Pos)		/*!< 0x00000C00 */
#define GP30_C3_UART_HBR               		GP30_C3_UART_HBR_Msk					/*!< UART_HBR[11:10]UART High Baud Rate */
#define GP30_C3_UART_HBR_0               		(0x00000001 << GP30_C3_UART_HBR_Pos)	
#define GP30_C3_UART_HBR_1               		(0x00000002 << GP30_C3_UART_HBR_Pos)	
#define GP30_C3_UART_WUP_EN_Pos            	(12U)
#define GP30_C3_UART_WUP_EN_Msk            	(0x1UL << GP30_C3_UART_WUP_EN_Pos)		/*!< 0x00001000 */
#define GP30_C3_UART_WUP_EN            		GP30_C3_UART_WUP_EN_Msk					/*!< CRC Wake Up Command Enable */
#define GP30_C3_UART_CRC_MODE_Pos          	(13U)
#define GP30_C3_UART_CRC_MODE_Msk          	(0x1UL << GP30_C3_UART_CRC_MODE_Pos)		/*!< 0x00002000 */
#define GP30_C3_UART_CRC_MODE          		GP30_C3_UART_CRC_MODE_Msk					/*!< CRC Mode */
#define GP30_C3_UART_CRC_INIT_VAL_Pos      	(14U)
#define GP30_C3_UART_CRC_INIT_VAL_Msk      	(0x1UL << GP30_C3_UART_CRC_INIT_VAL_Pos)		/*!< 0x00004000 */
#define GP30_C3_UART_CRC_INIT_VAL      		GP30_C3_UART_CRC_INIT_VAL_Msk					/*!< CRC Initial Value */
#define GP30_C3_UART_CRC_ORDER_Pos         	(15U)
#define GP30_C3_UART_CRC_ORDER_Msk         	(0x1UL << GP30_C3_UART_CRC_ORDER_Pos)		/*!< 0x00008000 */
#define GP30_C3_UART_CRC_ORDER         		GP30_C3_UART_CRC_ORDER_Msk					/*!< CRC unreversed/reversed order */
#define GP30_C3_UART_CRC_POLY_Pos          	(16U)
#define GP30_C3_UART_CRC_POLY_Msk          	(0xFFFFUL << GP30_C3_UART_CRC_POLY_Pos)		/*!< 0xFFFF0000 */
#define GP30_C3_UART_CRC_POLY          		GP30_C3_UART_CRC_POLY_Msk					/*!< UART_CRC_POLY[31:16]CRC Polynom */
#define GP30_C3_UART_CRC_POLY_0          		(0x00000001 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_1          		(0x00000002 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_2          		(0x00000004 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_3          		(0x00000008 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_4          		(0x00000010 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_5          		(0x00000020 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_6          		(0x00000040 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_7          		(0x00000080 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_8          		(0x00000100 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_9          		(0x00000200 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_10          		(0x00000400 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_11          		(0x00000800 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_12          		(0x00001000 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_13          		(0x00002000 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_14          		(0x00004000 << GP30_C3_UART_CRC_POLY_Pos)	
#define GP30_C3_UART_CRC_POLY_15          		(0x00008000 << GP30_C3_UART_CRC_POLY_Pos)	

/*******************  Bit definition for GP30_C4 register  ********************/
#define GP30_C4_EF_EN_TDC_TMO_Pos          	(0U)
#define GP30_C4_EF_EN_TDC_TMO_Msk          	(0x1UL << GP30_C4_EF_EN_TDC_TMO_Pos)		/*!< 0x00000001 */
#define GP30_C4_EF_EN_TDC_TMO          		GP30_C4_EF_EN_TDC_TMO_Msk					/*!< Error Flag Enable, TDC Timeout */
#define GP30_C4_EF_EN_TOF_TMO_Pos          	(1U)
#define GP30_C4_EF_EN_TOF_TMO_Msk          	(0x1UL << GP30_C4_EF_EN_TOF_TMO_Pos)		/*!< 0x00000002 */
#define GP30_C4_EF_EN_TOF_TMO          		GP30_C4_EF_EN_TOF_TMO_Msk					/*!< Error Flag Enable, TOF Timeout */
#define GP30_C4_EF_EN_AM_TMO_Pos           	(2U)
#define GP30_C4_EF_EN_AM_TMO_Msk           	(0x1UL << GP30_C4_EF_EN_AM_TMO_Pos)		/*!< 0x00000004 */
#define GP30_C4_EF_EN_AM_TMO           		GP30_C4_EF_EN_AM_TMO_Msk					/*!< Error Flag Enable, Amplitude Measurement Timeout */
#define GP30_C4_EF_EN_TM_OC_Pos            	(3U)
#define GP30_C4_EF_EN_TM_OC_Msk            	(0x1UL << GP30_C4_EF_EN_TM_OC_Pos)		/*!< 0x00000008 */
#define GP30_C4_EF_EN_TM_OC            		GP30_C4_EF_EN_TM_OC_Msk					/*!< Error Flag Enable, Temperature Measurement Open Circuit */
#define GP30_C4_EF_EN_TM_SC_Pos            	(4U)
#define GP30_C4_EF_EN_TM_SC_Msk            	(0x1UL << GP30_C4_EF_EN_TM_SC_Pos)		/*!< 0x00000010 */
#define GP30_C4_EF_EN_TM_SC            		GP30_C4_EF_EN_TM_SC_Msk					/*!< Error Flag Enable, Temperature Measurement Short Circuit */
#define GP30_C4_EF_EN_ZCC_ERR_Pos          	(5U)
#define GP30_C4_EF_EN_ZCC_ERR_Msk          	(0x1UL << GP30_C4_EF_EN_ZCC_ERR_Pos)		/*!< 0x00000020 */
#define GP30_C4_EF_EN_ZCC_ERR          		GP30_C4_EF_EN_ZCC_ERR_Msk					/*!< Error Flag Enable, Zero Cross Calibration Error */
#define GP30_C4_EF_EN_LBD_ERR_Pos          	(6U)
#define GP30_C4_EF_EN_LBD_ERR_Msk          	(0x1UL << GP30_C4_EF_EN_LBD_ERR_Pos)		/*!< 0x00000040 */
#define GP30_C4_EF_EN_LBD_ERR          		GP30_C4_EF_EN_LBD_ERR_Msk					/*!< Error Flag Enable, Low Battery Detect Error */
#define GP30_C4_EF_EN_USM_SQC_TMO_Pos      	(7U)
#define GP30_C4_EF_EN_USM_SQC_TMO_Msk      	(0x1UL << GP30_C4_EF_EN_USM_SQC_TMO_Pos)		/*!< 0x00000080 */
#define GP30_C4_EF_EN_USM_SQC_TMO      		GP30_C4_EF_EN_USM_SQC_TMO_Msk					/*!< Error Flag Enable, Ultrasonic Sequence Timeout */
#define GP30_C4_EF_EN_TM_SQC_TMO_Pos       	(8U)
#define GP30_C4_EF_EN_TM_SQC_TMO_Msk       	(0x1UL << GP30_C4_EF_EN_TM_SQC_TMO_Pos)		/*!< 0x00000100 */
#define GP30_C4_EF_EN_TM_SQC_TMO       		GP30_C4_EF_EN_TM_SQC_TMO_Msk					/*!< Error Flag Enable, Temperature Sequence Timeout */
#define GP30_C4_EF_EN_TSQ_TMO_Pos          	(9U)
#define GP30_C4_EF_EN_TSQ_TMO_Msk          	(0x1UL << GP30_C4_EF_EN_TSQ_TMO_Pos)		/*!< 0x00000200 */
#define GP30_C4_EF_EN_TSQ_TMO          		GP30_C4_EF_EN_TSQ_TMO_Msk					/*!< Error Flag Enable, Task Sequencer Timeout */
#define GP30_C4_EF_EN_E2P_ACK_ERR_Pos      	(10U)
#define GP30_C4_EF_EN_E2P_ACK_ERR_Msk      	(0x1UL << GP30_C4_EF_EN_E2P_ACK_ERR_Pos)		/*!< 0x00000400 */
#define GP30_C4_EF_EN_E2P_ACK_ERR      		GP30_C4_EF_EN_E2P_ACK_ERR_Msk					/*!< Error Flag Enable, EEPROM Acknowledge Error */
#define GP30_C4_NOT_USED_11_Pos            	(11U)
#define GP30_C4_NOT_USED_11_Msk            	(0x1UL << GP30_C4_NOT_USED_11_Pos)		/*!< 0x00000800 */
#define GP30_C4_NOT_USED_11            		GP30_C4_NOT_USED_11_Msk					/*!< Not used */
#define GP30_C4_EF_EN_CS_FWD1_ERR_Pos      	(12U)
#define GP30_C4_EF_EN_CS_FWD1_ERR_Msk      	(0x1UL << GP30_C4_EF_EN_CS_FWD1_ERR_Pos)		/*!< 0x00001000 */
#define GP30_C4_EF_EN_CS_FWD1_ERR      		GP30_C4_EF_EN_CS_FWD1_ERR_Msk					/*!< Error Flag Enable, FWD1 Checksum Error */
#define GP30_C4_EF_EN_CS_FWD2_ERR_Pos      	(13U)
#define GP30_C4_EF_EN_CS_FWD2_ERR_Msk      	(0x1UL << GP30_C4_EF_EN_CS_FWD2_ERR_Pos)		/*!< 0x00002000 */
#define GP30_C4_EF_EN_CS_FWD2_ERR      		GP30_C4_EF_EN_CS_FWD2_ERR_Msk					/*!< Error Flag Enable, FWD2 Checksum Error */
#define GP30_C4_EF_EN_CS_FWU_ERR_Pos       	(14U)
#define GP30_C4_EF_EN_CS_FWU_ERR_Msk       	(0x1UL << GP30_C4_EF_EN_CS_FWU_ERR_Pos)		/*!< 0x00004000 */
#define GP30_C4_EF_EN_CS_FWU_ERR       		GP30_C4_EF_EN_CS_FWU_ERR_Msk					/*!< Error Flag Enable, FWU Checksum Error */
#define GP30_C4_EF_EN_CS_FWA_ERR_Pos       	(15U)
#define GP30_C4_EF_EN_CS_FWA_ERR_Msk       	(0x1UL << GP30_C4_EF_EN_CS_FWA_ERR_Pos)		/*!< 0x00008000 */
#define GP30_C4_EF_EN_CS_FWA_ERR       		GP30_C4_EF_EN_CS_FWA_ERR_Msk					/*!< Error Flag Enable, FWA Checksum Error */
#define GP30_C4_IRQ_EN_TSQ_FNS_Pos         	(16U)
#define GP30_C4_IRQ_EN_TSQ_FNS_Msk         	(0x1UL << GP30_C4_IRQ_EN_TSQ_FNS_Pos)		/*!< 0x00010000 */
#define GP30_C4_IRQ_EN_TSQ_FNS         		GP30_C4_IRQ_EN_TSQ_FNS_Msk					/*!< Interrupt Request Enable, Task Sequencer finished */
#define GP30_C4_IRQ_EN_TRANS_FNS_Pos       	(17U)
#define GP30_C4_IRQ_EN_TRANS_FNS_Msk       	(0x1UL << GP30_C4_IRQ_EN_TRANS_FNS_Pos)		/*!< 0x00020000 */
#define GP30_C4_IRQ_EN_TRANS_FNS       		GP30_C4_IRQ_EN_TRANS_FNS_Msk					/*!< Interrupt Request Enable, FW Transaction finished */
#define GP30_C4_IRQ_EN_BLD_FNS_Pos         	(18U)
#define GP30_C4_IRQ_EN_BLD_FNS_Msk         	(0x1UL << GP30_C4_IRQ_EN_BLD_FNS_Pos)		/*!< 0x00040000 */
#define GP30_C4_IRQ_EN_BLD_FNS         		GP30_C4_IRQ_EN_BLD_FNS_Msk					/*!< Interrupt Request Enable, Bootload finished */
#define GP30_C4_IRQ_EN_CHKSUM_FNS_Pos      	(19U)
#define GP30_C4_IRQ_EN_CHKSUM_FNS_Msk      	(0x1UL << GP30_C4_IRQ_EN_CHKSUM_FNS_Pos)		/*!< 0x00080000 */
#define GP30_C4_IRQ_EN_CHKSUM_FNS      		GP30_C4_IRQ_EN_CHKSUM_FNS_Msk					/*!< Interrupt Request Enable, Checksum generation finished */
#define GP30_C4_IRQ_EN_FW_S_Pos            	(20U)
#define GP30_C4_IRQ_EN_FW_S_Msk            	(0x1UL << GP30_C4_IRQ_EN_FW_S_Pos)		/*!< 0x00100000 */
#define GP30_C4_IRQ_EN_FW_S            		GP30_C4_IRQ_EN_FW_S_Msk					/*!< Interrupt Request Enable, Firmware, synchronized with task sequencer */
#define GP30_C4_IRQ_EN_FW_Pos              	(21U)
#define GP30_C4_IRQ_EN_FW_Msk              	(0x1UL << GP30_C4_IRQ_EN_FW_Pos)		/*!< 0x00200000 */
#define GP30_C4_IRQ_EN_FW              		GP30_C4_IRQ_EN_FW_Msk					/*!< Interrupt Request Enable, Firmware */
#define GP30_C4_IRQ_EN_DBG_STEP_FNS_Pos    	(22U)
#define GP30_C4_IRQ_EN_DBG_STEP_FNS_Msk    	(0x1UL << GP30_C4_IRQ_EN_DBG_STEP_FNS_Pos)		/*!< 0x00400000 */
#define GP30_C4_IRQ_EN_DBG_STEP_FNS    		GP30_C4_IRQ_EN_DBG_STEP_FNS_Msk					/*!< Interrupt Request Enable, Debug Step Finished */
#define GP30_C4_IRQ_EN_ERR_FLAG_Pos        	(23U)
#define GP30_C4_IRQ_EN_ERR_FLAG_Msk        	(0x1UL << GP30_C4_IRQ_EN_ERR_FLAG_Pos)		/*!< 0x00800000 */
#define GP30_C4_IRQ_EN_ERR_FLAG        		GP30_C4_IRQ_EN_ERR_FLAG_Msk					/*!< Interrupt Request Enable, Error Flag */
#define GP30_C4_CPU_REQ_EN_PP_Pos          	(24U)
#define GP30_C4_CPU_REQ_EN_PP_Msk          	(0x1UL << GP30_C4_CPU_REQ_EN_PP_Pos)		/*!< 0x01000000 */
#define GP30_C4_CPU_REQ_EN_PP          		GP30_C4_CPU_REQ_EN_PP_Msk					/*!< CPU Request Enable, Post Processing */
#define GP30_C4_HIDDEN_25_Pos              	(25U)
#define GP30_C4_HIDDEN_25_Msk              	(0x1UL << GP30_C4_HIDDEN_25_Pos)		/*!< 0x02000000 */
#define GP30_C4_HIDDEN_25              		GP30_C4_HIDDEN_25_Msk					/*!< Not used */
#define GP30_C4_CPU_REQ_EN_GPH_Pos         	(26U)
#define GP30_C4_CPU_REQ_EN_GPH_Msk         	(0x1UL << GP30_C4_CPU_REQ_EN_GPH_Pos)		/*!< 0x04000000 */
#define GP30_C4_CPU_REQ_EN_GPH         		GP30_C4_CPU_REQ_EN_GPH_Msk					/*!< CPU Request Enable, General Purpose Handling */
#define GP30_C4_HIDDEN_27_Pos              	(27U)
#define GP30_C4_HIDDEN_27_Msk              	(0x1UL << GP30_C4_HIDDEN_27_Pos)		/*!< 0x08000000 */
#define GP30_C4_HIDDEN_27              		GP30_C4_HIDDEN_27_Msk					/*!< Mandatory setting: b0 */
#define GP30_C4_CPU_GPT_Pos                	(28U)
#define GP30_C4_CPU_GPT_Msk                	(0x07UL << GP30_C4_CPU_GPT_Pos)		/*!< 0x70000000 */
#define GP30_C4_CPU_GPT                		GP30_C4_CPU_GPT_Msk					/*!< CPU_GPT[30:28]General Purpose Timer */
#define GP30_C4_CPU_GPT_0                		(0x00000001 << GP30_C4_CPU_GPT_Pos)	
#define GP30_C4_CPU_GPT_1                		(0x00000002 << GP30_C4_CPU_GPT_Pos)	
#define GP30_C4_CPU_GPT_2                		(0x00000004 << GP30_C4_CPU_GPT_Pos)	
#define GP30_C4_CPU_BLD_CS_Pos             	(31U)
#define GP30_C4_CPU_BLD_CS_Msk             	(0x1UL << GP30_C4_CPU_BLD_CS_Pos)		/*!< 0x80000000 */
#define GP30_C4_CPU_BLD_CS             		GP30_C4_CPU_BLD_CS_Msk					/*!< Checksum Execution after bootloader */

/*******************  Bit definition for GP30_C5 register  ********************/
#define GP30_C5_HIDDEN_1_0_Pos             	(0U)
#define GP30_C5_HIDDEN_1_0_Msk             	(0x03UL << GP30_C5_HIDDEN_1_0_Pos)		/*!< 0x00000003 */
#define GP30_C5_HIDDEN_1_0             		GP30_C5_HIDDEN_1_0_Msk					/*!< HIDDEN_1_0[1:0]Mandatory setting: b00 */
#define GP30_C5_HIDDEN_1_0_0             		(0x00000001 << GP30_C5_HIDDEN_1_0_Pos)	
#define GP30_C5_HIDDEN_1_0_1             		(0x00000002 << GP30_C5_HIDDEN_1_0_Pos)	
#define GP30_C5_HS_CLK_ST_Pos              	(2U)
#define GP30_C5_HS_CLK_ST_Msk              	(0x07UL << GP30_C5_HS_CLK_ST_Pos)		/*!< 0x0000001C */
#define GP30_C5_HS_CLK_ST              		GP30_C5_HS_CLK_ST_Msk					/*!< HS_CLK_ST[4:2]High-Speed Clock Settling Time */
#define GP30_C5_HS_CLK_ST_0              		(0x00000001 << GP30_C5_HS_CLK_ST_Pos)	
#define GP30_C5_HS_CLK_ST_1              		(0x00000002 << GP30_C5_HS_CLK_ST_Pos)	
#define GP30_C5_HS_CLK_ST_2              		(0x00000004 << GP30_C5_HS_CLK_ST_Pos)	
#define GP30_C5_HBR_TO_Pos                 	(5U)
#define GP30_C5_HBR_TO_Msk                 	(0x07UL << GP30_C5_HBR_TO_Pos)		/*!< 0x000000E0 */
#define GP30_C5_HBR_TO                 		GP30_C5_HBR_TO_Msk					/*!< HBR_TO[7:5]High-Speed Clock Timeout if High Baud rate enabled */
#define GP30_C5_HBR_TO_0                 		(0x00000001 << GP30_C5_HBR_TO_Pos)	
#define GP30_C5_HBR_TO_1                 		(0x00000002 << GP30_C5_HBR_TO_Pos)	
#define GP30_C5_HBR_TO_2                 		(0x00000004 << GP30_C5_HBR_TO_Pos)	
#define GP30_C5_HS_CLK_SEL_Pos             	(8U)
#define GP30_C5_HS_CLK_SEL_Msk             	(0x1UL << GP30_C5_HS_CLK_SEL_Pos)		/*!< 0x00000100 */
#define GP30_C5_HS_CLK_SEL             		GP30_C5_HS_CLK_SEL_Msk					/*!< High-Speed Clock Select, if operating in flow meter mode. For initial communication or operating in time conversion mode, HS_CLK_SEL in SHR_RC 0xDE has to be used.  */
#define GP30_C5_HSC_RATE_Pos               	(9U)
#define GP30_C5_HSC_RATE_Msk               	(0x07UL << GP30_C5_HSC_RATE_Pos)		/*!< 0x00000E00 */
#define GP30_C5_HSC_RATE               		GP30_C5_HSC_RATE_Msk					/*!< HSC_RATE[11:9]High-Speed Clock Calibration Rate */
#define GP30_C5_HSC_RATE_0               		(0x00000001 << GP30_C5_HSC_RATE_Pos)	
#define GP30_C5_HSC_RATE_1               		(0x00000002 << GP30_C5_HSC_RATE_Pos)	
#define GP30_C5_HSC_RATE_2               		(0x00000004 << GP30_C5_HSC_RATE_Pos)	
#define GP30_C5_GPH_MODE_Pos               	(12U)
#define GP30_C5_GPH_MODE_Msk               	(0x1UL << GP30_C5_GPH_MODE_Pos)		/*!< 0x00001000 */
#define GP30_C5_GPH_MODE               		GP30_C5_GPH_MODE_Msk					/*!< General Purpose Handling Mode */
#define GP30_C5_VM_RATE_Pos                	(13U)
#define GP30_C5_VM_RATE_Msk                	(0x07UL << GP30_C5_VM_RATE_Pos)		/*!< 0x0000E000 */
#define GP30_C5_VM_RATE                		GP30_C5_VM_RATE_Msk					/*!< VM_RATE[15:13]VCC Voltage measurement rate */
#define GP30_C5_VM_RATE_0                		(0x00000001 << GP30_C5_VM_RATE_Pos)	
#define GP30_C5_VM_RATE_1                		(0x00000002 << GP30_C5_VM_RATE_Pos)	
#define GP30_C5_VM_RATE_2                		(0x00000004 << GP30_C5_VM_RATE_Pos)	
#define GP30_C5_LBD_TH_Pos                 	(16U)
#define GP30_C5_LBD_TH_Msk                 	(0x3FUL << GP30_C5_LBD_TH_Pos)		/*!< 0x003F0000 */
#define GP30_C5_LBD_TH                 		GP30_C5_LBD_TH_Msk					/*!< LBD_TH[21:16]Low battery detection threshold */
#define GP30_C5_LBD_TH_0                 		(0x00000001 << GP30_C5_LBD_TH_Pos)	
#define GP30_C5_LBD_TH_1                 		(0x00000002 << GP30_C5_LBD_TH_Pos)	
#define GP30_C5_LBD_TH_2                 		(0x00000004 << GP30_C5_LBD_TH_Pos)	
#define GP30_C5_LBD_TH_3                 		(0x00000008 << GP30_C5_LBD_TH_Pos)	
#define GP30_C5_LBD_TH_4                 		(0x00000010 << GP30_C5_LBD_TH_Pos)	
#define GP30_C5_LBD_TH_5                 		(0x00000020 << GP30_C5_LBD_TH_Pos)	
#define GP30_C5_TSV_UPD_MODE_Pos           	(22U)
#define GP30_C5_TSV_UPD_MODE_Msk           	(0x1UL << GP30_C5_TSV_UPD_MODE_Pos)		/*!< 0x00400000 */
#define GP30_C5_TSV_UPD_MODE           		GP30_C5_TSV_UPD_MODE_Msk					/*!< Time stamp update mode */
#define GP30_C5_BF_SEL_Pos                 	(23U)
#define GP30_C5_BF_SEL_Msk                 	(0x1UL << GP30_C5_BF_SEL_Pos)		/*!< 0x00800000 */
#define GP30_C5_BF_SEL                 		GP30_C5_BF_SEL_Msk					/*!< Base Frequency Select */
#define GP30_C5_NOT_USED_31_24_Pos         	(24U)
#define GP30_C5_NOT_USED_31_24_Msk         	(0xFFUL << GP30_C5_NOT_USED_31_24_Pos)		/*!< 0xFF000000 */
#define GP30_C5_NOT_USED_31_24         		GP30_C5_NOT_USED_31_24_Msk					/*!< NOT_USED_31_24[31:24]Not used */
#define GP30_C5_NOT_USED_31_24_0         		(0x00000001 << GP30_C5_NOT_USED_31_24_Pos)	
#define GP30_C5_NOT_USED_31_24_1         		(0x00000002 << GP30_C5_NOT_USED_31_24_Pos)	
#define GP30_C5_NOT_USED_31_24_2         		(0x00000004 << GP30_C5_NOT_USED_31_24_Pos)	
#define GP30_C5_NOT_USED_31_24_3         		(0x00000008 << GP30_C5_NOT_USED_31_24_Pos)	
#define GP30_C5_NOT_USED_31_24_4         		(0x00000010 << GP30_C5_NOT_USED_31_24_Pos)	
#define GP30_C5_NOT_USED_31_24_5         		(0x00000020 << GP30_C5_NOT_USED_31_24_Pos)	
#define GP30_C5_NOT_USED_31_24_6         		(0x00000040 << GP30_C5_NOT_USED_31_24_Pos)	
#define GP30_C5_NOT_USED_31_24_7         		(0x00000080 << GP30_C5_NOT_USED_31_24_Pos)	

/*******************  Bit definition for GP30_C6 register  ********************/
#define GP30_C6_MR_CT_Pos                  	(0U)
#define GP30_C6_MR_CT_Msk                  	(0x1FFFUL << GP30_C6_MR_CT_Pos)		/*!< 0x00001FFF */
#define GP30_C6_MR_CT                  		GP30_C6_MR_CT_Msk					/*!< MR_CT[12:0]Measure rate cycle time */
#define GP30_C6_MR_CT_0                  		(0x00000001 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_1                  		(0x00000002 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_2                  		(0x00000004 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_3                  		(0x00000008 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_4                  		(0x00000010 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_5                  		(0x00000020 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_6                  		(0x00000040 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_7                  		(0x00000080 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_8                  		(0x00000100 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_9                  		(0x00000200 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_10                  		(0x00000400 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_11                  		(0x00000800 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_MR_CT_12                  		(0x00001000 << GP30_C6_MR_CT_Pos)	
#define GP30_C6_TS_RESTART_EN_Pos          	(13U)
#define GP30_C6_TS_RESTART_EN_Msk          	(0x1UL << GP30_C6_TS_RESTART_EN_Pos)		/*!< 0x00002000 */
#define GP30_C6_TS_RESTART_EN          		GP30_C6_TS_RESTART_EN_Msk					/*!< Task Sequencer Restart Enable */
#define GP30_C6_PP_EN_Pos                  	(14U)
#define GP30_C6_PP_EN_Msk                  	(0x1UL << GP30_C6_PP_EN_Pos)		/*!< 0x00004000 */
#define GP30_C6_PP_EN                  		GP30_C6_PP_EN_Msk					/*!< Post processing enable */
#define GP30_C6_PP_MODE_Pos                	(15U)
#define GP30_C6_PP_MODE_Msk                	(0x1UL << GP30_C6_PP_MODE_Pos)		/*!< 0x00008000 */
#define GP30_C6_PP_MODE                		GP30_C6_PP_MODE_Msk					/*!< Post processing mode (only if post processing is enabled) */
#define GP30_C6_BG_PLS_MODE_Pos            	(16U)
#define GP30_C6_BG_PLS_MODE_Msk            	(0x1UL << GP30_C6_BG_PLS_MODE_Pos)		/*!< 0x00010000 */
#define GP30_C6_BG_PLS_MODE            		GP30_C6_BG_PLS_MODE_Msk					/*!< Bandgap pulse mode */
#define GP30_C6_HIDDEN_19_17_Pos           	(17U)
#define GP30_C6_HIDDEN_19_17_Msk           	(0x07UL << GP30_C6_HIDDEN_19_17_Pos)		/*!< 0x000E0000 */
#define GP30_C6_HIDDEN_19_17           		GP30_C6_HIDDEN_19_17_Msk					/*!< HIDDEN_19_17[19:17]Mandatory setting: b000 */
#define GP30_C6_HIDDEN_19_17_0           		(0x00000001 << GP30_C6_HIDDEN_19_17_Pos)	
#define GP30_C6_HIDDEN_19_17_1           		(0x00000002 << GP30_C6_HIDDEN_19_17_Pos)	
#define GP30_C6_HIDDEN_19_17_2           		(0x00000004 << GP30_C6_HIDDEN_19_17_Pos)	
#define GP30_C6_TS_CST_Pos                 	(20U)
#define GP30_C6_TS_CST_Msk                 	(0x07UL << GP30_C6_TS_CST_Pos)		/*!< 0x00700000 */
#define GP30_C6_TS_CST                 		GP30_C6_TS_CST_Msk					/*!< TS_CST[22:20]Checksum Timer */
#define GP30_C6_TS_CST_0                 		(0x00000001 << GP30_C6_TS_CST_Pos)	
#define GP30_C6_TS_CST_1                 		(0x00000002 << GP30_C6_TS_CST_Pos)	
#define GP30_C6_TS_CST_2                 		(0x00000004 << GP30_C6_TS_CST_Pos)	
#define GP30_C6_TS_START_MODE_Pos          	(23U)
#define GP30_C6_TS_START_MODE_Msk          	(0x1UL << GP30_C6_TS_START_MODE_Pos)		/*!< 0x00800000 */
#define GP30_C6_TS_START_MODE          		GP30_C6_TS_START_MODE_Msk					/*!< Task Sequencing Start Mode */
#define GP30_C6_NOT_USED_31_24_Pos         	(24U)
#define GP30_C6_NOT_USED_31_24_Msk         	(0xFFUL << GP30_C6_NOT_USED_31_24_Pos)		/*!< 0xFF000000 */
#define GP30_C6_NOT_USED_31_24         		GP30_C6_NOT_USED_31_24_Msk					/*!< NOT_USED_31_24[31:24]Not used */
#define GP30_C6_NOT_USED_31_24_0         		(0x00000001 << GP30_C6_NOT_USED_31_24_Pos)	
#define GP30_C6_NOT_USED_31_24_1         		(0x00000002 << GP30_C6_NOT_USED_31_24_Pos)	
#define GP30_C6_NOT_USED_31_24_2         		(0x00000004 << GP30_C6_NOT_USED_31_24_Pos)	
#define GP30_C6_NOT_USED_31_24_3         		(0x00000008 << GP30_C6_NOT_USED_31_24_Pos)	
#define GP30_C6_NOT_USED_31_24_4         		(0x00000010 << GP30_C6_NOT_USED_31_24_Pos)	
#define GP30_C6_NOT_USED_31_24_5         		(0x00000020 << GP30_C6_NOT_USED_31_24_Pos)	
#define GP30_C6_NOT_USED_31_24_6         		(0x00000040 << GP30_C6_NOT_USED_31_24_Pos)	
#define GP30_C6_NOT_USED_31_24_7         		(0x00000080 << GP30_C6_NOT_USED_31_24_Pos)	

/*******************  Bit definition for GP30_C7 register  ********************/
#define GP30_C7_TM_RATE_Pos                	(0U)
#define GP30_C7_TM_RATE_Msk                	(0x03FFUL << GP30_C7_TM_RATE_Pos)		/*!< 0x000003FF */
#define GP30_C7_TM_RATE                		GP30_C7_TM_RATE_Msk					/*!< TM_RATE[9:0]Temperature Measurement Rate */
#define GP30_C7_TM_RATE_0                		(0x00000001 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_RATE_1                		(0x00000002 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_RATE_2                		(0x00000004 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_RATE_3                		(0x00000008 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_RATE_4                		(0x00000010 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_RATE_5                		(0x00000020 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_RATE_6                		(0x00000040 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_RATE_7                		(0x00000080 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_RATE_8                		(0x00000100 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_RATE_9                		(0x00000200 << GP30_C7_TM_RATE_Pos)	
#define GP30_C7_TM_PAUSE_Pos               	(10U)
#define GP30_C7_TM_PAUSE_Msk               	(0x07UL << GP30_C7_TM_PAUSE_Pos)		/*!< 0x00001C00 */
#define GP30_C7_TM_PAUSE               		GP30_C7_TM_PAUSE_Msk					/*!< TM_PAUSE[12:10]Pause time between 2 temperature measurements */
#define GP30_C7_TM_PAUSE_0               		(0x00000001 << GP30_C7_TM_PAUSE_Pos)	
#define GP30_C7_TM_PAUSE_1               		(0x00000002 << GP30_C7_TM_PAUSE_Pos)	
#define GP30_C7_TM_PAUSE_2               		(0x00000004 << GP30_C7_TM_PAUSE_Pos)	
#define GP30_C7_TM_MODE_Pos                	(13U)
#define GP30_C7_TM_MODE_Msk                	(0x03UL << GP30_C7_TM_MODE_Pos)		/*!< 0x00006000 */
#define GP30_C7_TM_MODE                		GP30_C7_TM_MODE_Msk					/*!< TM_MODE[14:13]Temperature Measurement Mode */
#define GP30_C7_TM_MODE_0                		(0x00000001 << GP30_C7_TM_MODE_Pos)	
#define GP30_C7_TM_MODE_1                		(0x00000002 << GP30_C7_TM_MODE_Pos)	
#define GP30_C7_TM_WIRE_MODE_Pos           	(15U)
#define GP30_C7_TM_WIRE_MODE_Msk           	(0x1UL << GP30_C7_TM_WIRE_MODE_Pos)		/*!< 0x00008000 */
#define GP30_C7_TM_WIRE_MODE           		GP30_C7_TM_WIRE_MODE_Msk					/*!< Temperature Measurement Wire Mode */
#define GP30_C7_TM_PORT_NO_Pos             	(16U)
#define GP30_C7_TM_PORT_NO_Msk             	(0x1UL << GP30_C7_TM_PORT_NO_Pos)		/*!< 0x00010000 */
#define GP30_C7_TM_PORT_NO             		GP30_C7_TM_PORT_NO_Msk					/*!< Number of Ports */
#define GP30_C7_TM_PORT_MODE_Pos           	(17U)
#define GP30_C7_TM_PORT_MODE_Msk           	(0x1UL << GP30_C7_TM_PORT_MODE_Pos)		/*!< 0x00020000 */
#define GP30_C7_TM_PORT_MODE           		GP30_C7_TM_PORT_MODE_Msk					/*!< Port Mode */
#define GP30_C7_TM_PORT_ORDER_Pos          	(18U)
#define GP30_C7_TM_PORT_ORDER_Msk          	(0x03UL << GP30_C7_TM_PORT_ORDER_Pos)		/*!< 0x000C0000 */
#define GP30_C7_TM_PORT_ORDER          		GP30_C7_TM_PORT_ORDER_Msk					/*!< TM_PORT_ORDER[19:18]TM Measurement Port Order */
#define GP30_C7_TM_PORT_ORDER_0          		(0x00000001 << GP30_C7_TM_PORT_ORDER_Pos)	
#define GP30_C7_TM_PORT_ORDER_1          		(0x00000002 << GP30_C7_TM_PORT_ORDER_Pos)	
#define GP30_C7_TM_LD_DLY_Pos              	(20U)
#define GP30_C7_TM_LD_DLY_Msk              	(0x03UL << GP30_C7_TM_LD_DLY_Pos)		/*!< 0x00300000 */
#define GP30_C7_TM_LD_DLY              		GP30_C7_TM_LD_DLY_Msk					/*!< TM_LD_DLY[21:20]Temperature Measurement Load Delay */
#define GP30_C7_TM_LD_DLY_0              		(0x00000001 << GP30_C7_TM_LD_DLY_Pos)	
#define GP30_C7_TM_LD_DLY_1              		(0x00000002 << GP30_C7_TM_LD_DLY_Pos)	
#define GP30_C7_TM_DCH_SEL_Pos             	(22U)
#define GP30_C7_TM_DCH_SEL_Msk             	(0x1UL << GP30_C7_TM_DCH_SEL_Pos)		/*!< 0x00400000 */
#define GP30_C7_TM_DCH_SEL             		GP30_C7_TM_DCH_SEL_Msk					/*!< TM Discharge Select */
#define GP30_C7_TM_FAKE_NO_Pos             	(23U)
#define GP30_C7_TM_FAKE_NO_Msk             	(0x1UL << GP30_C7_TM_FAKE_NO_Pos)		/*!< 0x00800000 */
#define GP30_C7_TM_FAKE_NO             		GP30_C7_TM_FAKE_NO_Msk					/*!< Number of Fake measurements */
#define GP30_C7_NOT_USED_31_24_Pos         	(24U)
#define GP30_C7_NOT_USED_31_24_Msk         	(0xFFUL << GP30_C7_NOT_USED_31_24_Pos)		/*!< 0xFF000000 */
#define GP30_C7_NOT_USED_31_24         		GP30_C7_NOT_USED_31_24_Msk					/*!< NOT_USED_31_24[31:24]Not used */
#define GP30_C7_NOT_USED_31_24_0         		(0x00000001 << GP30_C7_NOT_USED_31_24_Pos)	
#define GP30_C7_NOT_USED_31_24_1         		(0x00000002 << GP30_C7_NOT_USED_31_24_Pos)	
#define GP30_C7_NOT_USED_31_24_2         		(0x00000004 << GP30_C7_NOT_USED_31_24_Pos)	
#define GP30_C7_NOT_USED_31_24_3         		(0x00000008 << GP30_C7_NOT_USED_31_24_Pos)	
#define GP30_C7_NOT_USED_31_24_4         		(0x00000010 << GP30_C7_NOT_USED_31_24_Pos)	
#define GP30_C7_NOT_USED_31_24_5         		(0x00000020 << GP30_C7_NOT_USED_31_24_Pos)	
#define GP30_C7_NOT_USED_31_24_6         		(0x00000040 << GP30_C7_NOT_USED_31_24_Pos)	
#define GP30_C7_NOT_USED_31_24_7         		(0x00000080 << GP30_C7_NOT_USED_31_24_Pos)	

/*******************  Bit definition for GP30_C8 register  ********************/
#define GP30_C8_USM_PAUSE_Pos              	(0U)
#define GP30_C8_USM_PAUSE_Msk              	(0x07UL << GP30_C8_USM_PAUSE_Pos)		/*!< 0x00000007 */
#define GP30_C8_USM_PAUSE              		GP30_C8_USM_PAUSE_Msk					/*!< USM_PAUSE[2:0]Pause time between 2 ultrasonic measurements */
#define GP30_C8_USM_PAUSE_0              		(0x00000001 << GP30_C8_USM_PAUSE_Pos)	
#define GP30_C8_USM_PAUSE_1              		(0x00000002 << GP30_C8_USM_PAUSE_Pos)	
#define GP30_C8_USM_PAUSE_2              		(0x00000004 << GP30_C8_USM_PAUSE_Pos)	
#define GP30_C8_NOT_USED_3_Pos             	(3U)
#define GP30_C8_NOT_USED_3_Msk             	(0x1UL << GP30_C8_NOT_USED_3_Pos)		/*!< 0x00000008 */
#define GP30_C8_NOT_USED_3             		GP30_C8_NOT_USED_3_Msk					/*!< Not used */
#define GP30_C8_USM_DIR_MODE_Pos           	(4U)
#define GP30_C8_USM_DIR_MODE_Msk           	(0x03UL << GP30_C8_USM_DIR_MODE_Pos)		/*!< 0x00000030 */
#define GP30_C8_USM_DIR_MODE           		GP30_C8_USM_DIR_MODE_Msk					/*!< USM_DIR_MODE[5:4]Ultrasonic Measurement Direction Mode */
#define GP30_C8_USM_DIR_MODE_0           		(0x00000001 << GP30_C8_USM_DIR_MODE_Pos)	
#define GP30_C8_USM_DIR_MODE_1           		(0x00000002 << GP30_C8_USM_DIR_MODE_Pos)	
#define GP30_C8_HIDDEN_7_6_Pos             	(6U)
#define GP30_C8_HIDDEN_7_6_Msk             	(0x03UL << GP30_C8_HIDDEN_7_6_Pos)		/*!< 0x000000C0 */
#define GP30_C8_HIDDEN_7_6             		GP30_C8_HIDDEN_7_6_Msk					/*!< HIDDEN_7_6[7:6]Mandatory setting: b00 */
#define GP30_C8_HIDDEN_7_6_0             		(0x00000001 << GP30_C8_HIDDEN_7_6_Pos)	
#define GP30_C8_HIDDEN_7_6_1             		(0x00000002 << GP30_C8_HIDDEN_7_6_Pos)	
#define GP30_C8_USM_NOISE_MASK_WIN_Pos     	(8U)
#define GP30_C8_USM_NOISE_MASK_WIN_Msk     	(0xFFUL << GP30_C8_USM_NOISE_MASK_WIN_Pos)		/*!< 0x0000FF00 */
#define GP30_C8_USM_NOISE_MASK_WIN     		GP30_C8_USM_NOISE_MASK_WIN_Msk					/*!< USM_NOISE_MASK_WIN[15:8]Noise Mask Window */
#define GP30_C8_USM_NOISE_MASK_WIN_0     		(0x00000001 << GP30_C8_USM_NOISE_MASK_WIN_Pos)	
#define GP30_C8_USM_NOISE_MASK_WIN_1     		(0x00000002 << GP30_C8_USM_NOISE_MASK_WIN_Pos)	
#define GP30_C8_USM_NOISE_MASK_WIN_2     		(0x00000004 << GP30_C8_USM_NOISE_MASK_WIN_Pos)	
#define GP30_C8_USM_NOISE_MASK_WIN_3     		(0x00000008 << GP30_C8_USM_NOISE_MASK_WIN_Pos)	
#define GP30_C8_USM_NOISE_MASK_WIN_4     		(0x00000010 << GP30_C8_USM_NOISE_MASK_WIN_Pos)	
#define GP30_C8_USM_NOISE_MASK_WIN_5     		(0x00000020 << GP30_C8_USM_NOISE_MASK_WIN_Pos)	
#define GP30_C8_USM_NOISE_MASK_WIN_6     		(0x00000040 << GP30_C8_USM_NOISE_MASK_WIN_Pos)	
#define GP30_C8_USM_NOISE_MASK_WIN_7     		(0x00000080 << GP30_C8_USM_NOISE_MASK_WIN_Pos)	
#define GP30_C8_USM_TO_Pos                 	(16U)
#define GP30_C8_USM_TO_Msk                 	(0x03UL << GP30_C8_USM_TO_Pos)		/*!< 0x00030000 */
#define GP30_C8_USM_TO                 		GP30_C8_USM_TO_Msk					/*!< USM_TO[17:16]Timeout */
#define GP30_C8_USM_TO_0                 		(0x00000001 << GP30_C8_USM_TO_Pos)	
#define GP30_C8_USM_TO_1                 		(0x00000002 << GP30_C8_USM_TO_Pos)	
#define GP30_C8_NOT_USED_31_18_Pos         	(18U)
#define GP30_C8_NOT_USED_31_18_Msk         	(0x3FFFUL << GP30_C8_NOT_USED_31_18_Pos)		/*!< 0xFFFC0000 */
#define GP30_C8_NOT_USED_31_18         		GP30_C8_NOT_USED_31_18_Msk					/*!< NOT_USED_31_18[31:18]Not used */
#define GP30_C8_NOT_USED_31_18_0         		(0x00000001 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_1         		(0x00000002 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_2         		(0x00000004 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_3         		(0x00000008 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_4         		(0x00000010 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_5         		(0x00000020 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_6         		(0x00000040 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_7         		(0x00000080 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_8         		(0x00000100 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_9         		(0x00000200 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_10         		(0x00000400 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_11         		(0x00000800 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_12         		(0x00001000 << GP30_C8_NOT_USED_31_18_Pos)	
#define GP30_C8_NOT_USED_31_18_13         		(0x00002000 << GP30_C8_NOT_USED_31_18_Pos)	

/*******************  Bit definition for GP30_C9 register  ********************/
#define GP30_C9_FPG_CLK_DIV_Pos            	(0U)
#define GP30_C9_FPG_CLK_DIV_Msk            	(0x07FUL << GP30_C9_FPG_CLK_DIV_Pos)		/*!< 0x0000007F */
#define GP30_C9_FPG_CLK_DIV            		GP30_C9_FPG_CLK_DIV_Msk					/*!< FPG_CLK_DIV[6:0]Fire pulse generator clock divider, Frequency = High Speed Clock divided by (FPG_CLK_DIV + 1) */
#define GP30_C9_FPG_CLK_DIV_0            		(0x00000001 << GP30_C9_FPG_CLK_DIV_Pos)	
#define GP30_C9_FPG_CLK_DIV_1            		(0x00000002 << GP30_C9_FPG_CLK_DIV_Pos)	
#define GP30_C9_FPG_CLK_DIV_2            		(0x00000004 << GP30_C9_FPG_CLK_DIV_Pos)	
#define GP30_C9_FPG_CLK_DIV_3            		(0x00000008 << GP30_C9_FPG_CLK_DIV_Pos)	
#define GP30_C9_FPG_CLK_DIV_4            		(0x00000010 << GP30_C9_FPG_CLK_DIV_Pos)	
#define GP30_C9_FPG_CLK_DIV_5            		(0x00000020 << GP30_C9_FPG_CLK_DIV_Pos)	
#define GP30_C9_FPG_CLK_DIV_6            		(0x00000040 << GP30_C9_FPG_CLK_DIV_Pos)	
#define GP30_C9_FPG_FP_NO_Pos              	(7U)
#define GP30_C9_FPG_FP_NO_Msk              	(0x07FUL << GP30_C9_FPG_FP_NO_Pos)		/*!< 0x00003F80 */
#define GP30_C9_FPG_FP_NO              		GP30_C9_FPG_FP_NO_Msk					/*!< FPG_FP_NO[13:7]Number of fire pulses */
#define GP30_C9_FPG_FP_NO_0              		(0x00000001 << GP30_C9_FPG_FP_NO_Pos)	
#define GP30_C9_FPG_FP_NO_1              		(0x00000002 << GP30_C9_FPG_FP_NO_Pos)	
#define GP30_C9_FPG_FP_NO_2              		(0x00000004 << GP30_C9_FPG_FP_NO_Pos)	
#define GP30_C9_FPG_FP_NO_3              		(0x00000008 << GP30_C9_FPG_FP_NO_Pos)	
#define GP30_C9_FPG_FP_NO_4              		(0x00000010 << GP30_C9_FPG_FP_NO_Pos)	
#define GP30_C9_FPG_FP_NO_5              		(0x00000020 << GP30_C9_FPG_FP_NO_Pos)	
#define GP30_C9_FPG_FP_NO_6              		(0x00000040 << GP30_C9_FPG_FP_NO_Pos)	
#define GP30_C9_ZCD_FHL_POL_Pos            	(14U)
#define GP30_C9_ZCD_FHL_POL_Msk            	(0x1UL << GP30_C9_ZCD_FHL_POL_Pos)		/*!< 0x00004000 */
#define GP30_C9_ZCD_FHL_POL            		GP30_C9_ZCD_FHL_POL_Msk					/*!< First Hit Level polarity */
#define GP30_C9_ZCC_RATE_Pos               	(15U)
#define GP30_C9_ZCC_RATE_Msk               	(0x07UL << GP30_C9_ZCC_RATE_Pos)		/*!< 0x00038000 */
#define GP30_C9_ZCC_RATE               		GP30_C9_ZCC_RATE_Msk					/*!< ZCC_RATE[17:15]Zero Cross Calibration Rate */
#define GP30_C9_ZCC_RATE_0               		(0x00000001 << GP30_C9_ZCC_RATE_Pos)	
#define GP30_C9_ZCC_RATE_1               		(0x00000002 << GP30_C9_ZCC_RATE_Pos)	
#define GP30_C9_ZCC_RATE_2               		(0x00000004 << GP30_C9_ZCC_RATE_Pos)	
#define GP30_C9_TI_PATH_SEL_Pos            	(18U)
#define GP30_C9_TI_PATH_SEL_Msk            	(0x03UL << GP30_C9_TI_PATH_SEL_Pos)		/*!< 0x000C0000 */
#define GP30_C9_TI_PATH_SEL            		GP30_C9_TI_PATH_SEL_Msk					/*!< TI_PATH_SEL[19:18]Transducer interface path select */
#define GP30_C9_TI_PATH_SEL_0            		(0x00000001 << GP30_C9_TI_PATH_SEL_Pos)	
#define GP30_C9_TI_PATH_SEL_1            		(0x00000002 << GP30_C9_TI_PATH_SEL_Pos)	
#define GP30_C9_TI_ERA_EN_Pos              	(20U)
#define GP30_C9_TI_ERA_EN_Msk              	(0x1UL << GP30_C9_TI_ERA_EN_Pos)		/*!< 0x00100000 */
#define GP30_C9_TI_ERA_EN              		GP30_C9_TI_ERA_EN_Msk					/*!< External receive amplifier */
#define GP30_C9_TI_PATH_EN_Pos             	(21U)
#define GP30_C9_TI_PATH_EN_Msk             	(0x1FUL << GP30_C9_TI_PATH_EN_Pos)		/*!< 0x03E00000 */
#define GP30_C9_TI_PATH_EN             		GP30_C9_TI_PATH_EN_Msk					/*!< TI_PATH_EN[25:21]Transducer Interface Path Enable */
#define GP30_C9_TI_PATH_EN_0             		(0x00000001 << GP30_C9_TI_PATH_EN_Pos)	
#define GP30_C9_TI_PATH_EN_1             		(0x00000002 << GP30_C9_TI_PATH_EN_Pos)	
#define GP30_C9_TI_PATH_EN_2             		(0x00000004 << GP30_C9_TI_PATH_EN_Pos)	
#define GP30_C9_TI_PATH_EN_3             		(0x00000008 << GP30_C9_TI_PATH_EN_Pos)	
#define GP30_C9_TI_PATH_EN_4             		(0x00000010 << GP30_C9_TI_PATH_EN_Pos)	
#define GP30_C9_TI_GM_MODE_Pos             	(26U)
#define GP30_C9_TI_GM_MODE_Msk             	(0x1UL << GP30_C9_TI_GM_MODE_Pos)		/*!< 0x04000000 */
#define GP30_C9_TI_GM_MODE             		GP30_C9_TI_GM_MODE_Msk					/*!< Gas Meter Mode */
#define GP30_C9_NOT_USED_31_27_Pos         	(27U)
#define GP30_C9_NOT_USED_31_27_Msk         	(0x1FUL << GP30_C9_NOT_USED_31_27_Pos)		/*!< 0xF8000000 */
#define GP30_C9_NOT_USED_31_27         		GP30_C9_NOT_USED_31_27_Msk					/*!< NOT_USED_31_27[31:27]Not used */
#define GP30_C9_NOT_USED_31_27_0         		(0x00000001 << GP30_C9_NOT_USED_31_27_Pos)	
#define GP30_C9_NOT_USED_31_27_1         		(0x00000002 << GP30_C9_NOT_USED_31_27_Pos)	
#define GP30_C9_NOT_USED_31_27_2         		(0x00000004 << GP30_C9_NOT_USED_31_27_Pos)	
#define GP30_C9_NOT_USED_31_27_3         		(0x00000008 << GP30_C9_NOT_USED_31_27_Pos)	
#define GP30_C9_NOT_USED_31_27_4         		(0x00000010 << GP30_C9_NOT_USED_31_27_Pos)	

/*******************  Bit definition for GP30_CA register  ********************/
#define GP30_CA_TOF_START_HIT_MODE_Pos     	(0U)
#define GP30_CA_TOF_START_HIT_MODE_Msk     	(0x1UL << GP30_CA_TOF_START_HIT_MODE_Pos)		/*!< 0x00000001 */
#define GP30_CA_TOF_START_HIT_MODE     		GP30_CA_TOF_START_HIT_MODE_Msk					/*!< Selects mode for TOF start hit */
#define GP30_CA_TOF_START_HIT_NO_Pos       	(1U)
#define GP30_CA_TOF_START_HIT_NO_Msk       	(0x1FUL << GP30_CA_TOF_START_HIT_NO_Pos)		/*!< 0x0000003E */
#define GP30_CA_TOF_START_HIT_NO       		GP30_CA_TOF_START_HIT_NO_Msk					/*!< TOF_START_HIT_NO[5:1]Defines number of detected hits after first hit */
#define GP30_CA_TOF_START_HIT_NO_0       		(0x00000001 << GP30_CA_TOF_START_HIT_NO_Pos)	
#define GP30_CA_TOF_START_HIT_NO_1       		(0x00000002 << GP30_CA_TOF_START_HIT_NO_Pos)	
#define GP30_CA_TOF_START_HIT_NO_2       		(0x00000004 << GP30_CA_TOF_START_HIT_NO_Pos)	
#define GP30_CA_TOF_START_HIT_NO_3       		(0x00000008 << GP30_CA_TOF_START_HIT_NO_Pos)	
#define GP30_CA_TOF_START_HIT_NO_4       		(0x00000010 << GP30_CA_TOF_START_HIT_NO_Pos)	
#define GP30_CA_TOF_HIT_IGN_Pos            	(6U)
#define GP30_CA_TOF_HIT_IGN_Msk            	(0x03UL << GP30_CA_TOF_HIT_IGN_Pos)		/*!< 0x000000C0 */
#define GP30_CA_TOF_HIT_IGN            		GP30_CA_TOF_HIT_IGN_Msk					/*!< TOF_HIT_IGN[7:6]Number of hits ignored between two TOF hits taken for TDC measurement */
#define GP30_CA_TOF_HIT_IGN_0            		(0x00000001 << GP30_CA_TOF_HIT_IGN_Pos)	
#define GP30_CA_TOF_HIT_IGN_1            		(0x00000002 << GP30_CA_TOF_HIT_IGN_Pos)	
#define GP30_CA_TOF_HIT_NO_Pos             	(8U)
#define GP30_CA_TOF_HIT_NO_Msk             	(0x1FUL << GP30_CA_TOF_HIT_NO_Pos)		/*!< 0x00001F00 */
#define GP30_CA_TOF_HIT_NO             		GP30_CA_TOF_HIT_NO_Msk					/*!< TOF_HIT_NO[12:8]Number of TOF hits taken for TDC measurement */
#define GP30_CA_TOF_HIT_NO_0             		(0x00000001 << GP30_CA_TOF_HIT_NO_Pos)	
#define GP30_CA_TOF_HIT_NO_1             		(0x00000002 << GP30_CA_TOF_HIT_NO_Pos)	
#define GP30_CA_TOF_HIT_NO_2             		(0x00000004 << GP30_CA_TOF_HIT_NO_Pos)	
#define GP30_CA_TOF_HIT_NO_3             		(0x00000008 << GP30_CA_TOF_HIT_NO_Pos)	
#define GP30_CA_TOF_HIT_NO_4             		(0x00000010 << GP30_CA_TOF_HIT_NO_Pos)	
#define GP30_CA_TOF_HITS_TO_FDB_Pos        	(13U)
#define GP30_CA_TOF_HITS_TO_FDB_Msk        	(0x1UL << GP30_CA_TOF_HITS_TO_FDB_Pos)		/*!< 0x00002000 */
#define GP30_CA_TOF_HITS_TO_FDB        		GP30_CA_TOF_HITS_TO_FDB_Msk					/*!< TOF Hits stored to frontend data buffer */
#define GP30_CA_TOF_EDGE_MODE_Pos          	(14U)
#define GP30_CA_TOF_EDGE_MODE_Msk          	(0x03UL << GP30_CA_TOF_EDGE_MODE_Pos)		/*!< 0x0000C000 */
#define GP30_CA_TOF_EDGE_MODE          		GP30_CA_TOF_EDGE_MODE_Msk					/*!< TOF_EDGE_MODE[15:14]Time of Flight, Edge Mode */
#define GP30_CA_TOF_EDGE_MODE_0          		(0x00000001 << GP30_CA_TOF_EDGE_MODE_Pos)	
#define GP30_CA_TOF_EDGE_MODE_1          		(0x00000002 << GP30_CA_TOF_EDGE_MODE_Pos)	
#define GP30_CA_NOT_USED_31_16_Pos         	(16U)
#define GP30_CA_NOT_USED_31_16_Msk         	(0xFFFFUL << GP30_CA_NOT_USED_31_16_Pos)		/*!< 0xFFFF0000 */
#define GP30_CA_NOT_USED_31_16         		GP30_CA_NOT_USED_31_16_Msk					/*!< NOT_USED_31_16[31:16]Not used */
#define GP30_CA_NOT_USED_31_16_0         		(0x00000001 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_1         		(0x00000002 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_2         		(0x00000004 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_3         		(0x00000008 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_4         		(0x00000010 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_5         		(0x00000020 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_6         		(0x00000040 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_7         		(0x00000080 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_8         		(0x00000100 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_9         		(0x00000200 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_10         		(0x00000400 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_11         		(0x00000800 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_12         		(0x00001000 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_13         		(0x00002000 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_14         		(0x00004000 << GP30_CA_NOT_USED_31_16_Pos)	
#define GP30_CA_NOT_USED_31_16_15         		(0x00008000 << GP30_CA_NOT_USED_31_16_Pos)	

/*******************  Bit definition for GP30_CB register  ********************/
#define GP30_CB_AM_RATE_Pos                	(0U)
#define GP30_CB_AM_RATE_Msk                	(0x07UL << GP30_CB_AM_RATE_Pos)		/*!< 0x00000007 */
#define GP30_CB_AM_RATE                		GP30_CB_AM_RATE_Msk					/*!< AM_RATE[2:0]Amplitude measurement Rate */
#define GP30_CB_AM_RATE_0                		(0x00000001 << GP30_CB_AM_RATE_Pos)	
#define GP30_CB_AM_RATE_1                		(0x00000002 << GP30_CB_AM_RATE_Pos)	
#define GP30_CB_AM_RATE_2                		(0x00000004 << GP30_CB_AM_RATE_Pos)	
#define GP30_CB_HIDDEN_3_Pos               	(3U)
#define GP30_CB_HIDDEN_3_Msk               	(0x1UL << GP30_CB_HIDDEN_3_Pos)		/*!< 0x00000008 */
#define GP30_CB_HIDDEN_3               		GP30_CB_HIDDEN_3_Msk					/*!< Mandatory setting: b0 */
#define GP30_CB_AM_PD_END_Pos              	(4U)
#define GP30_CB_AM_PD_END_Msk              	(0x1FUL << GP30_CB_AM_PD_END_Pos)		/*!< 0x000001F0 */
#define GP30_CB_AM_PD_END              		GP30_CB_AM_PD_END_Msk					/*!< AM_PD_END[8:4]Amplitude Measurement, Peak Detection End */
#define GP30_CB_AM_PD_END_0              		(0x00000001 << GP30_CB_AM_PD_END_Pos)	
#define GP30_CB_AM_PD_END_1              		(0x00000002 << GP30_CB_AM_PD_END_Pos)	
#define GP30_CB_AM_PD_END_2              		(0x00000004 << GP30_CB_AM_PD_END_Pos)	
#define GP30_CB_AM_PD_END_3              		(0x00000008 << GP30_CB_AM_PD_END_Pos)	
#define GP30_CB_AM_PD_END_4              		(0x00000010 << GP30_CB_AM_PD_END_Pos)	
#define GP30_CB_HIDDEN_11_9_Pos            	(9U)
#define GP30_CB_HIDDEN_11_9_Msk            	(0x07UL << GP30_CB_HIDDEN_11_9_Pos)		/*!< 0x00000E00 */
#define GP30_CB_HIDDEN_11_9            		GP30_CB_HIDDEN_11_9_Msk					/*!< HIDDEN_11_9[11:9]Mandatory setting: b111 */
#define GP30_CB_HIDDEN_11_9_0            		(0x00000001 << GP30_CB_HIDDEN_11_9_Pos)	
#define GP30_CB_HIDDEN_11_9_1            		(0x00000002 << GP30_CB_HIDDEN_11_9_Pos)	
#define GP30_CB_HIDDEN_11_9_2            		(0x00000004 << GP30_CB_HIDDEN_11_9_Pos)	
#define GP30_CB_AMC_RATE_Pos               	(12U)
#define GP30_CB_AMC_RATE_Msk               	(0x07UL << GP30_CB_AMC_RATE_Pos)		/*!< 0x00007000 */
#define GP30_CB_AMC_RATE               		GP30_CB_AMC_RATE_Msk					/*!< AMC_RATE[14:12]Amplitude measurement calibration rate */
#define GP30_CB_AMC_RATE_0               		(0x00000001 << GP30_CB_AMC_RATE_Pos)	
#define GP30_CB_AMC_RATE_1               		(0x00000002 << GP30_CB_AMC_RATE_Pos)	
#define GP30_CB_AMC_RATE_2               		(0x00000004 << GP30_CB_AMC_RATE_Pos)	
#define GP30_CB_PWD_EN_Pos                 	(15U)
#define GP30_CB_PWD_EN_Msk                 	(0x1UL << GP30_CB_PWD_EN_Pos)		/*!< 0x00008000 */
#define GP30_CB_PWD_EN                 		GP30_CB_PWD_EN_Msk					/*!< Enables pulse width detection */
#define GP30_CB_NOT_USED_31_16_Pos         	(16U)
#define GP30_CB_NOT_USED_31_16_Msk         	(0xFFFFUL << GP30_CB_NOT_USED_31_16_Pos)		/*!< 0xFFFF0000 */
#define GP30_CB_NOT_USED_31_16         		GP30_CB_NOT_USED_31_16_Msk					/*!< NOT_USED_31_16[31:16]Not used */
#define GP30_CB_NOT_USED_31_16_0         		(0x00000001 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_1         		(0x00000002 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_2         		(0x00000004 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_3         		(0x00000008 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_4         		(0x00000010 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_5         		(0x00000020 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_6         		(0x00000040 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_7         		(0x00000080 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_8         		(0x00000100 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_9         		(0x00000200 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_10         		(0x00000400 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_11         		(0x00000800 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_12         		(0x00001000 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_13         		(0x00002000 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_14         		(0x00004000 << GP30_CB_NOT_USED_31_16_Pos)	
#define GP30_CB_NOT_USED_31_16_15         		(0x00008000 << GP30_CB_NOT_USED_31_16_Pos)	

/*******************  Bit definition for GP30_CC register  ********************/
#define GP30_CC_CR_TRIM1_Pos               	(0U)
#define GP30_CC_CR_TRIM1_Msk               	(0xFFFFFFFFUL << GP30_CC_CR_TRIM1_Pos)		/*!< 0xFFFFFFFF */
#define GP30_CC_CR_TRIM1               		GP30_CC_CR_TRIM1_Msk					/*!< CR_TRIM1[31:0]Default settung: 0x84A0C47C */
#define GP30_CC_CR_TRIM1_0               		(0x00000001 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_1               		(0x00000002 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_2               		(0x00000004 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_3               		(0x00000008 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_4               		(0x00000010 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_5               		(0x00000020 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_6               		(0x00000040 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_7               		(0x00000080 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_8               		(0x00000100 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_9               		(0x00000200 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_10               		(0x00000400 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_11               		(0x00000800 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_12               		(0x00001000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_13               		(0x00002000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_14               		(0x00004000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_15               		(0x00008000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_16               		(0x00010000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_17               		(0x00020000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_18               		(0x00040000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_19               		(0x00080000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_20               		(0x00100000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_21               		(0x00200000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_22               		(0x00400000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_23               		(0x00800000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_24               		(0x01000000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_25               		(0x02000000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_26               		(0x04000000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_27               		(0x08000000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_28               		(0x10000000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_29               		(0x20000000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_30               		(0x40000000 << GP30_CC_CR_TRIM1_Pos)	
#define GP30_CC_CR_TRIM1_31               		(0x80000000 << GP30_CC_CR_TRIM1_Pos)	

/*******************  Bit definition for GP30_CD register  ********************/
#define GP30_CD_CR_TRIM2_Pos               	(0U)
#define GP30_CD_CR_TRIM2_Msk               	(0xFFFFFFFFUL << GP30_CD_CR_TRIM2_Pos)		/*!< 0xFFFFFFFF */
#define GP30_CD_CR_TRIM2               		GP30_CD_CR_TRIM2_Msk					/*!< CR_TRIM2[31:0]Default settung: 0x401725CF */
#define GP30_CD_CR_TRIM2_0               		(0x00000001 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_1               		(0x00000002 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_2               		(0x00000004 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_3               		(0x00000008 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_4               		(0x00000010 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_5               		(0x00000020 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_6               		(0x00000040 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_7               		(0x00000080 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_8               		(0x00000100 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_9               		(0x00000200 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_10               		(0x00000400 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_11               		(0x00000800 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_12               		(0x00001000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_13               		(0x00002000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_14               		(0x00004000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_15               		(0x00008000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_16               		(0x00010000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_17               		(0x00020000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_18               		(0x00040000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_19               		(0x00080000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_20               		(0x00100000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_21               		(0x00200000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_22               		(0x00400000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_23               		(0x00800000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_24               		(0x01000000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_25               		(0x02000000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_26               		(0x04000000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_27               		(0x08000000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_28               		(0x10000000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_29               		(0x20000000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_30               		(0x40000000 << GP30_CD_CR_TRIM2_Pos)	
#define GP30_CD_CR_TRIM2_31               		(0x80000000 << GP30_CD_CR_TRIM2_Pos)	

/*******************  Bit definition for GP30_CE register  ********************/
#define GP30_CE_CR_TRIM3_Pos               	(0U)
#define GP30_CE_CR_TRIM3_Msk               	(0xFFFFFFFFUL << GP30_CE_CR_TRIM3_Pos)		/*!< 0xFFFFFFFF */
#define GP30_CE_CR_TRIM3               		GP30_CE_CR_TRIM3_Msk					/*!< CR_TRIM3[31:0]Default settung: 0x00270808 */
#define GP30_CE_CR_TRIM3_0               		(0x00000001 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_1               		(0x00000002 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_2               		(0x00000004 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_3               		(0x00000008 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_4               		(0x00000010 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_5               		(0x00000020 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_6               		(0x00000040 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_7               		(0x00000080 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_8               		(0x00000100 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_9               		(0x00000200 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_10               		(0x00000400 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_11               		(0x00000800 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_12               		(0x00001000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_13               		(0x00002000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_14               		(0x00004000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_15               		(0x00008000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_16               		(0x00010000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_17               		(0x00020000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_18               		(0x00040000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_19               		(0x00080000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_20               		(0x00100000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_21               		(0x00200000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_22               		(0x00400000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_23               		(0x00800000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_24               		(0x01000000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_25               		(0x02000000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_26               		(0x04000000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_27               		(0x08000000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_28               		(0x10000000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_29               		(0x20000000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_30               		(0x40000000 << GP30_CE_CR_TRIM3_Pos)	
#define GP30_CE_CR_TRIM3_31               		(0x80000000 << GP30_CE_CR_TRIM3_Pos)	

/*******************  Bit definition for GP30_D0 register  ********************/
#define GP30_D0_TOF_RATE_Pos               	(0U)
#define GP30_D0_TOF_RATE_Msk               	(0x3FUL << GP30_D0_TOF_RATE_Pos)		/*!< 0x0000003F */
#define GP30_D0_TOF_RATE               		GP30_D0_TOF_RATE_Msk					/*!< TOF_RATE[5:0]TOF Rate */
#define GP30_D0_TOF_RATE_0               		(0x00000001 << GP30_D0_TOF_RATE_Pos)	
#define GP30_D0_TOF_RATE_1               		(0x00000002 << GP30_D0_TOF_RATE_Pos)	
#define GP30_D0_TOF_RATE_2               		(0x00000004 << GP30_D0_TOF_RATE_Pos)	
#define GP30_D0_TOF_RATE_3               		(0x00000008 << GP30_D0_TOF_RATE_Pos)	
#define GP30_D0_TOF_RATE_4               		(0x00000010 << GP30_D0_TOF_RATE_Pos)	
#define GP30_D0_TOF_RATE_5               		(0x00000020 << GP30_D0_TOF_RATE_Pos)	
#define GP30_D0_NOT_USED_31_6_Pos          	(6U)
#define GP30_D0_NOT_USED_31_6_Msk          	(0x03FFFFFFUL << GP30_D0_NOT_USED_31_6_Pos)		/*!< 0xFFFFFFC0 */
#define GP30_D0_NOT_USED_31_6          		GP30_D0_NOT_USED_31_6_Msk					/*!< NOT_USED_31_6[31:6]Not used */
#define GP30_D0_NOT_USED_31_6_0          		(0x00000001 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_1          		(0x00000002 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_2          		(0x00000004 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_3          		(0x00000008 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_4          		(0x00000010 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_5          		(0x00000020 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_6          		(0x00000040 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_7          		(0x00000080 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_8          		(0x00000100 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_9          		(0x00000200 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_10          		(0x00000400 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_11          		(0x00000800 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_12          		(0x00001000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_13          		(0x00002000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_14          		(0x00004000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_15          		(0x00008000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_16          		(0x00010000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_17          		(0x00020000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_18          		(0x00040000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_19          		(0x00080000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_20          		(0x00100000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_21          		(0x00200000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_22          		(0x00400000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_23          		(0x00800000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_24          		(0x01000000 << GP30_D0_NOT_USED_31_6_Pos)	
#define GP30_D0_NOT_USED_31_6_25          		(0x02000000 << GP30_D0_NOT_USED_31_6_Pos)	

/*******************  Bit definition for GP30_DA register  ********************/
#define GP30_DA_ZCD_FHL_U_Pos              	(0U)
#define GP30_DA_ZCD_FHL_U_Msk              	(0xFFUL << GP30_DA_ZCD_FHL_U_Pos)		/*!< 0x000000FF */
#define GP30_DA_ZCD_FHL_U              		GP30_DA_ZCD_FHL_U_Msk					/*!< ZCD_FHL_U[7:0]First Hit Level Up */
#define GP30_DA_ZCD_FHL_U_0              		(0x00000001 << GP30_DA_ZCD_FHL_U_Pos)	
#define GP30_DA_ZCD_FHL_U_1              		(0x00000002 << GP30_DA_ZCD_FHL_U_Pos)	
#define GP30_DA_ZCD_FHL_U_2              		(0x00000004 << GP30_DA_ZCD_FHL_U_Pos)	
#define GP30_DA_ZCD_FHL_U_3              		(0x00000008 << GP30_DA_ZCD_FHL_U_Pos)	
#define GP30_DA_ZCD_FHL_U_4              		(0x00000010 << GP30_DA_ZCD_FHL_U_Pos)	
#define GP30_DA_ZCD_FHL_U_5              		(0x00000020 << GP30_DA_ZCD_FHL_U_Pos)	
#define GP30_DA_ZCD_FHL_U_6              		(0x00000040 << GP30_DA_ZCD_FHL_U_Pos)	
#define GP30_DA_ZCD_FHL_U_7              		(0x00000080 << GP30_DA_ZCD_FHL_U_Pos)	
#define GP30_DA_NOT_USED_31_8_Pos          	(8U)
#define GP30_DA_NOT_USED_31_8_Msk          	(0xFFFFFFUL << GP30_DA_NOT_USED_31_8_Pos)		/*!< 0xFFFFFF00 */
#define GP30_DA_NOT_USED_31_8          		GP30_DA_NOT_USED_31_8_Msk					/*!< NOT_USED_31_8[31:8]Not used */
#define GP30_DA_NOT_USED_31_8_0          		(0x00000001 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_1          		(0x00000002 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_2          		(0x00000004 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_3          		(0x00000008 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_4          		(0x00000010 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_5          		(0x00000020 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_6          		(0x00000040 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_7          		(0x00000080 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_8          		(0x00000100 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_9          		(0x00000200 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_10          		(0x00000400 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_11          		(0x00000800 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_12          		(0x00001000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_13          		(0x00002000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_14          		(0x00004000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_15          		(0x00008000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_16          		(0x00010000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_17          		(0x00020000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_18          		(0x00040000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_19          		(0x00080000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_20          		(0x00100000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_21          		(0x00200000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_22          		(0x00400000 << GP30_DA_NOT_USED_31_8_Pos)	
#define GP30_DA_NOT_USED_31_8_23          		(0x00800000 << GP30_DA_NOT_USED_31_8_Pos)	

/*******************  Bit definition for GP30_DB register  ********************/
#define GP30_DB_ZCD_FHL_D_Pos              	(0U)
#define GP30_DB_ZCD_FHL_D_Msk              	(0xFFUL << GP30_DB_ZCD_FHL_D_Pos)		/*!< 0x000000FF */
#define GP30_DB_ZCD_FHL_D              		GP30_DB_ZCD_FHL_D_Msk					/*!< ZCD_FHL_D[7:0]First Hit Level Down */
#define GP30_DB_ZCD_FHL_D_0              		(0x00000001 << GP30_DB_ZCD_FHL_D_Pos)	
#define GP30_DB_ZCD_FHL_D_1              		(0x00000002 << GP30_DB_ZCD_FHL_D_Pos)	
#define GP30_DB_ZCD_FHL_D_2              		(0x00000004 << GP30_DB_ZCD_FHL_D_Pos)	
#define GP30_DB_ZCD_FHL_D_3              		(0x00000008 << GP30_DB_ZCD_FHL_D_Pos)	
#define GP30_DB_ZCD_FHL_D_4              		(0x00000010 << GP30_DB_ZCD_FHL_D_Pos)	
#define GP30_DB_ZCD_FHL_D_5              		(0x00000020 << GP30_DB_ZCD_FHL_D_Pos)	
#define GP30_DB_ZCD_FHL_D_6              		(0x00000040 << GP30_DB_ZCD_FHL_D_Pos)	
#define GP30_DB_ZCD_FHL_D_7              		(0x00000080 << GP30_DB_ZCD_FHL_D_Pos)	
#define GP30_DB_NOT_USED_31_8_Pos          	(8U)
#define GP30_DB_NOT_USED_31_8_Msk          	(0xFFFFFFUL << GP30_DB_NOT_USED_31_8_Pos)		/*!< 0xFFFFFF00 */
#define GP30_DB_NOT_USED_31_8          		GP30_DB_NOT_USED_31_8_Msk					/*!< NOT_USED_31_8[31:8]Not used */
#define GP30_DB_NOT_USED_31_8_0          		(0x00000001 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_1          		(0x00000002 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_2          		(0x00000004 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_3          		(0x00000008 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_4          		(0x00000010 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_5          		(0x00000020 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_6          		(0x00000040 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_7          		(0x00000080 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_8          		(0x00000100 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_9          		(0x00000200 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_10          		(0x00000400 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_11          		(0x00000800 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_12          		(0x00001000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_13          		(0x00002000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_14          		(0x00004000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_15          		(0x00008000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_16          		(0x00010000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_17          		(0x00020000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_18          		(0x00040000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_19          		(0x00080000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_20          		(0x00100000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_21          		(0x00200000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_22          		(0x00400000 << GP30_DB_NOT_USED_31_8_Pos)	
#define GP30_DB_NOT_USED_31_8_23          		(0x00800000 << GP30_DB_NOT_USED_31_8_Pos)	

/*******************  Bit definition for GP30_D8 register  ********************/
#define GP30_D8_TOF_START_HIT_DLY_Pos      	(0U)
#define GP30_D8_TOF_START_HIT_DLY_Msk      	(0x07FFFFUL << GP30_D8_TOF_START_HIT_DLY_Pos)		/*!< 0x0007FFFF */
#define GP30_D8_TOF_START_HIT_DLY      		GP30_D8_TOF_START_HIT_DLY_Msk					/*!< TOF_START_HIT_DLY[18:0]Hit Release Delay */
#define GP30_D8_TOF_START_HIT_DLY_0      		(0x00000001 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_1      		(0x00000002 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_2      		(0x00000004 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_3      		(0x00000008 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_4      		(0x00000010 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_5      		(0x00000020 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_6      		(0x00000040 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_7      		(0x00000080 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_8      		(0x00000100 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_9      		(0x00000200 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_10      		(0x00000400 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_11      		(0x00000800 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_12      		(0x00001000 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_13      		(0x00002000 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_14      		(0x00004000 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_15      		(0x00008000 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_16      		(0x00010000 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_17      		(0x00020000 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_TOF_START_HIT_DLY_18      		(0x00040000 << GP30_D8_TOF_START_HIT_DLY_Pos)	
#define GP30_D8_NOT_USED_31_19_Pos         	(19U)
#define GP30_D8_NOT_USED_31_19_Msk         	(0x1FFFUL << GP30_D8_NOT_USED_31_19_Pos)		/*!< 0xFFF80000 */
#define GP30_D8_NOT_USED_31_19         		GP30_D8_NOT_USED_31_19_Msk					/*!< NOT_USED_31_19[31:19]Not used */
#define GP30_D8_NOT_USED_31_19_0         		(0x00000001 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_1         		(0x00000002 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_2         		(0x00000004 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_3         		(0x00000008 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_4         		(0x00000010 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_5         		(0x00000020 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_6         		(0x00000040 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_7         		(0x00000080 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_8         		(0x00000100 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_9         		(0x00000200 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_10         		(0x00000400 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_11         		(0x00000800 << GP30_D8_NOT_USED_31_19_Pos)	
#define GP30_D8_NOT_USED_31_19_12         		(0x00001000 << GP30_D8_NOT_USED_31_19_Pos)	

/*******************  Bit definition for GP30_DE register  ********************/
#define GP30_DE_HS_CLK_SEL_Pos             	(2U)
#define GP30_DE_HS_CLK_SEL_Msk             	(0x03UL << GP30_DE_HS_CLK_SEL_Pos)		/*!< 0x0000000C */
#define GP30_DE_HS_CLK_SEL             		GP30_DE_HS_CLK_SEL_Msk					/*!< HS_CLK_SEL[3:2]Initiale Communication value? */
#define GP30_DE_HS_CLK_SEL_0             		(0x00000001 << GP30_DE_HS_CLK_SEL_Pos)	
#define GP30_DE_HS_CLK_SEL_1             		(0x00000002 << GP30_DE_HS_CLK_SEL_Pos)	


#endif /* INC_GP30_BIT_DEFINITION_H_ */
