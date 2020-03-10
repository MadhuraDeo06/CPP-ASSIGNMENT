/*
 * Product.h
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_


#include<iostream>
using namespace std;

class Product
{
private:
	char title[20];
	float price;
public:
	Product();
	Product(const char* title, float price);
	void setTitle(const char* title);
	void setPrice(float price);
//	const char* getTitle(void)const;
	float getPrice(void)const;
	virtual void accept(void);
	virtual void display(void);
	virtual float Discount(void)=0;
	virtual ~Product();
};


#endif /* PRODUCT_H_ */
