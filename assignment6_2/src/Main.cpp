/*
 * Main.cpp
 *
 *  Created on: 10-Mar-2020
 *      Author: madhura
 */


#include<iostream>
using namespace std;
#include"../include/Shape.h"
#include"../include/Square.h"
#include"../include/Circle.h"
#include"../include/Rectangle.h"

enum menu
{
	EXIT, CIRCLE, RECTANGLE, SQAURE
};
float calculate_Area(Shape **shape,int size)
{
	float area;
	//Shape *shape[size];
	int index;
	for(index=0;index<size;++index)
	{
		area = shape[index]->calculateArea() + area;
	}
	return area;
}
float calculate_Perimeter(Shape **shape,int size)
{
	float perimeter;
	//Shape *shape[size];
	int index;
	for(index=0;index<size;++index)
	{
		perimeter = shape[index]->calculatePerimeter() + perimeter;
	}
	return perimeter;

}
int main(void)
{
	int choice,size, index;
	float area,perimeter;
	cout<<"Enter no.of products Required ::"<<endl;
	cin>>size;
	Shape *ptr[size];
	for(index=0;index<size;++index)
	{
		cout<<"0.Exit "<<endl;
		cout<<"1.Circle "<<endl;
		cout<<"2.Rectangle "<<endl;
		cout<<"3.Square "<<endl;
		cout<<"Enter choice "<<endl;
		cin>>choice;
		switch(choice)
		{
		case CIRCLE:
			ptr[index]=new Circle;
			break;
		case RECTANGLE:
			ptr[index]=new Rectangle;
			break;
		case SQAURE:
			ptr[index]=new Square;
			break;
		}
		ptr[index]->accept();

	}
	for(index=0;index<size;index++)
	{
		cout<<"Product Information ["<<index<<"]"<<endl;
		ptr[index]->print();

	}
	cout<<endl;
	area=::calculate_Area(ptr,size);
	cout<<"Total Area is ="<<area<<endl;


	cout<<endl;
	perimeter=::calculate_Perimeter(ptr,size);
	cout<<"Total perimeter is ="<<perimeter<<endl;

	for(index=0;index<size;index++)
		delete ptr[index];

	return 0;

}


