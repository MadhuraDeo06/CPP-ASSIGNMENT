/*
 * Salesman.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#include"../include/Salesman.h"

Salesman::Salesman():comm(0)
{	}
Salesman::Salesman(int id, float sal, float comm):Employee(id, sal)
{
	cout<<"Salesman :"<<endl;
	this->comm=comm;
}
float Salesman::get_comm()
{
	return this->comm;
}
void Salesman::set_comm(float comm)
{
	this->comm = comm;
}
void Salesman::display(void)
{
	//this->display();
	Employee::print();
	cout << "comm: " << this->comm << endl;
}
void Salesman::accept(void)
{
	Employee::accept();
	cout<<"Enter comm :: "<<endl;
	cin>>this->comm;
}
void Salesman::displaySalesman(void)
{
	cout << "comm: " << this->comm << endl;
}
void Salesman::acceptSalesman(void)
{
	cout<<"Enter comm :: "<<endl;
	cin>>this->comm;
}

Salesman::~Salesman()
{	}



