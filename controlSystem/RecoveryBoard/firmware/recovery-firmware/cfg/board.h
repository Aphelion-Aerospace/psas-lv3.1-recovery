/*
    ChibiOS - Copyright (C) 2006..2020 Giovanni Di Sirio

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
 * This file has been automatically generated using ChibiStudio board
 * generator plugin. Do not edit manually.
 */

#ifndef BOARD_H
#define BOARD_H

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*
 * Setup for STMicroelectronics STM32 Nucleo64-F091RC board.
 */

/*
 * Board identifier.
 */
#define BOARD_ST_NUCLEO64_F091RC
#define BOARD_NAME                  "STMicroelectronics STM32 Nucleo64-F091RC"

/*
 * Board oscillators-related settings.
 * NOTE: LSE not fitted.
 */
#if !defined(STM32_LSECLK)
#define STM32_LSECLK                0U
#endif

#define STM32_LSEDRV                (3U << 3U)

#if !defined(STM32_HSECLK)
#define STM32_HSECLK                8000000U
#endif

#define STM32_HSE_BYPASS

/*
 * MCU type as defined in the ST header.
 */
#define STM32F091xC

/*
 * IO pins assignments.
 */
//#define GPIOA_ARD_A0                0U - Legacy
//#define GPIOA_ADC1_IN0              0U - Legacy
#define GPIOA_HALL_1				0U
//#define GPIOA_ARD_A1                1U - Legacy
//#define GPIOA_ADC1_IN1              1U - Legacy
#define GPIOA_HALL_2				1U
//#define GPIOA_ARD_D1                2U - Legacy
#define GPIOA_USART2_TX             2U
//#define GPIOA_ARD_D0                3U - Legacy
#define GPIOA_USART2_RX             3U
//#define GPIOA_ARD_A2                4U - Legacy
//#define GPIOA_ADC1_IN4              4U - Legacy
#define GPIOA_MOTOR_ILIM 			4U
//#define GPIOA_LED_GREEN             5U - Legacy
//#define GPIOA_ARD_D13               5U - Legacy
#define GPIOA_ISO_DROGUE 			5U
//#define GPIOA_ARD_D12               6U - Legacy
#define GPIOA_ISO_MAIN				6U
//#define GPIOA_ARD_D11               7U - Legacy
#define GPIOA_ROCKET_READY			7U
//#define GPIOA_ARD_D7                8U - Legacy
#define GPIOA_UMB_ON				8U
//#define GPIOA_ARD_D8                9U - Legacy
#define GPIOA_CAN_SILENT			9U
//#define GPIOA_ARD_D2                10U - Legacy
#define GPIOA_CAN_SHDN				10U
//#define GPIOA_PIN11                 11U - Legacy
#define GPIOA_CAN_RX				11U
//#define GPIOA_PIN12                 12U - Legacy
#define GPIOA_CAN_TX				12U
#define GPIOA_SWDIO                 13U
#define GPIOA_SWCLK                 14U
#define GPIOA_PIN15                 15U


		//--------GPIO-B DEFINITIONS----------

#define GPIOB_BATT_READ				0U
#define GPIOB_MOTOR_ISENSE			1U
#define GPIOB_PIN2                  2U
#define GPIOB_SWO                   3U
#define GPIOB_ARD_D3                3U
#define GPIOB_DEPLOY_1				4U
#define GPIOB_DEPLOY_2				5U
#define GPIOB_MOTOR_SLEEP			6U
#define GPIOB_MOTOR_FAIL			7U
#define GPIOB_ARD_D15               8U
#define GPIOB_ARD_D14               9U
#define GPIOB_ADDRESS_LSB			10U
#define GPIOB_ADDRESS_MSB			11U
#define GPIOB_PIN12                 12U
#define GPIOB_PIN13                 13U
#define GPIOB_IND_LED				14U
#define GPIOB_IND_BUZZ				15U

//#define GPIOB_ARD_A3                0U - Legacy
//#define GPIOB_ADC1_IN8              0U - Legacy
//#define GPIOB_PIN1                  1U - Legacy
//#define GPIOB_ARD_D5                4U - Legacy
//#define GPIOB_ARD_D4                5U - Legacy
//#define GPIOB_ARD_D10               6U - Legacy
//#define GPIOB_MOTOR_FAIL                  7U - Legacy
//#define GPIOB_ARD_D6                10U - Legacy
//#define GPIOB_ARD_D6                10U - Legacy
//#define GPIOB_PIN11                 11U - Legacy
//#define GPIOB_IND_LED                 14U - Legacy
//#define GPIOB_PIN15                 15U - Legacy

#define GPIOC_ARD_A5                0U
#define GPIOC_ADC1_IN11             0U
#define GPIOC_ARD_A4                1U
#define GPIOC_ADC1_IN10             1U
#define GPIOC_PIN2                  2U
#define GPIOC_PIN3                  3U
#define GPIOC_PIN4                  4U
#define GPIOC_PIN5                  5U
#define GPIOC_PIN6                  6U
#define GPIOC_ARD_D9                7U
#define GPIOC_PIN8                  8U
#define GPIOC_PIN9                  9U
#define GPIOC_PIN10                 10U
#define GPIOC_PIN11                 11U
#define GPIOC_PIN12                 12U
#define GPIOC_BUTTON                13U
#define GPIOC_OSC32_IN              14U
#define GPIOC_OSC32_OUT             15U

#define GPIOD_PIN0                  0U
#define GPIOD_PIN1                  1U
#define GPIOD_PIN2                  2U
#define GPIOD_PIN3                  3U
#define GPIOD_PIN4                  4U
#define GPIOD_PIN5                  5U
#define GPIOD_PIN6                  6U
#define GPIOD_PIN7                  7U
#define GPIOD_PIN8                  8U
#define GPIOD_PIN9                  9U
#define GPIOD_PIN10                 10U
#define GPIOD_PIN11                 11U
#define GPIOD_PIN12                 12U
#define GPIOD_PIN13                 13U
#define GPIOD_PIN14                 14U
#define GPIOD_PIN15                 15U

#define GPIOE_PIN0                  0U
#define GPIOE_PIN1                  1U
#define GPIOE_PIN2                  2U
#define GPIOE_PIN3                  3U
#define GPIOE_PIN4                  4U
#define GPIOE_PIN5                  5U
#define GPIOE_PIN6                  6U
#define GPIOE_PIN7                  7U
#define GPIOE_PIN8                  8U
#define GPIOE_PIN9                  9U
#define GPIOE_PIN10                 10U
#define GPIOE_PIN11                 11U
#define GPIOE_PIN12                 12U
#define GPIOE_PIN13                 13U
#define GPIOE_PIN14                 14U
#define GPIOE_PIN15                 15U

#define GPIOF_OSC_IN                0U
#define GPIOF_OSC_OUT               1U
#define GPIOF_PIN2                  2U
#define GPIOF_PIN3                  3U
#define GPIOF_PIN4                  4U
#define GPIOF_PIN5                  5U
#define GPIOF_PIN6                  6U
#define GPIOF_PIN7                  7U
#define GPIOF_PIN8                  8U
#define GPIOF_PIN9                  9U
#define GPIOF_PIN10                 10U
#define GPIOF_PIN11                 11U
#define GPIOF_PIN12                 12U
#define GPIOF_PIN13                 13U
#define GPIOF_PIN14                 14U
#define GPIOF_PIN15                 15U

/*
 * IO lines assignments.
 */
/*			-- LEGACY LINE ASSIGNMENTS --
#define LINE_ARD_A0                 PAL_LINE(GPIOA, 0U)
#define LINE_ADC1_IN0               PAL_LINE(GPIOA, 0U)
#define LINE_ARD_A1                 PAL_LINE(GPIOA, 1U)
#define LINE_ADC1_IN1               PAL_LINE(GPIOA, 1U)
#define LINE_ARD_D1                 PAL_LINE(GPIOA, 2U)
#define LINE_USART2_TX              PAL_LINE(GPIOA, 2U)
#define LINE_ARD_D0                 PAL_LINE(GPIOA, 3U)
#define LINE_USART2_RX              PAL_LINE(GPIOA, 3U)
#define LINE_ARD_A2                 PAL_LINE(GPIOA, 4U)
#define LINE_ADC1_IN4               PAL_LINE(GPIOA, 4U)
#define LINE_LED_GREEN              PAL_LINE(GPIOA, 5U)
#define LINE_ARD_D13                PAL_LINE(GPIOA, 5U)
#define LINE_ARD_D12                PAL_LINE(GPIOA, 6U)
#define LINE_ARD_D11                PAL_LINE(GPIOA, 7U)
#define LINE_ARD_D7                 PAL_LINE(GPIOA, 8U)
#define LINE_ARD_D8                 PAL_LINE(GPIOA, 9U)
#define LINE_ARD_D2                 PAL_LINE(GPIOA, 10U)
#define LINE_SWDIO                  PAL_LINE(GPIOA, 13U)
#define LINE_SWCLK                  PAL_LINE(GPIOA, 14U)
#define LINE_ARD_A3                 PAL_LINE(GPIOB, 0U)
#define LINE_ADC1_IN8               PAL_LINE(GPIOB, 0U)
#define LINE_SWO                    PAL_LINE(GPIOB, 3U)
#define LINE_ARD_D3                 PAL_LINE(GPIOB, 3U)
#define LINE_ARD_D5                 PAL_LINE(GPIOB, 4U)
#define LINE_ARD_D4                 PAL_LINE(GPIOB, 5U)
#define LINE_ARD_D10                PAL_LINE(GPIOB, 6U)
#define LINE_ARD_D15                PAL_LINE(GPIOB, 8U)
#define LINE_ARD_D14                PAL_LINE(GPIOB, 9U)
#define LINE_ARD_D6                 PAL_LINE(GPIOB, 10U)
#define LINE_ARD_A5                 PAL_LINE(GPIOC, 0U)
#define LINE_ADC1_IN11              PAL_LINE(GPIOC, 0U)
#define LINE_ARD_A4                 PAL_LINE(GPIOC, 1U)
#define LINE_ADC1_IN10              PAL_LINE(GPIOC, 1U)
#define LINE_ARD_D9                 PAL_LINE(GPIOC, 7U)
#define LINE_BUTTON                 PAL_LINE(GPIOC, 13U)
#define LINE_OSC32_IN               PAL_LINE(GPIOC, 14U)
#define LINE_OSC32_OUT              PAL_LINE(GPIOC, 15U)
#define LINE_OSC_IN                 PAL_LINE(GPIOF, 0U)
#define LINE_OSC_OUT                PAL_LINE(GPIOF, 1U)



#define LINE_DCM_DIR                PAL_LINE(GPIOA, 7U)
#define LINE_DCM_PWM                PAL_LINE(GPIOA, 8U)
#define LINE_ISO_DROGUE             PAL_LINE(GPIOA, 9U)
#define LINE_ISO_MAIN               PAL_LINE(GPIOA, 10U)
#define LINE_SHORE_PWR              PAL_LINE(GPIOA, 11U)

#define LINE_ROTSENSE_PWR           PAL_LINE(GPIOA, 12U)
#define LINE_DCM_PWR                PAL_LINE(GPIOA, 15U)
#define LINE_ROTSENSE1              PAL_LINE(GPIOB, 0U)
#define LINE_ROTSENSE2              PAL_LINE(GPIOB, 1U)
*/

#define LINE_HALL_1 				PAL_LINE(GPIOA, 0U)
#define LINE_HALL_2 				PAL_LINE(GPIOA, 1U)
#define LINE_USART2_TX 				PAL_LINE(GPIOA, 2U)
#define LINE_USART2_RX 				PAL_LINE(GPIOA, 3U)
#define LINE_MOTOR_ILIM 			PAL_LINE(GPIOA, 4U)
#define LINE_ISO_DROGUE 			PAL_LINE(GPIOA, 5U)
#define LINE_ISO_MAIN 				PAL_LINE(GPIOA, 6U)
#define LINE_ROCKET_READY 			PAL_LINE(GPIOA, 7U)
#define LINE_UMB_READY 				PAL_LINE(GPIOA, 8U)
#define LINE_CAN_SILENT 			PAL_LINE(GPIOA, 9U)
#define LINE_CAN_SHDN 				PAL_LINE(GPIOA, 10U)
#define LINE_CAN_RX 				PAL_LINE(GPIOA, 11U)
#define LINE_CAN_TX 				PAL_LINE(GPIOA, 12U)
#define LINE_BATT_READ 				PAL_LINE(GPIOB, 0U)
#define LINE_MOTOR_ISENSE 			PAL_LINE(GPIOB, 1U)
#define LINE_DEPLOY_1 				PAL_LINE(GPIOB, 4U)
#define LINE_DEPLOY_2 				PAL_LINE(GPIOB, 5U)
#define LINE_MOTOR_SLEEP 			PAL_LINE(GPIOB, 6U)
#define LINE_MOTOR_FAIL 			PAL_LINE(GPIOB, 7U)
#define LINe_ADDRESS_LSB 			PAL_LINE(GPIOB, 10U)
#define LINE_ADDRESS_MSB 			PAL_LINE(GPIOB, 11U)
#define LINE_IND_LED 				PAL_LINE(GPIOB, 14U)
#define LINE_IND_BUZZ 				PAL_LINE(GPIOB, 15U)


/*this has been added as practice
#define LINE_LA_DRV1                PAL_LINE(GPIOB, 2U)
#define LINE_LA_DRV2                PAL_LINE(GPIOB, 3U)
#define LINE_LA_DRV12               PAL_LINE(GPIOB, 12U)
#define LINE_LA_C8 					PAL_LINE(GPIOC, 8U)
Line for B1 has already been defined in line 232 as LINE_LA_DRV1*/


/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*
 * I/O ports initial setup, this configuration is established soon after reset
 * in the initialization code.
 * Please refer to the STM32 Reference Manual for details.
 */
#define PIN_MODE_INPUT(n)           (0U << ((n) * 2U))
#define PIN_MODE_OUTPUT(n)          (1U << ((n) * 2U))
#define PIN_MODE_ALTERNATE(n)       (2U << ((n) * 2U))
#define PIN_MODE_ANALOG(n)          (3U << ((n) * 2U))
#define PIN_ODR_LOW(n)              (0U << (n))
#define PIN_ODR_HIGH(n)             (1U << (n))
#define PIN_OTYPE_PUSHPULL(n)       (0U << (n))
#define PIN_OTYPE_OPENDRAIN(n)      (1U << (n))
#define PIN_OSPEED_VERYLOW(n)       (0U << ((n) * 2U))
#define PIN_OSPEED_LOW(n)           (1U << ((n) * 2U))
#define PIN_OSPEED_MEDIUM(n)        (2U << ((n) * 2U))
#define PIN_OSPEED_HIGH(n)          (3U << ((n) * 2U))
#define PIN_PUPDR_FLOATING(n)       (0U << ((n) * 2U))
#define PIN_PUPDR_PULLUP(n)         (1U << ((n) * 2U))
#define PIN_PUPDR_PULLDOWN(n)       (2U << ((n) * 2U))
#define PIN_AFIO_AF(n, v)           ((v) << (((n) % 8U) * 4U))

/*
 * GPIOA setup:
 *
 * PA0  - Hall Sensor 1          	(Input, Analog).
 * PA1  - Hall Sensor 2    		    (Input, Analog).
 * PA2  - USART2_TX          		(Digital, Serial).
 * PA3  - AUSART2_RX       		    (Digital, Serial).
 * PA4  - Motor Current Limit       (Output, Analog).
 * PA5  - ISO Drogue         		(Input, Digital).
 * PA6  - ISO Main                  (Input, Digital).
 * PA7  - Rocket Ready              (Output, Digital).
 * PA8  - Umbilical On              (Input, Digital).
 * PA9  - CAN Silent                (CAN line).
 * PA10 - CAN SHDN                  (CAN line).
 * PA11 - CAN RX                    (CAN line).
 * PA12 - CAN TX                    (CAN line).
 * PA13 - SWDIO                     (alternate 0).
 * PA14 - SWCLK                     (alternate 0).
 * PA15 - PIN15                     (input pullup).
 */
#define VAL_GPIOA_MODER             (PIN_MODE_INPUT(GPIOA_HALL_1) |         \
                                     PIN_MODE_INPUT(GPIOA_HALL_2) |         \
                                     PIN_MODE_ALTERNATE(GPIOA_USART2_TX) |     \
                                     PIN_MODE_ALTERNATE(GPIOA_USART2_RX) |     \
                                     PIN_MODE_INPUT(GPIOA_MOTOR_ILIM) |         \
                                     PIN_MODE_OUTPUT(GPIOA_ISO_DROGUE) |     \
                                     PIN_MODE_INPUT(GPIOA_ISO_MAIN) |        \
                                     PIN_MODE_OUTPUT(GPIOA_ROCKET_READY) |        \
                                     PIN_MODE_INPUT(GPIOA_UMB_ON) |         \
                                     PIN_MODE_INPUT(GPIOA_CAN_SILENT) |         \
                                     PIN_MODE_INPUT(GPIOA_CAN_SHDN) |         \
                                     PIN_MODE_INPUT(GPIOA_CAN_RX) |          \
                                     PIN_MODE_INPUT(GPIOA_CAN_TX) |          \
                                     PIN_MODE_ALTERNATE(GPIOA_SWDIO) |      \
                                     PIN_MODE_ALTERNATE(GPIOA_SWCLK) |      \
                                     PIN_MODE_INPUT(GPIOA_PIN15))
#define VAL_GPIOA_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOA_HALL_1) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_HALL_2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART2_TX) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_USART2_RX) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_MOTOR_ILIM) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ISO_DROGUE) |  \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ISO_MAIN) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_ROCKET_READY) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOA_UMB_ON) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_CAN_SILENT) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_CAN_SHDN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOA_CAN_RX) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_CAN_TX) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWDIO) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_SWCLK) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOA_PIN15))
#define VAL_GPIOA_OSPEEDR           (PIN_OSPEED_HIGH(GPIOA_HALL_1) |        \
                                     PIN_OSPEED_HIGH(GPIOA_HALL_2) |        \
                                     PIN_OSPEED_LOW(GPIOA_USART2_TX) |         \
                                     PIN_OSPEED_LOW(GPIOA_USART2_RX) |         \
                                     PIN_OSPEED_HIGH(GPIOA_MOTOR_ILIM) |        \
                                     PIN_OSPEED_LOW(GPIOA_ISO_DROGUE) |      \
                                     PIN_OSPEED_HIGH(GPIOA_ISO_MAIN) |       \
                                     PIN_OSPEED_HIGH(GPIOA_ROCKET_READY) |       \
                                     PIN_OSPEED_HIGH(GPIOA_UMB_ON) |        \
                                     PIN_OSPEED_HIGH(GPIOA_CAN_SILENT) |        \
                                     PIN_OSPEED_HIGH(GPIOA_CAN_SHDN) |        \
                                     PIN_OSPEED_HIGH(GPIOA_CAN_RX) |         \
                                     PIN_OSPEED_HIGH(GPIOA_CAN_TX) |         \
                                     PIN_OSPEED_HIGH(GPIOA_SWDIO) |         \
                                     PIN_OSPEED_HIGH(GPIOA_SWCLK) |         \
                                     PIN_OSPEED_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_PUPDR             (PIN_PUPDR_PULLUP(GPIOA_HALL_1) |       \
                                     PIN_PUPDR_PULLUP(GPIOA_HALL_2) |       \
                                     PIN_PUPDR_FLOATING(GPIOA_USART2_TX) |     \
                                     PIN_PUPDR_FLOATING(GPIOA_USART2_RX) |     \
                                     PIN_PUPDR_PULLUP(GPIOA_MOTOR_ILIM) |       \
                                     PIN_PUPDR_FLOATING(GPIOA_ISO_DROGUE) |  \
                                     PIN_PUPDR_PULLUP(GPIOA_ISO_MAIN) |      \
                                     PIN_PUPDR_PULLUP(GPIOA_ROCKET_READY) |      \
                                     PIN_PUPDR_FLOATING(GPIOA_UMB_ON) |       \
                                     PIN_PUPDR_PULLUP(GPIOA_CAN_SILENT) |       \
                                     PIN_PUPDR_PULLUP(GPIOA_CAN_SHDN) |       \
                                     PIN_PUPDR_PULLUP(GPIOA_CAN_RX) |        \
                                     PIN_PUPDR_PULLUP(GPIOA_CAN_TX) |        \
                                     PIN_PUPDR_PULLUP(GPIOA_SWDIO) |        \
                                     PIN_PUPDR_PULLDOWN(GPIOA_SWCLK) |      \
                                     PIN_PUPDR_PULLUP(GPIOA_PIN15))
#define VAL_GPIOA_ODR               (PIN_ODR_HIGH(GPIOA_HALL_1) |           \
                                     PIN_ODR_HIGH(GPIOA_HALL_2) |           \
                                     PIN_ODR_HIGH(GPIOA_USART2_TX) |           \
                                     PIN_ODR_HIGH(GPIOA_USART2_RX) |           \
                                     PIN_ODR_HIGH(GPIOA_MOTOR_ILIM) |           \
                                     PIN_ODR_LOW(GPIOA_ISO_DROGUE) |         \
                                     PIN_ODR_HIGH(GPIOA_ISO_MAIN) |          \
                                     PIN_ODR_HIGH(GPIOA_ROCKET_READY) |          \
                                     PIN_ODR_HIGH(GPIOA_UMB_ON) |           \
                                     PIN_ODR_HIGH(GPIOA_CAN_SILENT) |           \
                                     PIN_ODR_HIGH(GPIOA_CAN_SHDN) |           \
                                     PIN_ODR_HIGH(GPIOA_CAN_RX) |            \
                                     PIN_ODR_HIGH(GPIOA_CAN_TX) |            \
                                     PIN_ODR_HIGH(GPIOA_SWDIO) |            \
                                     PIN_ODR_HIGH(GPIOA_SWCLK) |            \
                                     PIN_ODR_HIGH(GPIOA_PIN15))
#define VAL_GPIOA_AFRL              (PIN_AFIO_AF(GPIOA_HALL_1, 0U) |        \
                                     PIN_AFIO_AF(GPIOA_HALL_2, 0U) |        \
                                     PIN_AFIO_AF(GPIOA_USART2_TX, 1U) |        \
                                     PIN_AFIO_AF(GPIOA_USART2_RX, 1U) |        \
                                     PIN_AFIO_AF(GPIOA_MOTOR_ILIM, 0U) |        \
                                     PIN_AFIO_AF(GPIOA_ISO_DROGUE, 0U) |     \
                                     PIN_AFIO_AF(GPIOA_ISO_MAIN, 0U) |       \
                                     PIN_AFIO_AF(GPIOA_ROCKET_READY, 0U))
#define VAL_GPIOA_AFRH              (PIN_AFIO_AF(GPIOA_UMB_ON, 0U) |        \
                                     PIN_AFIO_AF(GPIOA_CAN_SILENT, 0U) |        \
                                     PIN_AFIO_AF(GPIOA_CAN_SHDN, 0U) |        \
                                     PIN_AFIO_AF(GPIOA_CAN_RX, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_CAN_TX, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWDIO, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_SWCLK, 0U) |         \
                                     PIN_AFIO_AF(GPIOA_PIN15, 0U))

/*
 * GPIOB setup:
 *
 * PB0  - Battery Read          	(Input, Analog).
 * PB1  - Motor Current Sensor      (Input, Analog).
 * PB2  - PIN2                      (bah).
 * PB3  - SWO ARD_D3                (alternate 0).
 * PB4  - Deploy 1                  (Output, Digital, PWM).
 * PB5  - Deploy 2                  (Output, Digital, PWM).
 * PB6  - Motor Power Saver         (Output, Digital, Active Low).
 * PB7  - Motor Failure Sense 	    (Output, Digital, Active Low).
 * PB8  - ARD_D15                   (input pullup).
 * PB9  - ARD_D14                   (input pullup).
 * PB10 - Board Address LSB         (Input, Digital).
 * PB11 - Board Address MSB         (Input, Digital).
 * PB12 - PIN12                     (input pullup).
 * PB13 - PIN13                     (input pullup).
 * PB14 - Indicator LED             (Output, Digital, PWM?).
 * PB15 - Indicator Buzzer          (Output, Digital, PWM).
 */
#define VAL_GPIOB_MODER             (PIN_MODE_INPUT(GPIOB_BATT_READ) |         \
                                     PIN_MODE_OUTPUT(GPIOB_MOTOR_ISENSE) |           \
                                     PIN_MODE_OUTPUT(GPIOB_PIN2) |           \
                                     PIN_MODE_OUTPUT(GPIOB_SWO) |        \
                                     PIN_MODE_INPUT(GPIOB_DEPLOY_1) |         \
                                     PIN_MODE_INPUT(GPIOB_DEPLOY_2) |         \
                                     PIN_MODE_INPUT(GPIOB_MOTOR_SLEEP) |        \
                                     PIN_MODE_INPUT(GPIOB_MOTOR_FAIL) |           \
                                     PIN_MODE_INPUT(GPIOB_ARD_D15) |        \
                                     PIN_MODE_INPUT(GPIOB_ARD_D14) |        \
                                     PIN_MODE_INPUT(GPIOB_ADDRESS_LSB) |         \
                                     PIN_MODE_INPUT(GPIOB_ADDRESS_MSB) |          \
                                     PIN_MODE_OUTPUT(GPIOB_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOB_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOB_IND_LED) |          \
                                     PIN_MODE_INPUT(GPIOB_IND_BUZZ))
#define VAL_GPIOB_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOB_BATT_READ) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_MOTOR_ISENSE) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_SWO) |        \
                                     PIN_OTYPE_PUSHPULL(GPIOB_DEPLOY_2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_DEPLOY_2) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_MOTOR_SLEEP) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_MOTOR_FAIL) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOB_ARD_D15) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_ARD_D14) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOB_ADDRESS_LSB) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOB_ADDRESS_MSB) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_IND_LED) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOB_IND_BUZZ))
#define VAL_GPIOB_OSPEEDR           (PIN_OSPEED_HIGH(GPIOB_BATT_READ) |        \
                                     PIN_OSPEED_HIGH(GPIOB_MOTOR_ISENSE) |          \
                                     PIN_OSPEED_HIGH(GPIOB_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOB_SWO) |           \
                                     PIN_OSPEED_HIGH(GPIOB_DEPLOY_2) |        \
                                     PIN_OSPEED_HIGH(GPIOB_DEPLOY_2) |        \
                                     PIN_OSPEED_HIGH(GPIOB_MOTOR_SLEEP) |       \
                                     PIN_OSPEED_HIGH(GPIOB_MOTOR_FAIL) |          \
                                     PIN_OSPEED_HIGH(GPIOB_ARD_D15) |       \
                                     PIN_OSPEED_HIGH(GPIOB_ARD_D14) |       \
                                     PIN_OSPEED_HIGH(GPIOB_ADDRESS_LSB) |        \
                                     PIN_OSPEED_HIGH(GPIOB_ADDRESS_MSB) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOB_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOB_IND_LED) |         \
                                     PIN_OSPEED_HIGH(GPIOB_IND_BUZZ))
#define VAL_GPIOB_PUPDR             (PIN_PUPDR_FLOATING(GPIOB_BATT_READ) |       \
                                     PIN_PUPDR_FLOATING(GPIOB_MOTOR_ISENSE) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN2) |         \
                                     PIN_PUPDR_FLOATING(GPIOB_SWO) |          \
                                     PIN_PUPDR_PULLUP(GPIOB_DEPLOY_2) |       \
                                     PIN_PUPDR_PULLUP(GPIOB_DEPLOY_2) |       \
                                     PIN_PUPDR_PULLUP(GPIOB_MOTOR_SLEEP) |      \
                                     PIN_PUPDR_PULLUP(GPIOB_MOTOR_FAIL) |         \
                                     PIN_PUPDR_PULLUP(GPIOB_ARD_D15) |      \
                                     PIN_PUPDR_PULLUP(GPIOB_ARD_D14) |      \
                                     PIN_PUPDR_FLOATING(GPIOB_ADDRESS_LSB) |       \
                                     PIN_PUPDR_FLOATING(GPIOB_ADDRESS_MSB) |        \
                                     PIN_PUPDR_FLOATING(GPIOB_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_IND_LED) |        \
                                     PIN_PUPDR_PULLUP(GPIOB_IND_BUZZ))
#define VAL_GPIOB_ODR               (PIN_ODR_HIGH(GPIOB_BATT_READ) |           \
                                     PIN_ODR_LOW(GPIOB_MOTOR_ISENSE) |             \
                                     PIN_ODR_LOW(GPIOB_PIN2) |             \
                                     PIN_ODR_LOW(GPIOB_SWO) |              \
                                     PIN_ODR_HIGH(GPIOB_DEPLOY_2) |           \
                                     PIN_ODR_HIGH(GPIOB_DEPLOY_2) |           \
                                     PIN_ODR_HIGH(GPIOB_MOTOR_SLEEP) |          \
                                     PIN_ODR_HIGH(GPIOB_MOTOR_FAIL) |             \
                                     PIN_ODR_HIGH(GPIOB_ARD_D15) |          \
                                     PIN_ODR_HIGH(GPIOB_ARD_D14) |          \
                                     PIN_ODR_HIGH(GPIOB_ADDRESS_LSB) |           \
                                     PIN_ODR_HIGH(GPIOB_ADDRESS_MSB) |            \
                                     PIN_ODR_LOW(GPIOB_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOB_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOB_IND_LED) |            \
                                     PIN_ODR_HIGH(GPIOB_IND_BUZZ))
#define VAL_GPIOB_AFRL              (PIN_AFIO_AF(GPIOB_BATT_READ, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_MOTOR_ISENSE, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOB_SWO, 0U) |           \
                                     PIN_AFIO_AF(GPIOB_DEPLOY_2, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_DEPLOY_2, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_MOTOR_SLEEP, 0U) |       \
                                     PIN_AFIO_AF(GPIOB_MOTOR_FAIL, 0U))
#define VAL_GPIOB_AFRH              (PIN_AFIO_AF(GPIOB_ARD_D15, 0U) |       \
                                     PIN_AFIO_AF(GPIOB_ARD_D14, 0U) |       \
                                     PIN_AFIO_AF(GPIOB_ADDRESS_LSB, 0U) |        \
                                     PIN_AFIO_AF(GPIOB_ADDRESS_MSB, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_IND_LED, 0U) |         \
                                     PIN_AFIO_AF(GPIOB_IND_BUZZ, 0U))

/*
 * GPIOC setup:
 *
 * PC0  - ARD_A5 ADC1_IN11          (input pullup).
 * PC1  - ARD_A4 ADC1_IN10          (input pullup).
 * PC2  - PIN2                      (input pullup).
 * PC3  - PIN3                      (input pullup).
 * PC4  - PIN4                      (input pullup).
 * PC5  - PIN5                      (input pullup).
 * PC6  - PIN6                      (input pullup).
 * PC7  - ARD_D9                    (input pullup).
 * PC8  - PIN8                      (input pullup).
 * PC9  - PIN9                      (input pullup).
 * PC10 - PIN10                     (input pullup).
 * PC11 - PIN11                     (input pullup).
 * PC12 - PIN12                     (input pullup).
 * PC13 - BUTTON                    (input floating).
 * PC14 - OSC32_IN                  (input floating).
 * PC15 - OSC32_OUT                 (input floating).
 */
#define VAL_GPIOC_MODER             (PIN_MODE_INPUT(GPIOC_ARD_A5) |         \
                                     PIN_MODE_INPUT(GPIOC_ARD_A4) |         \
                                     PIN_MODE_INPUT(GPIOC_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOC_ARD_D9) |         \
                                     PIN_MODE_OUTPUT(GPIOC_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOC_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOC_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOC_BUTTON) |         \
                                     PIN_MODE_INPUT(GPIOC_OSC32_IN) |       \
                                     PIN_MODE_INPUT(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOC_ARD_A5) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ARD_A4) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_ARD_D9) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOC_BUTTON) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_IN) |   \
                                     PIN_OTYPE_PUSHPULL(GPIOC_OSC32_OUT))
#define VAL_GPIOC_OSPEEDR           (PIN_OSPEED_HIGH(GPIOC_ARD_A5) |        \
                                     PIN_OSPEED_HIGH(GPIOC_ARD_A4) |        \
                                     PIN_OSPEED_HIGH(GPIOC_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOC_ARD_D9) |        \
                                     PIN_OSPEED_HIGH(GPIOC_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOC_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOC_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOC_BUTTON) |        \
                                     PIN_OSPEED_HIGH(GPIOC_OSC32_IN) |      \
                                     PIN_OSPEED_HIGH(GPIOC_OSC32_OUT))
#define VAL_GPIOC_PUPDR             (PIN_PUPDR_PULLUP(GPIOC_ARD_A5) |       \
                                     PIN_PUPDR_PULLUP(GPIOC_ARD_A4) |       \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_ARD_D9) |       \
                                     PIN_PUPDR_FLOATING(GPIOC_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOC_PIN12) |        \
                                     PIN_PUPDR_FLOATING(GPIOC_BUTTON) |     \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_IN) |   \
                                     PIN_PUPDR_FLOATING(GPIOC_OSC32_OUT))
#define VAL_GPIOC_ODR               (PIN_ODR_HIGH(GPIOC_ARD_A5) |           \
                                     PIN_ODR_HIGH(GPIOC_ARD_A4) |           \
                                     PIN_ODR_HIGH(GPIOC_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOC_ARD_D9) |           \
                                     PIN_ODR_LOW(GPIOC_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOC_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOC_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOC_BUTTON) |           \
                                     PIN_ODR_HIGH(GPIOC_OSC32_IN) |         \
                                     PIN_ODR_HIGH(GPIOC_OSC32_OUT))
#define VAL_GPIOC_AFRL              (PIN_AFIO_AF(GPIOC_ARD_A5, 0U) |        \
                                     PIN_AFIO_AF(GPIOC_ARD_A4, 0U) |        \
                                     PIN_AFIO_AF(GPIOC_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_ARD_D9, 0U))
#define VAL_GPIOC_AFRH              (PIN_AFIO_AF(GPIOC_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOC_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOC_BUTTON, 0U) |        \
                                     PIN_AFIO_AF(GPIOC_OSC32_IN, 0U) |      \
                                     PIN_AFIO_AF(GPIOC_OSC32_OUT, 0U))

/*
 * GPIOD setup:
 *
 * PD0  - PIN0                      (input pullup).
 * PD1  - PIN1                      (input pullup).
 * PD2  - PIN2                      (input pullup).
 * PD3  - PIN3                      (input pullup).
 * PD4  - PIN4                      (input pullup).
 * PD5  - PIN5                      (input pullup).
 * PD6  - PIN6                      (input pullup).
 * PD7  - PIN7                      (input pullup).
 * PD8  - PIN8                      (input pullup).
 * PD9  - PIN9                      (input pullup).
 * PD10 - PIN10                     (input pullup).
 * PD11 - PIN11                     (input pullup).
 * PD12 - PIN12                     (input pullup).
 * PD13 - PIN13                     (input pullup).
 * PD14 - PIN14                     (input pullup).
 * PD15 - PIN15                     (input pullup).
 */
#define VAL_GPIOD_MODER             (PIN_MODE_INPUT(GPIOD_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOD_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOD_PIN15))
#define VAL_GPIOD_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOD_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOD_PIN15))
#define VAL_GPIOD_OSPEEDR           (PIN_OSPEED_HIGH(GPIOD_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOD_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_PUPDR             (PIN_PUPDR_PULLUP(GPIOD_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOD_PIN15))
#define VAL_GPIOD_ODR               (PIN_ODR_HIGH(GPIOD_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOD_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOD_PIN15))
#define VAL_GPIOD_AFRL              (PIN_AFIO_AF(GPIOD_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN7, 0U))
#define VAL_GPIOD_AFRH              (PIN_AFIO_AF(GPIOD_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOD_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOD_PIN15, 0U))

/*
 * GPIOE setup:
 *
 * PE0  - PIN0                      (input pullup).
 * PE1  - PIN1                      (input pullup).
 * PE2  - PIN2                      (input pullup).
 * PE3  - PIN3                      (input pullup).
 * PE4  - PIN4                      (input pullup).
 * PE5  - PIN5                      (input pullup).
 * PE6  - PIN6                      (input pullup).
 * PE7  - PIN7                      (input pullup).
 * PE8  - PIN8                      (input pullup).
 * PE9  - PIN9                      (input pullup).
 * PE10 - PIN10                     (input pullup).
 * PE11 - PIN11                     (input pullup).
 * PE12 - PIN12                     (input pullup).
 * PE13 - PIN13                     (input pullup).
 * PE14 - PIN14                     (input pullup).
 * PE15 - PIN15                     (input pullup).
 */
#define VAL_GPIOE_MODER             (PIN_MODE_INPUT(GPIOE_PIN0) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN1) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOE_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOE_PIN15))
#define VAL_GPIOE_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOE_PIN0) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN1) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOE_PIN15))
#define VAL_GPIOE_OSPEEDR           (PIN_OSPEED_HIGH(GPIOE_PIN0) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN1) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOE_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_PUPDR             (PIN_PUPDR_PULLUP(GPIOE_PIN0) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN1) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOE_PIN15))
#define VAL_GPIOE_ODR               (PIN_ODR_HIGH(GPIOE_PIN0) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN1) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOE_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOE_PIN15))
#define VAL_GPIOE_AFRL              (PIN_AFIO_AF(GPIOE_PIN0, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN1, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN7, 0U))
#define VAL_GPIOE_AFRH              (PIN_AFIO_AF(GPIOE_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOE_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOE_PIN15, 0U))

/*
 * GPIOF setup:
 *
 * PF0  - OSC_IN                    (input floating).
 * PF1  - OSC_OUT                   (input floating).
 * PF2  - PIN2                      (input pullup).
 * PF3  - PIN3                      (input pullup).
 * PF4  - PIN4                      (input pullup).
 * PF5  - PIN5                      (input pullup).
 * PF6  - PIN6                      (input pullup).
 * PF7  - PIN7                      (input pullup).
 * PF8  - PIN8                      (input pullup).
 * PF9  - PIN9                      (input pullup).
 * PF10 - PIN10                     (input pullup).
 * PF11 - PIN11                     (input pullup).
 * PF12 - PIN12                     (input pullup).
 * PF13 - PIN13                     (input pullup).
 * PF14 - PIN14                     (input pullup).
 * PF15 - PIN15                     (input pullup).
 */
#define VAL_GPIOF_MODER             (PIN_MODE_INPUT(GPIOF_OSC_IN) |         \
                                     PIN_MODE_INPUT(GPIOF_OSC_OUT) |        \
                                     PIN_MODE_INPUT(GPIOF_PIN2) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN3) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN4) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN5) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN6) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN7) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN8) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN9) |           \
                                     PIN_MODE_INPUT(GPIOF_PIN10) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN11) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN12) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN13) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN14) |          \
                                     PIN_MODE_INPUT(GPIOF_PIN15))
#define VAL_GPIOF_OTYPER            (PIN_OTYPE_PUSHPULL(GPIOF_OSC_IN) |     \
                                     PIN_OTYPE_PUSHPULL(GPIOF_OSC_OUT) |    \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN2) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN3) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN4) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN5) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN6) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN7) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN8) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN9) |       \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN10) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN11) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN12) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN13) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN14) |      \
                                     PIN_OTYPE_PUSHPULL(GPIOF_PIN15))
#define VAL_GPIOF_OSPEEDR           (PIN_OSPEED_HIGH(GPIOF_OSC_IN) |        \
                                     PIN_OSPEED_HIGH(GPIOF_OSC_OUT) |       \
                                     PIN_OSPEED_HIGH(GPIOF_PIN2) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN3) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN4) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN5) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN6) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN7) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN8) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN9) |          \
                                     PIN_OSPEED_HIGH(GPIOF_PIN10) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN11) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN12) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN13) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN14) |         \
                                     PIN_OSPEED_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_PUPDR             (PIN_PUPDR_FLOATING(GPIOF_OSC_IN) |     \
                                     PIN_PUPDR_FLOATING(GPIOF_OSC_OUT) |    \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN2) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN3) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN4) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN5) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN6) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN7) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN8) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN9) |         \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN10) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN11) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN12) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN13) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN14) |        \
                                     PIN_PUPDR_PULLUP(GPIOF_PIN15))
#define VAL_GPIOF_ODR               (PIN_ODR_HIGH(GPIOF_OSC_IN) |           \
                                     PIN_ODR_HIGH(GPIOF_OSC_OUT) |          \
                                     PIN_ODR_HIGH(GPIOF_PIN2) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN3) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN4) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN5) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN6) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN7) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN8) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN9) |             \
                                     PIN_ODR_HIGH(GPIOF_PIN10) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN11) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN12) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN13) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN14) |            \
                                     PIN_ODR_HIGH(GPIOF_PIN15))
#define VAL_GPIOF_AFRL              (PIN_AFIO_AF(GPIOF_OSC_IN, 0U) |        \
                                     PIN_AFIO_AF(GPIOF_OSC_OUT, 0U) |       \
                                     PIN_AFIO_AF(GPIOF_PIN2, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN3, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN4, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN5, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN6, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN7, 0U))
#define VAL_GPIOF_AFRH              (PIN_AFIO_AF(GPIOF_PIN8, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN9, 0U) |          \
                                     PIN_AFIO_AF(GPIOF_PIN10, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN11, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN12, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN13, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN14, 0U) |         \
                                     PIN_AFIO_AF(GPIOF_PIN15, 0U))

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#if !defined(_FROM_ASM_)
#ifdef __cplusplus
extern "C" {
#endif
  void boardInit(void);
#ifdef __cplusplus
}
#endif
#endif /* _FROM_ASM_ */

#endif /* BOARD_H */
