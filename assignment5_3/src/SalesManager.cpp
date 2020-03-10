/*
 * SalesManager.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#ifndef SALESMANAGER_CPP_
#define SALESMANAGER_CPP_

#include"../include/SalesManager.h"
SalesManager::SalesManager()
{

}
SalesManager::SalesManager(int id, float sal, float bonus, float comm):
		Manager(id, sal, bonus), Salesman(id,sal,comm)
{
	cout<<"salesmanager :"<<endl;

}
void SalesManager::display(void)
{
	Manager::display();
	Salesman::display();
}
void SalesManager::accept(void)
{
	Manager::accept();
	Salesman::accept();
}


#endif /* SALESMANAGER_CPP_ */
