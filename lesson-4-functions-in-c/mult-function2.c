/*
This program demonstrates the use of a simple function
The entire function is defined before main, eliminating the need for a prototype declaration
*/

#include <stdio.h>

int mult( int x, int y )
{
	return x * y;
}

int main()
{
	int x;
	int y;

	printf("Please enter the first number to multiply: ");
	scanf("%d", &x);
	printf("Please enter the second number to multiply: ");
	scanf("%d", &y);
	printf("You entered: x=%d and y=%d\n", x, y);

	printf("The product of your two numbers is: %d\n", mult( x, y ) );

	getchar(); // Used to clear the '\n' character read from scanf
	puts("\nPress ENTER to exit...");
	getchar();
	return 0;
}
