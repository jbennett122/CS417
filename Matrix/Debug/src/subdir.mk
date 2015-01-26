################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Matrix.cpp \
../src/addMatrix.cpp \
../src/brackets.cpp \
../src/ttt.cpp 

OBJS += \
./src/Matrix.o \
./src/addMatrix.o \
./src/brackets.o \
./src/ttt.o 

CPP_DEPS += \
./src/Matrix.d \
./src/addMatrix.d \
./src/brackets.d \
./src/ttt.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


