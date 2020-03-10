/*
 * Manager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#ifndef MANAGER_H_
#define MANAGER_H_

#include"../include/Employee.h"
#include<iostream>
using namespace std;
class Manager:public Employee
{
private:
	float bonus;
public:
	Manager();
	Manager(int id, float sal, float bonus);
	float get_bonus();
	void set_bonus(float bonus);
	void display(void);
	void accept(void);
	~Manager();
protected:
	void displayManager(void);
	void acceptManager(void);
};




#endif /* MANAGER_H_ */
