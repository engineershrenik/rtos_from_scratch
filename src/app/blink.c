/***************************************************************************//**
 * @file
 * @brief Simple LED Blink Demo for EFM32ZG_STK3200
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#include "em_device.h"
#include <stdint.h>
#include "em_chip.h"
#include "em_cmu.h"
#include "bsp.h"
#include "../rfs_rtos/rfs.h"

static void Delay(uint32_t dlyTicks);

/***************************************************************************//**
 * @brief Delays number of SysTick_Cnt Systicks (typically 1 ms)
 * @param dlyTicks Number of ticks to delay
 ******************************************************************************/
static void Delay(uint32_t dlyTicks)
{
  uint32_t curTicks;

  curTicks = SysTick_Cnt;
  while ((SysTick_Cnt - curTicks) < dlyTicks) ;
}

/***************************************************************************//**
 * @brief  Main function
 ******************************************************************************/
int main(void)
{
  int count = 0;

  /* Chip errata */
  CHIP_Init();

  /* Setup SysTick Timer for 1 msec interrupts  */
  if (SysTick_Config(CMU_ClockFreqGet(cmuClock_CORE) / 1000)) {
    while (1) ;
  }

  /* Initialize LED driver */
  BSP_LedsInit();

  /* Infinite blink loop */
  while (1) {
    count++;
    BSP_LedsSet(count);
    Delay(250);
  }
}
