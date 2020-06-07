
# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/app/blink.c 

OBJS += \
./src/app/blink.o 

C_DEPS += \
./src/app/blink.d 


# Each subdirectory must supply rules for building sources it contributes
src/app/blink.o: ../src/app/blink.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m0plus -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32ZG222F32=1' -I"../include/" -O0 -Wall -c -fmessage-length=0 -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -MMD -MP -MF"src/app/blink.d" -MT"src/app/blink.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


