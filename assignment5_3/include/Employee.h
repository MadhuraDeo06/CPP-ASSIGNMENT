/*
 * Employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_



#include<cstring>
#include<iostream>
class Employee
{
private:
	int id;
	float sal;

public:
	Employee();
	Employee(int id, float sal);
	void setId(int id);
	void setSal(float sal);
	int getId(void);
	float getSal(void);
	void accept(void);
	void print(void);
};


#endif /* EMPLOYEE_H_ */
