/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */


#include<iostream>
using namespace std;
#include"../include/Manager.h"
#include"../include/Salesman.h"
#include"../include/SalesManager.h"

int main(void)
{
	SalesManager sm;
	sm.accept();
	sm.display();
	return 0;
}


