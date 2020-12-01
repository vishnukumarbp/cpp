################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/First\ cpp.cpp 

OBJS += \
./src/First\ cpp.o 

CPP_DEPS += \
./src/First\ cpp.d 


# Each subdirectory must supply rules for building sources it contributes
src/First\ cpp.o: ../src/First\ cpp.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/First cpp.d" -MT"src/First\ cpp.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


