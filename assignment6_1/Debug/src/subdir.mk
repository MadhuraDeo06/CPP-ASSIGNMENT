################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Books.cpp \
../src/Product.cpp \
../src/Tapes.cpp \
../src/main.cpp 

OBJS += \
./src/Books.o \
./src/Product.o \
./src/Tapes.o \
./src/main.o 

CPP_DEPS += \
./src/Books.d \
./src/Product.d \
./src/Tapes.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


