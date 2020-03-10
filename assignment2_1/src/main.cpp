/*
 * main.cpp
 *
 *  Created on: 05-Mar-2020
 *      Author: madhura
 */
#include "../include/Volume.h"
using namespace nVolume;
int main(void)
{
	Volume v;
	v.accept_Record();
	v.getVolume();
	v.print_record();
	return 0;
}


