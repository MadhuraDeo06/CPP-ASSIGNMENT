/*
 * main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */
#include <iostream>
using namespace std;
#include "../include/Product.h"
#include "../include/Books.h"
#include "../include/Tapes.h"
enum menu
{
	EXIT, BOOKS, TAPES
};
int menuList(void)
{
	int choice;

	return choice;
}


int main(void)
{
	int choice,size, index;

	cout<<"Enter no.of products Required ::"<<endl;
	cin>>size;
	Product *ptr[size];
	for(index=0;index<size;++index)
	{
		cout<<"0.Exit "<<endl;
		cout<<"1.Books "<<endl;
		cout<<"2.Tapes "<<endl;
		cout<<"Enter choice "<<endl;
		cin>>choice;
		switch(choice)
		{
		case BOOKS:
			ptr[index]=new Books;
			break;
		case TAPES:
			ptr[index]=new Tapes;
			break;
		}
		ptr[index]->accept();

	}
	for(index=0;index<size;index++)
	{
		cout<<"Product Information ["<<index<<"]"<<endl;
		ptr[index]->display();
		cout<<"Discount :: "<<ptr[index]->Discount()<<endl;
	}
	float bill;
	for(index=0;index<size;index++)
		bill=ptr[index]->getPrice()-ptr[index]->Discount();
	cout<<endl;
	cout<<"Total bill = "<<bill;

	for(index=0;index<size;index++)
		delete ptr[index];

	return 0;
}


