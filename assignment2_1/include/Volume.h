/*
 * Volume.h
 *
 *  Created on: 05-Mar-2020
 *      Author: madhura
 */

#ifndef VOLUME_H_
#define VOLUME_H_


#include<iostream>
using namespace std;
namespace nVolume
{
class Volume
{
private:
	double radius;
	double height;
	double result;
public:
	Volume();

	Volume(double radius, double height);

	double getVolume();

	void accept_Record(void);

	void print_record( );
};
}



#endif /* VOLUME_H_ */
