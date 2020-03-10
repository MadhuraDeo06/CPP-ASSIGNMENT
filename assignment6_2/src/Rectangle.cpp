/*
 * Rectangle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */


#include"../include/Rectangle.h"

Rectangle::Rectangle()
{
	this->length=0;
	this->breadth=0;
}
Rectangle::Rectangle(float length,float breadth)
{
	this->length=length;
	this->breadth=breadth;
}
float Rectangle:: getLength(void)const
{
	return this->length;
}
void Rectangle::setBreadth(float breadth)
{
	this->breadth=breadth;
}
float Rectangle:: getBreadth(void)const
{
	return this->breadth;
}
void Rectangle::setLength(float length)
{
	this->length=length;
}
float Rectangle::calculateArea(void)
{
	float area = this->length * this->breadth;
	return area;
}
float Rectangle::calculatePerimeter(void)
{
	float perimeter = 2 * ( this->length + this->breadth );
	return perimeter;
}
void Rectangle::accept(void)
{
	Shape::accept();
	cout<<"Enter length :: "<<endl;
	cin>>this->length;
	cout<<"Enter breadth :: "<<endl;
	cin>>this->breadth;
}
void Rectangle::print(void)
{
	Shape::print();
	cout<<"length :: "<<this->length<<endl;
	cout<<"breadth :: "<<this->breadth<<endl;
	cout<<"Area of Rectangle :: "<<this->calculateArea()<<endl;
	cout<<"Perimeter of Rectangle :: "<<this->calculatePerimeter()<<endl;
}


