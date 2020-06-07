
# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../CMSIS/EFM32ZG/startup_gcc_efm32zg.s 

C_SRCS += \
../CMSIS/EFM32ZG/system_efm32zg.c 

OBJS += \
./CMSIS/EFM32ZG/startup_gcc_efm32zg.o \
./CMSIS/EFM32ZG/system_efm32zg.o 

C_DEPS += \
./CMSIS/EFM32ZG/system_efm32zg.d 


# Each subdirectory must supply rules for building sources it contributes
CMSIS/EFM32ZG/%.o: ../CMSIS/EFM32ZG/%.s
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM Assembler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m0plus -mthumb -c -x assembler-with-cpp -I"../include" '-DEFM32ZG222F32=1' -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

CMSIS/EFM32ZG/system_efm32zg.o: ../CMSIS/EFM32ZG/system_efm32zg.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m0plus -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32ZG222F32=1' -I"../include" -O0 -Wall -c -fmessage-length=0 -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -MMD -MP -MF"CMSIS/EFM32ZG/system_efm32zg.d" -MT"CMSIS/EFM32ZG/system_efm32zg.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


