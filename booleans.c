/*
This program demonstrates the use of boolean operators
*/

#include <stdio.h>

int main()
{
	printf("1 == ( 1 || 0 ): %d\n", 1 == ( 1 ||  0));
	printf("2 == ( 1 || 0 ): %d\n", 2 == ( 1 || 0 ));
	printf("!( 1 || 0 ): %d\n", !( 1 || 0 ));		// NOT example	
	printf("2 != ( 1 || 0 ): %d\n", 2 != ( 1 || 0 )); 	// Another NOT example
	printf("!( 1 || (1 && 0) ): %d\n", !( 1 || (1 && 0) ));	// AND is evaluated before OR
	printf("!(( 1 || 0) && 0): %d\n", !(( 1 || 0) && 0));  // Parenthesis are useful
	getchar();

	return 0;
}
