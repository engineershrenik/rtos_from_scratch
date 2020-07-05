/***************************************************************************//**
 * @file rfs_sched.c
 * @brief this file contains scheduler code for rfs rtos
 *******************************************************************************

 * This file is part of the GPLv3 distribution
 * (https://github.com/engineershrenik/rtos_from_scratch) Copyright (c) 2020
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "em_device.h"
#include <stdint.h>
#include "em_chip.h"
#include "em_cmu.h"
#include "bsp.h"



volatile uint32_t SysTick_Cnt;

void rfs_scheduler_start(void)
{
    //Use system tick timer here
    //Use scheduler callback function to schedule the task
}

/*
 * checks for task state, priority and carries the context switching
 * based on the decision to switch to the task
 */
void rfs_scheduler_callback(void /* rtos TCB should be passed as argument
to be modified as it is implemented later*/)
{
    //check Table for task state
    //check for task priority
    //check for event
    //decide the next task to be switched to
    //call context switcher to save the context of running task and start context of new tasl
}

/**************************************************************************//**
 * @brief SysTick_Handler
 * Interrupt Service Routine for system tick counter
 *****************************************************************************/
void SysTick_Handler(void)
{
    SysTick_Cnt++;
}
