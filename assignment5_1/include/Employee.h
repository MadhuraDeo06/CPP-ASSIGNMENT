/*
 * Employee.h
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_


#include"../include/Date.h"
#include<cstring>
#include"../include/Person.h"
class Employee : public Person
{
private:
	int id;
	float sal;
	char dept[40];
	Date joining_date;
public:
	Employee();
	Employee(int id, float sal, char *dept, Date joining_date);
	void setId(int id);
	void setSal(float sal);
	void setDept(char *dept);
	void setJoiningDate(Date joiningDate);
	int getId(void);
	float getSal(void);
	char* getDept(void);
	Date getJoiningDate(void);
	void acceptEmployee(void);
	void printEmployee(void);
};


#endif /* EMPLOYEE_H_ */
