################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/rfs_rtos/subdir.mk
-include src/app/subdir.mk
-include emlib/subdir.mk
-include CMSIS/EFM32ZG/subdir.mk
-include BSP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: rtos_from_scratch.axf

# Tool invocations
rtos_from_scratch.axf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GNU ARM C Linker'
	arm-none-eabi-gcc -g3 -gdwarf-2 -mcpu=cortex-m0plus -mthumb -T "rtos_from_scratch.ld" -Xlinker --gc-sections -Xlinker -Map="rtos_from_scratch.map" --specs=nano.specs -o rtos_from_scratch.axf "./BSP/bsp_stk_leds.o" "./CMSIS/EFM32ZG/startup_gcc_efm32zg.o" "./CMSIS/EFM32ZG/system_efm32zg.o" "./emlib/em_assert.o" "./emlib/em_cmu.o" "./emlib/em_core.o" "./emlib/em_emu.o" "./emlib/em_gpio.o" "./src/app/blink.o" "./src/rfs_rtos/rfs_sched.o" "./src/rfs_rtos/rfs_task.o" -Wl,--start-group -lgcc -lc -lnosys -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

	@echo 'Building hex file: rtos_from_scratch.hex'
	arm-none-eabi-objcopy -O ihex "rtos_from_scratch.axf" "rtos_from_scratch.hex"
	@echo ' '

	@echo 'Building bin file: rtos_from_scratch.bin'
	arm-none-eabi-objcopy -O binary "rtos_from_scratch.axf" "rtos_from_scratch.bin"
	@echo ' '

	@echo 'Building s37 file: rtos_from_scratch.s37'
	arm-none-eabi-objcopy -O srec "rtos_from_scratch.axf" "rtos_from_scratch.s37"
	@echo ' '

	@echo 'Running size tool'
	arm-none-eabi-size "rtos_from_scratch.axf" -A
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) rtos_from_scratch.axf
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
