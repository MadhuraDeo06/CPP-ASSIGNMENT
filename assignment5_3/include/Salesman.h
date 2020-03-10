/*
 * Salesman.h
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#ifndef SALESMAN_H_
#define SALESMAN_H_

#include<iostream>
using namespace std;
#include"../include/Employee.h"
class Salesman:public Employee
{
private:
	float comm;
public:
	Salesman();
	Salesman(int id, float sal, float comm);
	float get_comm();
	void set_comm(float comm);
	void display(void);
	void accept(void);
	~Salesman();
protected:
	void displaySalesman(void);
	void acceptSalesman(void);

};



#endif /* SALESMAN_H_ */
