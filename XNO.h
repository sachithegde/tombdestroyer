#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int checkwin();
void board(char *boss);
int play_xno(int *branch, char *boss);

int play_xno(int *branch, char *boss)
{
	int player = 1, i, choice, winner = 0;

    char mark;
    do
    {
        board(boss);
        player = (player % 2) ? 1 : 2;
		mark = (player == 1) ? 'X' : 'O';
		
		player_choice:
        if(player == 1)
        {
			printf("Player %d, enter a number:  ", player);
	        scanf("%d", &choice);
	        fflush(stdin);
		}
		else
		{
			srand(time(0));
			choice = rand() % 10;
		}
		
		
		
		
		
        if (choice == 1 && square[1] == '1')
            square[1] = mark;

        else if (choice == 2 && square[2] == '2')
            square[2] = mark;

        else if (choice == 3 && square[3] == '3')
            square[3] = mark;

        else if (choice == 4 && square[4] == '4')
            square[4] = mark;

        else if (choice == 5 && square[5] == '5')
            square[5] = mark;

        else if (choice == 6 && square[6] == '6')
            square[6] = mark;

        else if (choice == 7 && square[7] == '7')
            square[7] = mark;

        else if (choice == 8 && square[8] == '8')
            square[8] = mark;

        else if (choice == 9 && square[9] == '9')
            square[9] = mark;

        else if (player == 1)
        {
            printf("\nInvalid move Press any Key to retry");
            getch();

            goto player_choice;
        }
        else
        {
        	goto player_choice;
		}
        i = checkwin();

        player++;
    }while (i ==  - 1);

    board(boss);

    if (i == 1)
    {
    	player--;
    	if (player == 1)
    	{
        	printf("\nYou win ");
        	*branch = 1;
	    		
		}
		else
		{
			printf("\n%s Wins ", boss);
		}
    	
	}
    else
    {
		printf("\nGame draw. Press any key to replay");
    	getch();
    	
	}
	return 0;
}


int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
        return 1;

    else if (square[4] == square[5] && square[5] == square[6])
        return 1;

    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;

    else if (square[2] == square[5] && square[5] == square[8])
        return 1;

    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;

    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')

        return 0;
    else
        return  - 1;
}

void board(char *boss)
{
	system("cls");
    printf("\n\n\tTic Tac Toe\n\n");
    printf("Player 1 (X)  -  %s (O)\n\n\n", boss);
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}