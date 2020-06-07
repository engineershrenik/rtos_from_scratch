
# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/rfs_rtos/rfs_sched.c \
../src/rfs_rtos/rfs_task.c 

OBJS += \
./src/rfs_rtos/rfs_sched.o \
./src/rfs_rtos/rfs_task.o 

C_DEPS += \
./src/rfs_rtos/rfs_sched.d \
./src/rfs_rtos/rfs_task.d 


# Each subdirectory must supply rules for building sources it contributes
src/rfs_rtos/rfs_sched.o: ../src/rfs_rtos/rfs_sched.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m0plus -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32ZG222F32=1' -I"../include" -O0 -Wall -c -fmessage-length=0 -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -MMD -MP -MF"src/rfs_rtos/rfs_sched.d" -MT"src/rfs_rtos/rfs_sched.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/rfs_rtos/rfs_task.o: ../src/rfs_rtos/rfs_task.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU ARM C Compiler'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m0plus -mthumb -std=c99 '-DDEBUG_EFM=1' '-DEFM32ZG222F32=1' -I"../include" -O0 -Wall -c -fmessage-length=0 -mno-sched-prolog -fno-builtin -ffunction-sections -fdata-sections -MMD -MP -MF"src/rfs_rtos/rfs_task.d" -MT"src/rfs_rtos/rfs_task.o" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


