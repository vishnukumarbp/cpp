################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/26\ alphabets.cpp 

OBJS += \
./src/26\ alphabets.o 

CPP_DEPS += \
./src/26\ alphabets.d 


# Each subdirectory must supply rules for building sources it contributes
src/26\ alphabets.o: ../src/26\ alphabets.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/26 alphabets.d" -MT"src/26\ alphabets.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


