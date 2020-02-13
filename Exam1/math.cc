// Copyright 2020 Ibrahim Salman

#include "power.cc"
#include "factorial.cc"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char** argv) {
	// run the conditionals on the arg
	cout << argv[1] << endl;
	if (argv[1] == "power")
		cout << power(std::stod(argv[2]), std::stod(argv[3])) << endl;
	else if (argv[1] == "factorial" && argv[2] == "ans")
		cout << factorialans(std::stoi(argv[3])) << endl;
	
	else if (argv[1] == "factorial" && argv[2] == "list")
		cout << factoriallist(std::stoi(argv[3])) << endl;
	else
		cout << "Invalid input" << endl;
	return 0;	
}
