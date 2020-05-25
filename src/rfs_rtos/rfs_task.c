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



bool rfs_task_create(/*callback func, Prio, Time, Task name*/)
{
	//create and Fill TCB here
	return 0;
}

bool rfs_task_remove(/*Task tcb*/)
{
	return 0;
}

bool rfs_task_suspend(/*task tcb*/)
{
	return 0;
}

bool rfs_task_resume(/*task tcb*/)
{
	return 0;
}
