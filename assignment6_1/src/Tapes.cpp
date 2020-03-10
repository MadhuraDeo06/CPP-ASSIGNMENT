/*
 * Tapes.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */

#include"../include/Tapes.h"

Tapes::Tapes()
{
	this->duration=duration;
}
Tapes::Tapes(char* title, float price, int duration):Product(title, price)
{
	this->duration=duration;
}
void Tapes::setDuration(int duration)
{
	this->duration=duration;
}
int Tapes::getDuration(int duration)
{
	return this->duration;
}
void Tapes::accept(void)
{
	Product::accept();
	cout<<"Enter Duration of Tape ::"<<endl;
	cin>>this->duration;
}
void Tapes::display(void)
{
	Product::display();
	cout<<"Duration :: "<<this->duration<<endl;
}
float Tapes::Discount(void)
{
	return this->getPrice() * 0.05;
}
Tapes::~Tapes()
{

}


