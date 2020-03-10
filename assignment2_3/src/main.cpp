/*
 * main.cpp
 *
 *  Created on: 06-Mar-2020
 *      Author: madhura
 */


#include<iostream>
using namespace std;
class Exception
{
private:
	string message;
public:
	Exception(string message):message(message)
	{	}
	string getMessage(void)const
	{
		return this->message;
	}
};

void acceptValue(float &num)
{
	cout<<"Enter Value ::  "<<endl;
	cin>>num;
}

double square(float &number)
{
	double sqr;
	if(number<0)
		throw Exception("Negative number exception");
	else
		sqr = number * number;
	return sqr;
}
void printRecord(double &sqr)
{
	cout<<"Enter Value ::  "<<sqr<<endl;
}
int main(void)
{
	try
	{
		double sqr;
		float num1;
		acceptValue(num1);
		sqr=square(num1);
		printRecord(sqr);
	}
	catch(Exception ex)
	{
		cout<<ex.getMessage()<<endl;
	}
	return 0;
}
