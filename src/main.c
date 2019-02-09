/*******************************************************************************
 * @file    main.c
 * @author  Rashad Shubita
 * @email   shubitarashad@gmail.com
 * @date    08.02.2019
 *
 * @brief   main application called after startup
 * @note
 *
@verbatim
Copyright (C) 2019, Rashad Shubita

This program is free software: you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or any later version.

This program is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program.  If not, see <http://www.gnu.org/licenses/>.
@endverbatim
*******************************************************************************/


/* Includes ------------------------------------------------------------------*/
#include "exti.h"
#include "gpio.h"
#include "nvic.h"
#include "stm32f10x.h"
#include "SysTick.h"


/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/


/**
**===========================================================================
**
**  Abstract: main program
**
**===========================================================================
*/
int main(void)
{
	SysTick_Init();
    GPIO_OnBoard_Init_LED();

    GPIO_Init_PB();
    EXTI_Init_PB();
    IRQ_Init();

    /* Clear PRIMASK, enable IRQs */
    __enable_irq();

  /* Infinite loop */
  while (1)
  {
//    /* Trigger EXTI0 */
//    EXTI->SWIER = EXTI_SWIER_SWIER0;
  }
}


