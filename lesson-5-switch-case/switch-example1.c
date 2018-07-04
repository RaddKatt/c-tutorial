/*
This program demonstrates a simple switch case statement
*/

#include <stdio.h>

void doswitch( int a )
{
	switch ( a ) {
		case 10:
			printf("A match was found: 10\n");
			break;
		case 20:
			printf("A match was found: 20\n");
			break;
		default:
			printf("No match was found.\n");
			break;
	}
}

int main()
{
	int a;

	printf("Enter a number to find a match: ");
	scanf("%d", &a);
	doswitch(a);

	getchar();	// clear the newline char from scanf
	puts("\nPress ENTER to exit...");	
	getchar();

	return 0;
}
