/*
 * Manager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */
#include"../include/Manager.h"

Manager::Manager():bonus(0)
{	}
Manager::Manager(int id, float sal, float bonus):Employee(id, sal)
{
	cout<<"Manager :"<<endl;
	this->bonus=bonus;
}
float Manager::get_bonus()
{
	return this->bonus;
}
void Manager::set_bonus(float bonus)
{
	this->bonus = bonus;
}
void Manager::display(void)
{
	//this->display();
	Employee::print();
	cout << "bonus: " << this->bonus << endl;
}
void Manager::accept(void)
{
	Employee::accept();
	cout<<"Enter bonus :: "<<endl;
	cin>>this->bonus;
}
void Manager::displayManager(void)
{
	cout << "bonus: " << this->bonus << endl;
}
void Manager::acceptManager(void)
{
	cout<<"Enter bonus :: "<<endl;
	cin>>this->bonus;
}

Manager::~Manager() {
}


