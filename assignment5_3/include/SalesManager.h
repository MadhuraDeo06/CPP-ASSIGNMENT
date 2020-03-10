/*
 * SalesManager.h
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#ifndef SALESMANAGER_H_
#define SALESMANAGER_H_


#include"../include/Manager.h"
#include"../include/Salesman.h"
class SalesManager:public Manager, public Salesman
{
public:
	SalesManager();
	SalesManager(int id, float sal, float bonus, float comm);
	void display(void);
	void accept(void);
};


#endif /* SALESMANAGER_H_ */
