#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include "XNO.h"
#include "QNA.h"
#include "DKD.h"

void check_health(int *h, int *branching);


void fight(int *branch, int *player_health, int *player_money, int *diff, int *max_health)
{
	*branch = 0;
	*max_health = *player_health;
	int difficulty = *diff;
	int boss_health = 5 * difficulty;
	int bet_amt = 25 * difficulty;
	int int_choice, boss_roll, player_roll, branching, game_choice, rand_int;
	char roll;
	char bosses[5][50] = {"Boss 1", "Boss 2", "Boss 3", "Boss 4", "Boss 5"}, boss[50];
	rand_int = rand() % 5;
	strcpy(boss, bosses[rand_int]);
	
	boss_explain:
			
		system("CLS");
		printf("\n*********************** Tomb Destroyer ***********************");
		printf("\n                                                Health: %d", *player_health);
		printf("\n                                                 Coins: %d", *player_money);
		printf("\n\n\n You are facing a %s. With Health %d. Current Difficulty: %d", boss, boss_health, difficulty);
		printf("\n 1. You Fight %s ", boss);	
		printf("\n 2. You Play a game with %s for %d coins", boss, bet_amt);
		printf("\nEnter your Choice: ");
		scanf("%d", &int_choice);
		fflush(stdin);
		switch(int_choice)
		{
			case 1:
				goto fight_sequence;
				break;
			case 2:
				goto mini_game_sequence;
				break;
			default:
				goto boss_explain;
				break;
		}
	
	fight_sequence:
		
		printf("\nRules: ");
		printf("\nThe Boss Attacks First. The Boss attacks first. \nBoth Roll a number between 0 to 10.");
		printf("\nIf the Attacker number is higher it mean the defender is hurt by the difference amount");
		printf("\nPress any Key to begin: ");
		getch();
		
		while(1)
		{
			//Boss Attack Turn
			system("CLS");
			int difference = 0;
			printf("\n*********************** Tomb Destroyer ***********************");
			printf("\n                                                Health: %d", *player_health);
			printf("\n                                           Boss Health: %d", boss_health);
			printf("\n\n\n%s\'s turn to attack.", boss);
			srand(time(0));
			boss_roll = rand() % 11;
			printf("\n%s rolled a %d", boss, boss_roll);
			printf("\nPress any key to roll a number: \n");
			getch();
			player_roll = rand() % 11;
			printf("You rolled a %d", player_roll);
			difference = boss_roll - player_roll;
			if (difference > 0)
			{
				printf("\nYou are hit and lose %d health points", difference);
				*player_health -= ( difference);
				
			}
			else
			{
				printf("\nYou block the attack");
			}
			check_health(player_health, &branching);
			if(branching == 0)
			{
				printf("\nYou Died.");
				goto exit;
			}
			
			printf("\nPress any Key to start your attack");
			getch();
			
			//PLayer Attack Turn
			system("CLS");
			difference = 0;
			printf("\n*********************** Tomb Destroyer ***********************");
			printf("\n                                                Health: %d", *player_health);
			printf("\n                                           Boss Health: %d", boss_health);
			printf("\n\n\nYour turn to attack.", boss);
			srand(time(0));
			printf("\nPress any key to roll a number: \n");
			getch();
			player_roll = rand() % 11;
			printf("\nYou rolled a %d", player_roll);
			boss_roll = rand() % 11;
			printf("\n%s rolled a %d", boss, boss_roll);
			difference = player_roll - boss_roll;
			if (difference > 0)
			{
				printf("\n%s is hit and lose %d health points", boss, difference);
				boss_health -= (difference);
				
			}
			else
			{
				printf("\n%s blocks the attack", boss);
			}
			check_health(&boss_health, &branching);
			if(branching == 0)
			{
				printf("\n%s Died.", boss);
				*branch = 1;
				*player_money += difficulty;
				*max_health += 10;
				*player_health = *max_health;
				
				goto exit;
			}
			printf("\nPress any Key to start %s\'s attack", boss);
			getch();
			
			
		}
	mini_game_sequence:
		if (*player_money < bet_amt)
		{
			printf("\n You do not have enough Coins You have to Fight.");
			goto fight_sequence;
		}
		*player_money -= bet_amt;
		srand(time(0));
		rand_int = rand() % 3;
		switch(rand_int)
		{
			case 0:
				play_xno(&branching, boss);
				break;
			case 1:
				play_qna(&branching);
				break;
			case 2:
				play_dkd(player_money, &branching);
				break;
		}
		if(branching == 1)
		{
			*player_money += bet_amt * 2;
			*branch = 1;
		}
		
		goto exit;
	
	exit:
		*diff+=1;
		return;
}

void check_health(int *h, int *branching)
{
	*branching = 0;
	if (*h > 0)
	{
		*branching = 1;
	}
}
