/*
This program demonstrates the use of a simple function
from the stdlib library, rand()
*/

#include <stdio.h>
#include <stdlib.h> /* Include rand() */
#include <time.h>

int main()
{
	int a;

	srand(time(0));
	a = rand(); /* rand is a standard function that all compilers have */

	printf("The random number is: %d\n", a);

	puts("\nPress ENTER to exit...");
	getchar();
	return 0;
}
