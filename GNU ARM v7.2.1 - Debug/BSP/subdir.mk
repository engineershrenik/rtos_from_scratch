# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../BSP/bsp_stk_leds.c 

OBJS += \
./BSP/bsp_stk_leds.o 

C_DEPS += \
./BSP/bsp_stk_leds.d 


# Each subdirectory must supply rules for building sources it contributes
BSP/bsp_stk_leds.o: ../BSP/bsp_stk_leds.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m0plus -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32ZG222F32=1' -I"../include" -O0 -Wall -c -fmessage-length=0 -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -MMD -MP -MF"BSP/bsp_stk_leds.d" -MT"BSP/bsp_stk_leds.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


