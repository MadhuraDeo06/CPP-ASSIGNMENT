/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#include<iostream>
using namespace std;

#include"../include/Date.h"
#include"../include/Person.h"
#include"../include/Employee.h"

int main(void)
{
	Employee emp;
	emp.acceptEmployee();
	emp.printEmployee();
	return 0;
}
