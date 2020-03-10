/*
 * Employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */


#include"../include/Employee.h"
Employee::Employee():id(0),sal(0),dept(" "),joining_date(0,0,0)
{	}
Employee::Employee(int id, float sal, char *dept, Date joining_date):joining_date(joining_date)
{
	this->id=id;
	this->sal=sal;
	strcpy(this->dept,dept);
}
void Employee::setId(int id)
{
	this->id=id;
}
void Employee::setSal(float sal)
{
	this->sal=sal;
}
void Employee::setDept(char *dept)
{
	strcpy(this->dept,dept);
}
void Employee::setJoiningDate(Date joiningDate)
{
	this->joining_date=joiningDate;
}
int Employee::getId(void)
{
	return this->id;
}
float Employee::getSal(void)
{
	return this->sal;
}
char* Employee::getDept(void)
{
	return this->dept;
}
Date Employee:: getJoiningDate(void)
{
	return this->joining_date;
}
void Employee::acceptEmployee(void)
{
	cout<<"Enter id :: "<<endl;
	cin>>this->id;

	cout<<"Enter Sal :: "<<endl;
	cin>>this->sal;

	cout<<"Enter DeptName :: "<<endl;
	cin>>this->dept;

	cout<<"Enter Joining date :: "<<endl;
	joining_date.acceptRecord();
}

void Employee::printEmployee(void)
{
	cout<<"Id :: "<<this->id<<endl;

	cout<<"]Sal :: "<<this->sal<<endl;

	cout<<"DeptName :: "<<this->dept<<endl;

	cout<<"Joining date :: ";
	joining_date.printRecord();
}

