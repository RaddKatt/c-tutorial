/*
An example of a simple for loop
*/

#include <stdio.h>

int main()
{
	int x;
	
	/* The loop goes while x < 10, and x increases by one every loop*/
	for (x = 0; x < 10; x++) {
		printf("%d\n", x);
	}
	getchar();
	
	return 0;
}
