/*
 * Books.h
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */

#ifndef BOOKS_H_
#define BOOKS_H_

#include <iostream>
using namespace std;


#include "../include/Product.h"

class Books : public Product
{
private:
	int pages;
public:
	Books();
	Books(char* title, float price, int pages);
	void setPages(int pages);
	int getPages(int pages);
	void accept(void);
	void display(void);
	float Discount(void);
	~Books();
};



#endif /* BOOKS_H_ */
