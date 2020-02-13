// Copyright 2020 Ibrahim Salman

#include "power.cc"
#include "factorial.cc"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char** argv) {
	if (argc < 2) {
		cout << "Invalid number of inputs" << endl;
		return 1;
	}

	// run the conditionals on the arg
	string arg1 = argv[1];


	if (arg1 == "power") {
		if (argc < 4) {
			cout << "Invalid number of inputs" << endl;
			return 1;
		}
		string arg2 = argv[2];
		string arg3 = argv[3];
		cout << power(std::stod(argv[2]), std::stod(argv[3])) << endl;
	}
	
	else if (arg1 == "factorial") {
		if (argc < 4) {
			cout << "Invalid number of inputs" << endl;
			return 1;
		}
		string arg2 = argv[2];
		string arg3 = argv[3];
		if (arg2 == "ans")
			cout << factorialans(std::stoi(arg3)) << endl;
		else if (arg2 == "list")
			cout << factoriallist(std::stoi(arg3)) << endl;
	}

	else
		cout << "Invalid input" << endl;
	
	return 0;	
}
