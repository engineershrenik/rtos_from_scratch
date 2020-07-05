/***************************************************************************//**
 * @file rfs.h
 * @brief this file contains declaration for rfs rtos
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

#ifndef __RFS_H__
#define __RFS_H__

extern volatile uint32_t SysTick_Cnt;

typedef struct task_descr{
    uint32_t duration;          //Task Duration
    uint32_t time_elapsed;      //time elapsed since task is started execution
    uint8_t task_priority;      //task priority
    void (*task_func)(void);    //Func to be called when executing
}task_descr_t;

#endif
