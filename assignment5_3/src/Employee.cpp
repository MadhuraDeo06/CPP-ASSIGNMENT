/*
 * Employee.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#include"../include/Employee.h"
#include<iostream>
using namespace std;
Employee::Employee():id(0),sal(0)
{	}
Employee::Employee(int id, float sal)
{
	cout<<"Employee :"<<endl;
	this->id=id;
	this->sal=sal;
}
void Employee::setId(int id)
{
	this->id=id;
}
void Employee::setSal(float sal)
{
	this->sal=sal;
}

int Employee::getId(void)
{
	return this->id;
}
float Employee::getSal(void)
{
	return this->sal;
}
void Employee::accept(void)
{
	cout<<"Enter id :: "<<endl;
	cin>>this->id;

	cout<<"Enter Sal :: "<<endl;
	cin>>this->sal;
}

void Employee::print(void)
{
	cout<<"Id :: "<<this->id<<endl;

	cout<<"Sal :: "<<this->sal<<endl;
}

