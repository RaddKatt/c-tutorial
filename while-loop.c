/*
This program is a simple demonstration of a while loop.
*/

#include <stdio.h>

int main()
{
	int x = 0;	// Declare integer variable x with value 0

	while (x < 10) {	// while x is less-than 10
		printf("%d\n", x);
		x++;		// increment x
	}
	getchar();

	return 0;
}
