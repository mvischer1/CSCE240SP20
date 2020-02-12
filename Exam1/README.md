## Exam 1 - Practice Exam

This practice exam covers most of the concepts covered on exam 1.

This is a computer based exam. no browser is allowed. Also open book open notes.

How it goes:

- Makefile:
	* makefile should include rules to compile each of the files separately and also collectivly including compiling the test file <test_math.cc>

- power:
	* Write a function that computes the power. Make sure the function works when the power is negative or zero.
	* Parameters: (double base, double power)
	* Return type: double
	* Notes: don't use any libraries

- factorial:
	* Write two factorial functions, one (1) should calculate the factorial and return the result, (2) the other should return all the numbers to the users uncalculated.
	* Parameters: (int)
	* Return type: 
		* (1) int
		* (2) string
	* Notes: don't use any libraries. Exception: string

- math:
	* This is going to be the main Program
	* Read input from command argumants and depending on the 1st user argumants:
		* if the input == "power" then read two more argumants, calculate the power using the function above, and print the return using std output.
		* if the input == "factorial" then read one more argumant:
			* if the argumant is "ans" then use the double factorial method and print the return using std output.
			* if the argumant is "list" then use the string factorial method and print the return using std output.
	* Notes: You are allowd to use "stoi" which takes a string and return an int, and "stod" which takes a string and returns a double. Both are included in the std namespace of the library string.
