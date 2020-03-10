/*
 * Rectangle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include<iostream>
using namespace std;
#include"../include/Shape.h"

class Rectangle:public Shape
{
private:
	float length;
	float breadth;
public:
	Rectangle();
	Rectangle(float length, float breadth);
	float getLength(void)const;
	void setLength(float length);
	float getBreadth(void)const;
	void setBreadth(float breadth);
	float calculateArea(void);
	float calculatePerimeter(void);
	void accept(void);
	void print(void);
};

#endif /* RECTANGLE_H_ */
