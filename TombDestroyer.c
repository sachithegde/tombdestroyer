#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "Fight.h"


int main()
{
	srand(time(0));
	int i, j, k, int_choice, branching, difficulty, health, money, max_health = 10;
	char char_choice;
	game_start:
		difficulty = 1;
		health = 10;
		system("CLS");
		printf("\n*********************** Tomb Destroyer ***********************");
		printf("\nRules");
		printf("\nFollow the Instructions on the Screen to play the Game");
		printf("\nEvery time you beat a Boss, Your money and health will increase ");
		printf("\nbut so will the difficulty. Every time you choose to play a game");
		printf("\nwith the boss, and if you win you will gain money but no health");
		printf("\nPress any key to begin:");
		getch();
		system("CLS");
		
	
	choose_money:
		
		printf("\n     \\ ----- /      \\ ----- /     \\ ----- / ");
		printf("\n     /   1   \\      /   2   \\     /   3   \\ ");
		printf("\n     \\       /      \\       /     \\       / ");
		printf("\n      -------        -------       -------  ");
		printf("\n\n\nChoose a Pot to get coins ");
		scanf("%d", &int_choice);
		fflush(stdin);
		
		switch(int_choice)
		{
			case 1:
				money = rand() % 101;
				break;
			case 2:
				money = rand() % 201;
				break;
			case 3:
				money = rand() % 51;
				break;
			default:
				system("CLS");
				printf("Invalid Choice");
				goto choose_money;
		}
		
		printf("You got %d coins", money);
		printf("\n\n You are entering the tomb of Ragnarok. All the Best, Adventurer!");
		printf("\nPress any Key to Start: ");
		getch();
	
	level:
		system ("CLS");		
		printf("\n");
		fight(&branching, &health, &money, &difficulty, &max_health );
		if ( branching == 1)
		{
			printf("\n\nYou move towards the next room.\nPress any Key to start the level:");
			getch();
			goto level;
		}	
	
	game_loss:
		printf("\n\nYou Lost! Do you wish to play again?(y / n)\n");
		scanf("%c", &char_choice);
		fflush(stdin);
		switch(char_choice)
		{
			case 'y':
			case 'Y':
				goto game_start;
				break;
			case 'n':
			case 'N':
				exit(0);
				break;
			default:
				system("CLS");
				printf("\n Invalid Input Try Again");
				goto game_loss;
				break;
		}
	return 0;
}
