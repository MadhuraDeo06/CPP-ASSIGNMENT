/*
 * Circle.h
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include<iostream>
using namespace std;
#include"../include/Shape.h"
class Circle:public Shape
{
private:
	float radius;
public:
	Circle();
	Circle(float radius);
	float getRadius(void)const;
	void setRadius(float radius);
	float calculateArea(void);
	float calculatePerimeter(void);
	void accept(void);
	void print(void);
};


#endif /* CIRCLE_H_ */
