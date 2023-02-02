
#include "main.h"
#include "fonts.h"
#include "ssd1306.h"

I2C_HandleTypeDef hi2c1;

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_I2C1_Init(void);
//buttons_function_definition
void BUTTON_1();
void BUTTON_2();
void BUTTON_3();
void BUTTON_F_1();
void BUTTON_4();
void BUTTON_5();
void BUTTON_6();
void BUTTON_F_2();
void BUTTON_7();
void BUTTON_8();
void BUTTON_9();
void BUTTON_F_3();
void BUTTON_STAR_();
void BUTTON_0();
void BUTTON_HASH_();
void BUTTON_F_4();


int main(void)
{

    HAL_Init();



    RCC->APB2ENR =(1<<2)|(1<<4);
	GPIOA->CRL =(4<<0)|(4<<4)|(4<<8)|(4<<12); //INPUT PIN A0 A1 A2 A3
	GPIOA->CRL |=(3<<16)|(3<<20)|(3<<24)|(3<<28); //OUTPUT PIN A4 A5 A6 A7
	///
    GPIOA->IDR =~(1<<0); //0 ON PIN A0 A1 A2 A3 //input
    GPIOA->IDR =~(1<<1);
    GPIOA->IDR =~(1<<2);
    GPIOA->IDR =~(1<<3);
    //
    SystemClock_Config();
    MX_GPIO_Init();
    MX_I2C1_Init();
    SSD1306_Init(); //INTIALIZE LCD
    //
    while (1)
      {
    	BUTTON_1();
    	BUTTON_2();
   		BUTTON_3();
   		BUTTON_F_1();
   		BUTTON_4();
   		BUTTON_5();
   		BUTTON_6();
   		BUTTON_F_2();
   		BUTTON_7();
    	BUTTON_8();
   		BUTTON_9();
   		BUTTON_F_3();
  		BUTTON_STAR_();
    	BUTTON_0();
   		BUTTON_HASH_();
    	BUTTON_F_4();

       }
      }

///////BUTTON_FUNCTIONS

void BUTTON_1()  //1ST ROW IN KEY_PAD
{

	GPIOA->ODR=(1<<4);

   if ((GPIOA->IDR&(1<<0)))
    { //your_code

	   	   	   	SSD1306_GotoXY (0,0);
	       		SSD1306_Puts ("1", &Font_16x26, 1); //&FONT_11x18
	       	    SSD1306_UpdateScreen();
	       		HAL_Delay (1000);
	       		SSD1306_Clear();
	       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
	 }
}
void BUTTON_2()
{
	GPIOA->ODR=(1<<5);
	if((GPIOA->IDR&(1<<0)))
	  {
 	 	//your_code
		 SSD1306_GotoXY (0,0);
		 SSD1306_Puts ("2", &Font_16x26, 1);
	     SSD1306_UpdateScreen();
		 HAL_Delay (1000);
		 SSD1306_Clear();

		 GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
	   }

}

void BUTTON_3()
{

	GPIOA->ODR=(1<<6);
	if((GPIOA->IDR&(1<<0)))
	{
	 	 	 //your_code
		SSD1306_GotoXY (0,0);
	    SSD1306_Puts ("3", &Font_16x26, 1); //&FONT_11x18
	    SSD1306_UpdateScreen();
	    HAL_Delay (1000);
	  	SSD1306_Clear();

	  	GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
	}

}
void BUTTON_F_1()
{
	GPIOA->ODR=(1<<7);
	if((GPIOA->IDR&(1<<0)))
		  {
	 	 	//your_code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("F1", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
		  }

}
void BUTTON_4() //2_ND ROW IN KEY_PAD
{
	GPIOA->ODR=(1<<4);
	if((GPIOA->IDR&(1<<1)))
			  {
		 	 	 //your_code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("4", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
			  }

}

void BUTTON_5()
{
	GPIOA->ODR=(1<<5);
	if((GPIOA->IDR&(1<<1)))
			  {
		 	 	//your code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("5", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
			  }

}

void BUTTON_6()
{

	GPIOA->ODR=(1<<6);
	if((GPIOA->IDR&(1<<1)))
	{
	 	 	//your code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("6", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
	}

}
void BUTTON_F_2()
{
	GPIOA->ODR=(1<<7);
	if((GPIOA->IDR&(1<<1)))
		  {
	 	 	 //your_code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("F2", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
		  }

}
void BUTTON_7() //3_RD ROW IN KEY_PAD
{
	GPIOA->ODR=(1<<4);
	if((GPIOA->IDR&(1<<2)))
			  {
		 	 	 //your_code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("7", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
			  }

}

void BUTTON_8()
{
	GPIOA->ODR=(1<<5);
	if((GPIOA->IDR&(1<<2)))
			  {
		 	 	//your code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("8", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
			  }

}

void BUTTON_9()
{

	GPIOA->ODR=(1<<6);
	if((GPIOA->IDR&(1<<2)))
	{
	 	 	//your code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("9", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();

			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
	}

}
void BUTTON_F_3()
{
	GPIOA->ODR=(1<<7);
	if((GPIOA->IDR&(1<<2)))
		  {
	 	 	 //your_code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("F3", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
		  }

}
void BUTTON_STAR_() //4_TH ROW IN KEY_PAD
{
	GPIOA->ODR=(1<<4);
	if((GPIOA->IDR&(1<<3)))
			  {
		 	 	 //your_code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("*", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
			  }

}

void BUTTON_0()
{
	GPIOA->ODR=(1<<5);
	if((GPIOA->IDR&(1<<3)))
			  {
		 	 	//your code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("0", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
			  }

}

void BUTTON_HASH_()
{
	GPIOA->ODR=(1<<6);

	if((GPIOA->IDR&(1<<3)))
	{
	 	 	//your code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("#", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();

			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
	}

}

void BUTTON_F_4()
{
	GPIOA->ODR=(1<<7);
	if((GPIOA->IDR&(1<<3)))
		  {
	 	 	 //your_code
		SSD1306_GotoXY (0,0);
			       		SSD1306_Puts ("F4", &Font_16x26, 1); //&FONT_11x18
			       	    SSD1306_UpdateScreen();
			       		HAL_Delay (1000);
			       		SSD1306_Clear();
			       		GPIOA->ODR|=~(1<<4)|(1<<5)|(1<<6)|(1<<7);
		  }

}


/////////////////
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief I2C1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_I2C1_Init(void)
{

  /* USER CODE BEGIN I2C1_Init 0 */

  /* USER CODE END I2C1_Init 0 */

  /* USER CODE BEGIN I2C1_Init 1 */

  /* USER CODE END I2C1_Init 1 */
  hi2c1.Instance = I2C1;
  hi2c1.Init.ClockSpeed = 400000;
  hi2c1.Init.DutyCycle = I2C_DUTYCYCLE_2;
  hi2c1.Init.OwnAddress1 = 0;
  hi2c1.Init.AddressingMode = I2C_ADDRESSINGMODE_7BIT;
  hi2c1.Init.DualAddressMode = I2C_DUALADDRESS_DISABLE;
  hi2c1.Init.OwnAddress2 = 0;
  hi2c1.Init.GeneralCallMode = I2C_GENERALCALL_DISABLE;
  hi2c1.Init.NoStretchMode = I2C_NOSTRETCH_DISABLE;
  if (HAL_I2C_Init(&hi2c1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN I2C1_Init 2 */

  /* USER CODE END I2C1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

}

/* USER CODE BEGIN 4 */

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
