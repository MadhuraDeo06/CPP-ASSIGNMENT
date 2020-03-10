/*
 * Square.h
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */

#ifndef SQUARE_H_
#define SQUARE_H_


#include<iostream>
using namespace std;
#include"../include/Shape.h"

class Square:public Shape
{
private:
	float side;
public:
	Square();
	Square(float side);
	float getSide(void)const;
	void setSide(float side);
	float calculateArea(void);
	float calculatePerimeter(void);
	void accept(void);
	void print(void);
};


#endif /* SQUARE_H_ */
