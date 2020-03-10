/*
 * Square.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */


#include"../include/Square.h"
Square::Square()
{
	this->side=0;
}
Square::Square(float side)
{
	this->side=side;
}
float Square:: getSide(void)const
{
	return this->side;
}
void Square::setSide(float side)
{
	this->side=side;
}
float Square::calculateArea(void)
{
	float area = this->side *this->side;
	return area;
}
float Square::calculatePerimeter(void)
{
	float perimeter = 4 * this->side;
	return perimeter;
}
void Square::accept(void)
{
	Shape::accept();
	cout<<"Enter side :: "<<endl;
	cin>>this->side;
}
void Square::print(void)
{
	Shape::print();
	cout<<"side :: "<<this->side<<endl;
	cout<<"Area of Square :: "<<this->calculateArea()<<endl;
	cout<<"Perimeter of Square :: "<<this->calculatePerimeter()<<endl;
}




