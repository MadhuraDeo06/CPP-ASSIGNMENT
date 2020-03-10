/*
 * Date.h
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */

#ifndef DATE_H_
#define DATE_H_

#include<iostream>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int day, int month, int year);
	void setDay(int day);
	void setMonth(int  month);
	void setYear(int year);
	int getDay(void)const;
	int getMonth(void)const;
	int getYear(void)const;
	void acceptRecord(void);
	void printRecord(void);
	bool IsLeapYear(void);
};



#endif /* DATE_H_ */
