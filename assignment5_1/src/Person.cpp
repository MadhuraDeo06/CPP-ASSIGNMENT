/*
 * Person.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#include"../include/Person.h"

Person::Person():name(" "),address(" "),birth_date(0,0,0)
{	}
Person::Person(const char* name, const char* address, Date birth_date):
		birth_date(birth_date)
{
	strcpy(this->name,name);
	strcpy(this->address, address);
}
void Person::setName(char* name)
{
	strcpy(this->name,name);
}
void Person::setAddress(char* address)
{
	strcpy(this->address,address);
}
void Person::setDate(Date birth_date)
{
	this->birth_date=birth_date;
}
char* Person::getName(void)
{
	return this->name;
}
char* Person::getAddress(void)
{
	return this->address;
}
Date Person::getDate(void)
{
	return this->birth_date;
}
void Person:: acceptPerson(void)
{
	cout<<"Enter Name ::"<<endl;
	cin>>this->name;

	cout<<"Enter Address :: "<<endl;
	cin>>this->address;

	cout<<"Enter birthdate ::"<<endl;
	birth_date.acceptRecord();

}
void Person:: displayPerson(void)
{
	cout<<"Name  :: "<<this->name<<endl;
	cout<<"Address :: "<<this->address<<endl;
	birth_date.printRecord();
}
