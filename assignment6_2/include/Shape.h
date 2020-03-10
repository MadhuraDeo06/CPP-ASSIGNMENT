/*
 * Shape.h
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */

#ifndef SHAPE_H_
#define SHAPE_H_

#include<iostream>
using namespace std;

class Shape
{
public:
	virtual void accept(void)=0;
	virtual void print(void)=0;
	virtual float calculateArea(void)=0;
	virtual float calculatePerimeter(void)=0;
	virtual ~Shape();
};



#endif /* SHAPE_H_ */
