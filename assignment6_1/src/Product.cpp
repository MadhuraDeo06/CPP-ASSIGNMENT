/*
 * Product.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */


#include"../include/Product.h"
#include<cstring>

Product::Product():title(" "),price(0)
{	}
Product::Product(const char* title, float price)
{
	strcpy(this->title,title);
	this->price=price;
}
void Product::setTitle(const char* title)
{
	strcpy(this->title,title);
}
void Product::setPrice(float price)
{
	this->price=price;
}
/*const char* Product::getTitle(void)const
{
	return this->title;
}*/
float Product::getPrice(void)const
{
	return this->price;
}
void Product::accept(void)
{
	cout<<"Enter Title :: "<<endl;
	cin>>this->title;

	cout<<"Enter Price ::"<<endl;
	cin>>this->price;
}
void Product::display(void)
{
	cout<<"Title :: "<<this->title<<endl;

	cout<<"Price ::"<<this->price<<endl;
}
//virtual float Product::Discount()=0;

Product::~Product()
{

}


