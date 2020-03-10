################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Circle.cpp \
../src/Main.cpp \
../src/Rectangle.cpp \
../src/Shape.cpp \
../src/Square.cpp 

OBJS += \
./src/Circle.o \
./src/Main.o \
./src/Rectangle.o \
./src/Shape.o \
./src/Square.o 

CPP_DEPS += \
./src/Circle.d \
./src/Main.d \
./src/Rectangle.d \
./src/Shape.d \
./src/Square.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


