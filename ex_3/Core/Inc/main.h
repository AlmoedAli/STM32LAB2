/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_1_Pin GPIO_PIN_0
#define LED_1_GPIO_Port GPIOA
#define LED_2_Pin GPIO_PIN_1
#define LED_2_GPIO_Port GPIOA
#define ENM0_Pin GPIO_PIN_2
#define ENM0_GPIO_Port GPIOA
#define ENM1_Pin GPIO_PIN_3
#define ENM1_GPIO_Port GPIOA
#define DOT_Pin GPIO_PIN_4
#define DOT_GPIO_Port GPIOA
#define red_Pin GPIO_PIN_5
#define red_GPIO_Port GPIOA
#define en0_Pin GPIO_PIN_6
#define en0_GPIO_Port GPIOA
#define en1_Pin GPIO_PIN_7
#define en1_GPIO_Port GPIOA
#define segA_Pin GPIO_PIN_0
#define segA_GPIO_Port GPIOB
#define segB_Pin GPIO_PIN_1
#define segB_GPIO_Port GPIOB
#define segC_Pin GPIO_PIN_2
#define segC_GPIO_Port GPIOB
#define ROW2_Pin GPIO_PIN_10
#define ROW2_GPIO_Port GPIOB
#define ROW3_Pin GPIO_PIN_11
#define ROW3_GPIO_Port GPIOB
#define ROW4_Pin GPIO_PIN_12
#define ROW4_GPIO_Port GPIOB
#define ROW5_Pin GPIO_PIN_13
#define ROW5_GPIO_Port GPIOB
#define ENM6_Pin GPIO_PIN_14
#define ENM6_GPIO_Port GPIOB
#define ENM7_Pin GPIO_PIN_15
#define ENM7_GPIO_Port GPIOB
#define en2_Pin GPIO_PIN_8
#define en2_GPIO_Port GPIOA
#define en3_Pin GPIO_PIN_9
#define en3_GPIO_Port GPIOA
#define ENM2_Pin GPIO_PIN_10
#define ENM2_GPIO_Port GPIOA
#define ENM3_Pin GPIO_PIN_11
#define ENM3_GPIO_Port GPIOA
#define ENM4_Pin GPIO_PIN_12
#define ENM4_GPIO_Port GPIOA
#define ENM5_Pin GPIO_PIN_13
#define ENM5_GPIO_Port GPIOA
#define ROW6_Pin GPIO_PIN_14
#define ROW6_GPIO_Port GPIOA
#define ROW7_Pin GPIO_PIN_15
#define ROW7_GPIO_Port GPIOA
#define segD_Pin GPIO_PIN_3
#define segD_GPIO_Port GPIOB
#define segE_Pin GPIO_PIN_4
#define segE_GPIO_Port GPIOB
#define segF_Pin GPIO_PIN_5
#define segF_GPIO_Port GPIOB
#define segG_Pin GPIO_PIN_6
#define segG_GPIO_Port GPIOB
#define BUTTON_Pin GPIO_PIN_7
#define BUTTON_GPIO_Port GPIOB
#define ROW0_Pin GPIO_PIN_8
#define ROW0_GPIO_Port GPIOB
#define ROW1_Pin GPIO_PIN_9
#define ROW1_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
