/*
This program demonstrates a simple do-while loop in C.
A do-while loop's code will execute once whether or not
the while condition evaluates to true.
*/

#include <stdio.h>

int main()
{
	int x = 0;

	do {
		printf("Hello World!\n"); /* "Hello, world!" is printed at least one time
						even though the condition is false */
	} while ( x != 0 );

	puts("\nPress ENTER to exit");	
	getchar();

	return 0;
}
