/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "user_spi_interface.c"
#include "user_tools.c"

#include "GP30_Coding.h"

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
SPI_HandleTypeDef hspi1;

/* USER CODE BEGIN PV */

GP30_InitTypeDef DUT; // DUT = Device Under Test

volatile uint32_t  My_INTN_Counter = 0;
volatile uint8_t   My_INTN_State = 1;

volatile uint32_t  TIMEOUT_Counter = 0;
volatile uint32_t  TIMEOUT_Limit = 10000;

volatile float     ZCD_Scaling = 900./1024;         // [mV/LSB]

volatile float     RAW_ResultUP = 0;                // RAW Value in [LSB]
volatile float     Time_ResultUP = 0;               // Result in [s]
volatile float     Time_ResultUP_ns = 0;            // Result in [ns]

volatile float     RAW_ResultDOWN = 0;              // RAW Value in [LSB]
volatile float     Time_ResultDOWN = 0;             // Result in [s]
volatile float     Time_ResultDOWN_ns = 0;          // Result in [ns]

volatile float     RAW_Result = 0;                  // RAW Value in [LSB]
volatile float     Time_Result = 0;                 // Result in [s]
volatile float     Time_Result_ns = 0;              // Result in [ns]

volatile float     RAW_CAL_Result = 0;              // RAW Value in [LSB]
volatile float     Time_CAL_Result = 0;             // Result in [s]
volatile float     Time_CAL_Result_ns = 0;          // Result in [ns]

volatile uint32_t  SRR_IRQ_FLAG;                    // Interrupt Flags
volatile uint32_t  SRR_ERR_FLAG;                    // Error Flags
volatile uint32_t  SRR_FEP_STF;                     // Frontend Processing Status Flags
volatile uint32_t  SRR_TS_TIME;                     // Task Sequencer Time

// configuration: GP30Y_DN8_config_2MHz.cfg saved on 28.04.2021 07:40
uint32_t  Reg[19] = {
		0x48DBA399, // Register 3, 2, 1, 0
		0x0034310A, // Register 7, 6, 5, 4
		0x81111144, // Register 11, 10, 9, 8
		0x10215000, // Register 15, 14, 13, 12
		0x001F03FF, // Register 19, 18, 17, 16
		0x00000A00, // Register 23, 22, 21, 20
		0x0011A080, // Register 27, 26, 25, 24
		0x00793400, // Register 31, 30, 29, 28
		0x00001424, // Register 35, 34, 33, 32
		0x03E70C81, // Register 39, 38, 37, 36
		0x00002650, // Register 43, 42, 41, 40
		0x0000D481, // Register 47, 46, 45, 44
		0x84A0C47C, // Register 51, 50, 49, 48
		0x401725CF, // Register 55, 54, 53, 52
		0x00270808, // Register 59, 58, 57, 56
		0x00000001, // SHR Register 0xD0 ; TOF RATE Lvl
		0x00000048, // SHR Register 0xDA ; 1st Hit Lvl Up
		0x00000048, // SHR Register 0xDB ; 1st Hit Lvl Dn
		0x00000000  // SHR Register 0xD8 ; Start Hit Delay Win
};

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_SPI1_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_SPI1_Init();
  /* USER CODE BEGIN 2 */

  // set configuration registers

/*
  DUT.CR[0] = 0x48DBA399;
  DUT.CR[1] = 0x0034310A;
  DUT.CR[2] = 0x81111144;
  DUT.CR[3] = 0x10215000;
  DUT.CR[4] = 0x001F03FF;
  DUT.CR[5] = 0x00000A00;
  DUT.CR[6] = 0x0011A080;
  // ...etc

  GP30_Update_Param(&DUT);
*/

  GP30_Init_CFG(&DUT, Reg);


  // set new value in CR9
  //DUT.Param.CR9.FPG_FP_NO = 10;

  // update CR9 register with new parameter
  //DUT.CR[9] |= GP30_9_FPG_FP_NO_SET(DUT.Param.CR9.FPG_FP_NO);

  //GP30_Update_CFG(&DUT); // Function to update CFG!


  // Rough SPI Example for TDC-GP30 @10 MHz
  // According data sheet, SPI Frequency up to 10 MHz is possible.

  Write_Opcode(RC_SYS_RST);
  DUT.State = GP30_STATE_RESET;
  HAL_Delay(1); // Delay = 1ms              // 500 us wait for GP22


  Write_Dword(RC_RAA_WR, 0xC0, DUT.CR[0]); // disable Watchdog
  Write_Opcode(RC_MCT_OFF); // MCT OFF


  Write_Dword(RC_RAA_WR, 0xC0, DUT.CR[0]);
  Write_Dword(RC_RAA_WR, 0xC1, DUT.CR[1]);
  Write_Dword(RC_RAA_WR, 0xC2, DUT.CR[2]);
  Write_Dword(RC_RAA_WR, 0xC3, DUT.CR[3]);
  Write_Dword(RC_RAA_WR, 0xC4, DUT.CR[4]);
  Write_Dword(RC_RAA_WR, 0xC5, DUT.CR[5]);
  Write_Dword(RC_RAA_WR, 0xC6, DUT.CR[6]);
  Write_Dword(RC_RAA_WR, 0xC7, DUT.CR[7]);
  Write_Dword(RC_RAA_WR, 0xC8, DUT.CR[8]);
  Write_Dword(RC_RAA_WR, 0xC9, DUT.CR[9]);
  Write_Dword(RC_RAA_WR, 0xCA, DUT.CR[10]);
  Write_Dword(RC_RAA_WR, 0xCB, DUT.CR[11]);
  Write_Dword(RC_RAA_WR, 0xCC, DUT.CR[12]);
  Write_Dword(RC_RAA_WR, 0xCD, DUT.CR[13]);
  Write_Dword(RC_RAA_WR, 0xCE, DUT.CR[14]);
  Write_Dword(RC_RAA_WR, 0xD0, DUT.CR[15]);
  Write_Dword(RC_RAA_WR, 0xDA, DUT.CR[16]);
  Write_Dword(RC_RAA_WR, 0xDB, DUT.CR[17]);
  Write_Dword(RC_RAA_WR, 0xD8, DUT.CR[18]);
  //Write_Dword(RC_RAA_WR, 0xDE, DUT.CR[19]);


  // Work Around to provide results from start on
  // Set Zero Cross Detection Level, e.g. 700[mV] / 0.88[mV/LSB]
  Write_Dword(RC_RAA_WR, 0xD9, (700/ZCD_Scaling));

  Write_Opcode(RC_MCT_ON); // MCT ON

  // Work Around after RC_MCT_ON if no TIMEOUT is used
  // to prevent EF_TSQ_TMO: Error Flag Task Sequencer Timeout
  Delay_100us(1);                    // to run into timeout
  Write_Dword(RC_RAA_WR, 0xDD, 0x7); // clearing ERROR Flag

  DUT.State = GP30_STATE_READY;

  /*
  Write_Opcode(RC_FEP_INIT);  // MCT is still off
  Write_Opcode(RC_SV_INIT);   // MCT is still off
  Write_Opcode(RC_CPU_INIT);  // MCT is still off
  Write_Opcode(RC_SYS_INIT);  // Configuration is reloaded from NVRAM immediately, MCT is running
  Write_Opcode(RC_SYS_RST);   // Resets the whole chip including configuration, like switching on the power supply
  */


  //--------------------------------------------------------------------------

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */

	  while ( (My_INTN_State == 0) || (TIMEOUT_Counter > TIMEOUT_Limit) ) {

		  if (TIMEOUT_Counter > TIMEOUT_Limit) {
			  TIMEOUT_Counter = 0;
			  Write_Dword(RC_RAA_WR, 0xDD, 0x7);
		  }

		  // Simple example source code, Time Conversion Mode
		  // Calculating diffTOF by reading sumTOF for UP stream and DOWN stream.

		  // Read Flag Registers
		  SRR_IRQ_FLAG = Read_Dword(RC_RAA_RD, 0xE0);  //Interrupt Flags
		  SRR_ERR_FLAG = Read_Dword(RC_RAA_RD, 0xE1);  //Error Flags
		  SRR_FEP_STF  = Read_Dword(RC_RAA_RD, 0xE2);  //Frontend Processing Status Flags
		  SRR_TS_TIME  = Read_Dword(RC_RAA_RD, 0xE9);  //Task Sequencer Time

		  // Check SRR_IRQ_FLAG, SRR_ERR_FLAG, TS_TIME
		  if ((SRR_TS_TIME > 20) && ((SRR_ERR_FLAG&0x3FF) == 0) && ((SRR_IRQ_FLAG&0x1) == 1)) {

			  RAW_Result = Read_Dword(RC_RAA_RD, 0xD9);
			  RAW_CAL_Result = RAW_Result * ZCD_Scaling; //0.88;
			  //Plausibility Check: 600 < RAW_CAL_Result > 800
			  if (RAW_CAL_Result < 600) { RAW_CAL_Result = 700; }


			  // Calculating difference of sumTOF
			  // without any ERROR handling and without reviewing FEP

			  if ( (Read_Dword(RC_RAA_RD, 0xE2) & 0x60) > 0) {
				  RAW_ResultUP = Read_Dword(RC_RAA_RD, 0x80);
				  RAW_ResultUP /= MyPower(16);
				  Time_ResultUP = RAW_ResultUP * (1./4000000);
				  Time_ResultUP_ns = TIME_ns(Time_ResultUP);

				  Time_ResultUP_ns /= DUT.Param.CR10.TOF_HIT_NO;

				  RAW_ResultDOWN = Read_Dword(RC_RAA_RD, 0x84);
				  RAW_ResultDOWN /= MyPower(16);
				  Time_ResultDOWN = RAW_ResultDOWN * (1./4000000);
				  Time_ResultDOWN_ns = TIME_ns(Time_ResultDOWN);

				  Time_ResultDOWN_ns /= DUT.Param.CR10.TOF_HIT_NO;


				  Time_Result_ns = Time_ResultDOWN_ns - Time_ResultUP_ns;

				  // Clear interrupt flag, error flag & frontend status
				  // flag register by writing code to SHR_EXC
				  TIMEOUT_Counter = 0;
				  Write_Dword(RC_RAA_WR, 0xDD, 0x7);

			  }

		  }

		  TIMEOUT_Counter++;
	  }

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  if (HAL_PWREx_ControlVoltageScaling(PWR_REGULATOR_VOLTAGE_SCALE1) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 1;
  RCC_OscInitStruct.PLL.PLLN = 10;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV7;
  RCC_OscInitStruct.PLL.PLLQ = RCC_PLLQ_DIV2;
  RCC_OscInitStruct.PLL.PLLR = RCC_PLLR_DIV2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief SPI1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI1_Init(void)
{

  /* USER CODE BEGIN SPI1_Init 0 */

  /* USER CODE END SPI1_Init 0 */

  /* USER CODE BEGIN SPI1_Init 1 */

  /* USER CODE END SPI1_Init 1 */
  /* SPI1 parameter configuration*/
  hspi1.Instance = SPI1;
  hspi1.Init.Mode = SPI_MODE_MASTER;
  hspi1.Init.Direction = SPI_DIRECTION_2LINES;
  hspi1.Init.DataSize = SPI_DATASIZE_8BIT;
  hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi1.Init.CLKPhase = SPI_PHASE_2EDGE;
  hspi1.Init.NSS = SPI_NSS_SOFT;
  hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_8;
  hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi1.Init.CRCPolynomial = 7;
  hspi1.Init.CRCLength = SPI_CRC_LENGTH_DATASIZE;
  hspi1.Init.NSSPMode = SPI_NSS_PULSE_DISABLE;
  if (HAL_SPI_Init(&hspi1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI1_Init 2 */

  /* USER CODE END SPI1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(SSN_GPIO_Port, SSN_Pin, GPIO_PIN_SET);

  /*Configure GPIO pin : INTN_Pin */
  GPIO_InitStruct.Pin = INTN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_IT_RISING_FALLING;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(INTN_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : SSN_Pin */
  GPIO_InitStruct.Pin = SSN_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_HIGH;
  HAL_GPIO_Init(SSN_GPIO_Port, &GPIO_InitStruct);

  /* EXTI interrupt init*/
  HAL_NVIC_SetPriority(EXTI9_5_IRQn, 0, 0);
  HAL_NVIC_EnableIRQ(EXTI9_5_IRQn);

}

/* USER CODE BEGIN 4 */

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
	/* stm32l4xx_hal_gpio.c */

	/* Prevent unused argument(s) compilation warning */
	UNUSED(GPIO_Pin);

	// Note: It takes about 1us after INTN

	if (GPIO_Pin == INTN_Pin) {
		My_INTN_State = (HAL_GPIO_ReadPin(INTN_GPIO_Port, INTN_Pin) == GPIO_PIN_SET); /* low active */
		if (My_INTN_State == 0) {
			My_INTN_Counter += 1;
		}
	}

}

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
