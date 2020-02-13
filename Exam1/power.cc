// Copyright 2020 Ibrahim Salman

// Remember to include the header file
#include "power.h"

// Defining 
double power(double base, double power) {
	double ret = 1;
	for (int i = 0; i < power; ++i) 
		ret *= base;	

	return ret;
}

