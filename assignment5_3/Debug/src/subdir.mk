################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Employee.cpp \
../src/Manager.cpp \
../src/SalesManager.cpp \
../src/Salesman.cpp \
../src/main.cpp 

OBJS += \
./src/Employee.o \
./src/Manager.o \
./src/SalesManager.o \
./src/Salesman.o \
./src/main.o 

CPP_DEPS += \
./src/Employee.d \
./src/Manager.d \
./src/SalesManager.d \
./src/Salesman.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


