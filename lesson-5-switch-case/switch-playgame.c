/*
This program demonstrates use of the switch case statement via a game menu
*/

#include <stdio.h>

void graceful_exit()	// gracefully exit
{
	getchar();
	puts("Press ENTER to exit...");
	getchar();
}

void playgame()	// Play the game
{
	printf("Play game called.\n");
}

void loadgame()	// Load the game
{
	printf("Load game called.\n");
}

void playmultiplayer()	// Play Multi-player
{
	printf("Play multiplayer game called.\n");
}

int main()
{
	int input;

	// Print the available selections
	printf("\n");
	printf("1. Play Game\n");
	printf("2. Load Game\n");
	printf("3. Play Multi-Player\n");
	printf("4. Exit\n");

	printf("\nSelection: ");	// prompt for the user's selection
	scanf("%d", &input);	// get the user's selection

	switch (input) {
		case 1:
			playgame();
			break;
		case 2:
			loadgame();
			break;
		case 3:
			playmultiplayer();
			break;
		case 4:
			printf("Thanks for playing!\n");
			break;
		default:
			printf("Invalid option, quitting!\n");
			break;
	}

	printf("\n");
	if ( input > 0 && input < 5 ) {
		graceful_exit();
	}

	return 0;
}
