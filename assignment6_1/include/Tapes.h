/*
 * Tapes.h
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */

#ifndef TAPES_H_
#define TAPES_H_

#include<iostream>
using namespace std;
#include "../include/Product.h"

class Tapes : public Product
{
private:
	int duration;
public:
	Tapes();
	Tapes(char* title, float price, int duration);
	void setDuration(int duration);
	int getDuration(int duration);
	void accept(void);
	void display(void);
	float Discount(void);
	~Tapes();
};


#endif /* TAPES_H_ */
