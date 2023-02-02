//key_pad connected on [A0-:......:A7]
//A0,A1,A2,A3 (ROWS)INPUT :0 BY DEFAULT
//A4,A5,A6,A7 (COLUMNS)OUTPUT :1 BY DEFAULT
//PRESSING A BUTTON  : CONVERT INPUT ON THE ROW FROM 0 TO 1
//PRESS SW_BUTTON [1] : A0=1,A4=1
//PRESS SW_BUTTON [2] : A0=1,A5=1
//      SW_BUTTON [3] : A0=1,A6=1
//      SW_BUTTON [F1]: A0=1,A7=1
//      SW_BUTTON [4] : A1=1,A4=1
//		sw_button [5] : A1=1,A5=1
//		SW_BUTTON [6] : A1=1,A6=1
//      SW_BUTTON [F2]: A1=1,A7=1
//      SW_BUTTON [7] : A2=1,A4=1
//		sw_button [8] : A2=1,A5=1
//		SW_BUTTON [9] : A2=1,A6=1
//      SW_BUTTON [F3]: A2=1,A7=1
//      SW_BUTTON [*] : A3=1,A4=1
//		sw_button [0] : A3=1,A5=1
//		SW_BUTTON [#] : A3=1,A6=1
//      SW_BUTTON [F4]: A3=1,A7=1

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

#include "main.h"
void SystemClock_Config(void);

int main(void)
     {



		//GPIOX
		RCC->APB2ENR =(1<<2)|(1<<4);
		GPIOA->CRL =(4<<0)|(4<<4)|(4<<8)|(4<<12); //INPUT PIN A0 A1 A2 A3
		GPIOA->CRL |=(3<<16)|(3<<20)|(3<<24)|(3<<28); //OUTPUT PIN A4 A5 A6 A7
		///
	    GPIOA->IDR =~(1<<0); //0 ON PIN A0 A1 A2 A3 //input
	    GPIOA->IDR =~(1<<1);
	    GPIOA->IDR =~(1<<2);
	    GPIOA->IDR =~(1<<3);
	    //

	    HAL_Init();

	    SystemClock_Config();

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


void BUTTON_1()  //1ST ROW IN KEY_PAD
{

   GPIOA->ODR=(1<<4);
   if ((GPIOA->IDR&(1<<0)))
    { //your_code
	 }
}
void BUTTON_2()
{
	GPIOA->ODR=(1<<5);
	if((GPIOA->IDR&(1<<0)))
	  {
 	 	//your_code

	   }

}

void BUTTON_3()
{

	GPIOA->ODR=(1<<6);
	if((GPIOA->IDR&(1<<0)))
	{
	 	 	 //your_code

    }

}
void BUTTON_F_1()
{
	GPIOA->ODR=(1<<7);
	if((GPIOA->IDR&(1<<0)))
		  {
	 	 	//your_code
		   }

}
void BUTTON_4() //2_ND ROW IN KEY_PAD
{
	GPIOA->ODR=(1<<4);
	if((GPIOA->IDR&(1<<1)))
			  {
		 	 	 //your_code
			  }

}

void BUTTON_5()
{
	GPIOA->ODR=(1<<5);
	if((GPIOA->IDR&(1<<1)))
			  {
		 	 	//your code
			  }

}

void BUTTON_6()
{

	GPIOA->ODR=(1<<6);
	if((GPIOA->IDR&(1<<1)))
	{
	 	 	//your code

    }

}
void BUTTON_F_2()
{
	GPIOA->ODR=(1<<7);
	if((GPIOA->IDR&(1<<1)))
		  {
	 	 	 //your_code
		   }

}
void BUTTON_7() //3_RD ROW IN KEY_PAD
{
	GPIOA->ODR=(1<<4);
	if((GPIOA->IDR&(1<<2)))
			  {
		 	 	 //your_code
			  }

}

void BUTTON_8()
{
	GPIOA->ODR=(1<<5);
	if((GPIOA->IDR&(1<<2)))
			  {
		 	 	//your code
			  }

}

void BUTTON_9()
{

	GPIOA->ODR=(1<<6);
	if((GPIOA->IDR&(1<<2)))
	{
	 	 	//your code

    }

}
void BUTTON_F_3()
{
	GPIOA->ODR=(1<<7);
	if((GPIOA->IDR&(1<<2)))
		  {
	 	 	 //your_code
		   }

}
void BUTTON_STAR_() //4_TH ROW IN KEY_PAD
{
	GPIOA->ODR=(1<<4);
	if((GPIOA->IDR&(1<<3)))
			  {
		 	 	 //your_code
			  }

}

void BUTTON_0()
{
	GPIOA->ODR=(1<<5);
	if((GPIOA->IDR&(1<<3)))
			  {
		 	 	//your code
			  }

}

void BUTTON_HASH_()
{

	GPIOA->ODR=(1<<6);
	if((GPIOA->IDR&(1<<3)))
	{
	 	 	//your code

    }

}
void BUTTON_F_4()
{
	GPIOA->ODR=(1<<7);
	if((GPIOA->IDR&(1<<3)))
		  {
	 	 	 //your_code
		   }

}
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
