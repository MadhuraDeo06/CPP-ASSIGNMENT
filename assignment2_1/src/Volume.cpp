/*
 * Volume.cpp
 *
 *  Created on: 05-Mar-2020
 *      Author: madhura
 */


#include "../include/Volume.h"
using namespace nVolume;
Volume::Volume():radius(10),height(10),result(0)
{	}
Volume::Volume(double radius, double height): radius(radius), height(height),result(0)
{	}
double Volume::getVolume()
{
	return this->result = 3.14 * this->radius * this->radius * this->height;
}
void Volume::accept_Record(void)
{
	cout<<"Radius ::  "<<endl;
	cin>>this->radius;
	cout<<"Height ::  "<<endl;
	cin>>this->height;
}
void Volume::print_record( )
{
	cout<<"volume ::  "<<this->result<<endl;
}
