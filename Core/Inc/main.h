/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
void cppmain();
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
#define SSEG_5_Pin GPIO_PIN_13
#define SSEG_5_GPIO_Port GPIOC
#define SSEG_4_Pin GPIO_PIN_14
#define SSEG_4_GPIO_Port GPIOC
#define SSEG_6_Pin GPIO_PIN_15
#define SSEG_6_GPIO_Port GPIOC
#define MODE_LED1_Pin GPIO_PIN_0
#define MODE_LED1_GPIO_Port GPIOH
#define MODE_LED2_Pin GPIO_PIN_1
#define MODE_LED2_GPIO_Port GPIOH
#define MODE_SW_Pin GPIO_PIN_2
#define MODE_SW_GPIO_Port GPIOC
#define USER_SW_Pin GPIO_PIN_3
#define USER_SW_GPIO_Port GPIOC
#define BATT_V_Pin GPIO_PIN_4
#define BATT_V_GPIO_Port GPIOA
#define R_PWM_Pin GPIO_PIN_6
#define R_PWM_GPIO_Port GPIOA
#define L_PWM_Pin GPIO_PIN_7
#define L_PWM_GPIO_Port GPIOA
#define BZR_Pin GPIO_PIN_4
#define BZR_GPIO_Port GPIOC
#define IR_LED0_Pin GPIO_PIN_0
#define IR_LED0_GPIO_Port GPIOB
#define IR_LED1_Pin GPIO_PIN_1
#define IR_LED1_GPIO_Port GPIOB
#define IR_LED2_Pin GPIO_PIN_2
#define IR_LED2_GPIO_Port GPIOB
#define R_SIG1_Pin GPIO_PIN_11
#define R_SIG1_GPIO_Port GPIOB
#define R_SIG2_Pin GPIO_PIN_12
#define R_SIG2_GPIO_Port GPIOB
#define L_SIG1_Pin GPIO_PIN_13
#define L_SIG1_GPIO_Port GPIOB
#define L_SIG2_Pin GPIO_PIN_14
#define L_SIG2_GPIO_Port GPIOB
#define M_STBY_Pin GPIO_PIN_15
#define M_STBY_GPIO_Port GPIOB
#define DBG_LED0_Pin GPIO_PIN_6
#define DBG_LED0_GPIO_Port GPIOC
#define DBG_LED1_Pin GPIO_PIN_7
#define DBG_LED1_GPIO_Port GPIOC
#define DBG_LED2_Pin GPIO_PIN_8
#define DBG_LED2_GPIO_Port GPIOC
#define SSEG_3_Pin GPIO_PIN_9
#define SSEG_3_GPIO_Port GPIOC
#define R_ENC_1_Pin GPIO_PIN_8
#define R_ENC_1_GPIO_Port GPIOA
#define R_ENC_2_Pin GPIO_PIN_9
#define R_ENC_2_GPIO_Port GPIOA
#define SSEG_2_Pin GPIO_PIN_10
#define SSEG_2_GPIO_Port GPIOC
#define SSEG_1_Pin GPIO_PIN_11
#define SSEG_1_GPIO_Port GPIOC
#define SSEG_0_Pin GPIO_PIN_12
#define SSEG_0_GPIO_Port GPIOC
#define IR_LED3_Pin GPIO_PIN_3
#define IR_LED3_GPIO_Port GPIOB
#define L_ENC_1_Pin GPIO_PIN_6
#define L_ENC_1_GPIO_Port GPIOB
#define L_ENC_2_Pin GPIO_PIN_7
#define L_ENC_2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
