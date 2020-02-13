// Copyright 2020 Ibrahim Salman

#include "factorial.h"

// Define the methods

int factorialans(int num) {
	int ret = 1;
	for (int i = num; i > 0; --i)
		ret *= i;

	return ret;
}

string factoriallist(int num) {
	string ret = "";
	
	for (int i = 1; i <= num; ++i) 
		ret += std::to_string(i) + " ";

	return ret;
}

