/*
 * Books.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */


#include"../include/Books.h"
Books::Books()
{
	this->pages=pages;
}
Books::Books(char* title, float price, int pages):Product(title, price)
{
	this->pages=pages;
}
void Books::setPages(int pages)
{
	this->pages=pages;
}
int Books::getPages(int pages)
{
	return this->pages;
}
void Books::accept(void)
{
	Product::accept();
	cout<<"Enter No.of Pages ::"<<endl;
	cin>>this->pages;
}
void Books::display(void)
{
	Product::display();
	cout<<"No.of Pages :: "<<this->pages<<endl;
}
float Books::Discount(void)
{
	return this->getPrice() * 0.10;
}
Books::~Books()
{

}


