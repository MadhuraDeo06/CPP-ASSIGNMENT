/*
 * Circle.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */

#include"../include/Circle.h"

Circle::Circle()
{
	this->radius=0;
}
Circle::Circle(float radius)
{
	this->radius=radius;
}
float Circle:: getRadius(void)const
{
	return this->radius;
}
void Circle::setRadius(float radius)
{
	this->radius=radius;
}
float Circle::calculateArea(void)
{
	float area = (3.14) * this->radius *this->radius;
	return area;
}
float Circle::calculatePerimeter(void)
{
	float perimeter = 2 * 3.14 * radius;
	return perimeter;
}
void Circle::accept(void)
{
	Shape::accept();
	cout<<"Enter radius :: "<<endl;
	cin>>this->radius;
}
void Circle::print(void)
{
	Shape::print();
	cout<<"Radius :: "<<this->radius<<endl;
	cout<<"Area of Circle :: "<<this->calculateArea()<<endl;
	cout<<"Circumference of Circle :: "<<this->calculatePerimeter()<<endl;
}

