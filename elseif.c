/*
Demonstrates the use of an 'else if' conditional statement
*/

#include <stdio.h>

int main()
{
	int age;	// Declare the 'age' variable

	printf("Please enter your age: ");	// Ask for the user's age
	scanf("%d", &age);			// The input is put into 'age'

	if ( age < 100 ) {				// If age is less-than 100
		printf("%d is pretty young!\n", age);	// Print 'pretty young'
	}
	else if ( age == 100 ) {			 // If the age is equal-to 100
		printf("%d. You are pretty old.\n", age); // Print 'pretty old'
	}
	else {
		printf("%d. Yeah that is really old.\n", age);
	}

	return 0;
}
