/*
 * Person.h
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#ifndef PERSON_H_
#define PERSON_H_

#include"../include/Date.h"
#include<cstring>
class Person
{
private:
	 char name[40];
	 char address[100];
	 Date birth_date;
public:
	 Person();
	 Person(const char* name, const char* address, Date birth_date);
	 void setName(char* name);
	 void setAddress(char* address);
	 void setDate(Date birth_date);
	 char* getName(void);
	 char* getAddress(void);
	 Date getDate(void);
	 void acceptPerson(void);
	 void displayPerson(void);
};



#endif /* PERSON_H_ */
