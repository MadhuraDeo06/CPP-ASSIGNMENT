/*
 * date.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: madhura
 */
#include"../include/Date.h"
Date::Date():day(0),month(0),year(0)
{	}
Date::Date(int day, int month, int year):day(day),month(month),year(year)
{   }
void Date::setDay(int day)
{
	this->day=day;
}
void Date::setMonth(int  month)
{
	this->month=month;
}
void Date::setYear(int year)
{
	this->year=year;
}
int Date::getDay(void)const
{
	return this->day;
}
int Date::getMonth(void)const
{
	return this->month;
}
int Date::getYear(void)const
{
	return this->year;
}
void Date::acceptRecord(void)
{
	cout<<"Enter date (dd-mm-yyyy) :: "<<endl;
	cin>>this->day>>this->month>>this->year;
}
void Date::printRecord(void)
{
	cout<<"Date : "<<this->day<<"-"<<this->month<<"-"<<this->year<<endl;
}
bool Date::IsLeapYear(void)
{
	if((this->year % 4==0 && this->year % 100 !=0) || this->year % 400 ==0)
		return true;
	else
		return false;

}


