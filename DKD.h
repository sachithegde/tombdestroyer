#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

int play_dkd(int *player_money, int *branching )
{
	*branching = 0;
	int num, max,min;
    char ch;
    srand(time(0)); /* seed random number generator */
    num = rand() % 100 + 1; /* random number between 1 and 100 */

    k:printf("Welcome to DUS KA DUM game\n\n");
    printf("Lets start the game with first question\n\n");
    printf("You have to get at least 3 questions right to beat the boss\n");
    printf("Your first question is for 10 Coins\n\n");
        
        printf("  1. How much %% of Indians after watching any couple thinks that how this lady married with that dumb guy ?\n\n");
	    printf("You have to tell the range in which in you think your answer may lie\n\n");
        printf("If the real answer lies between your range then you will win 10 COins\n\n");
        printf(" For first question your range must be of 80 \n\n");
        printf("Means From 0 to 80 , 10 to 90 or 20 to 100 \n\n");
        a:printf("Now tell your range for the first question\n\n");
        printf("From? ");
        scanf("%d", &min);
        printf("\nTo? ");
        scanf("%d", &max);
        printf("\n\n");

        
        if(min<0 || max>100)
        {
        	printf("Please enter the %% between 0 to 100\n\n");
        	goto a;
		}
        else if(max-min>80)
        {
        	printf("Range should not be bigger than 80 \n\n");
        	goto a;
		}
		else if(max-min<80)
		{
			printf("Range should not be smaller than 80 \n\n");
        	goto a;
		}
		
		else if (max>=num && min<=num)
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("And your guess is correct\n\n");
            printf("The right answer is %d%%\n\n",num);
            printf("You won 10 coins\n\n");
            f:printf("press 'c' to continue");
            ch=getch();
            if(ch=='c')
            {
            	system("CLS");
			}
			else
			{
				printf("\n\nInvalid Key");
				goto f;
			}
        }
        
        else
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("But your guess is wrong\n\n");
            printf("The right answer is %d%% which is out of your guessed range\n\n",num);
            printf("No problem better luck next time GOOD BYE\n\n");
            printf("Press any other key to continue");
    		getch();
            return;
            
        }
        
    printf("\n\nLets move to your 2nd question \n\n");
		
	srand(time(0)); /* seed random number generator */
    num = rand() % 100 + 1; /* random number between 1 and 100 */
    
    printf("2. How much %% of Indians thinks that three people together cant do any work properly ?\n\n");
    printf("This question is for 20 Coins\n\n");
    printf("For this question your range must be of 70\n\n");
	b:printf("Now enter your range \n\n");
        printf("From? ");
        scanf("%d", &min);
        printf("\nTo? ");
        scanf("%d", &max);
        printf("\n\n");

        
        if(min<0 || max>100)
        {
        	printf("Please enter the %% between 0 to 100\n\n");
        	goto b;
		}
        else if(max-min>70)
        {
        	printf("Range should not be bigger than 70 \n\n");
        	goto b;
		}
		else if(max-min<70)
		{
			printf("Range should not be smaller than 70 \n\n");
        	goto b;
		}
		
		else if (max>=num && min<=num)
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("And your guess is correct\n\n");
            printf("The right answer is %d%%\n\n",num);
            printf("You won 20 Coins\n\n");
            g:printf("press 'c' to continue");
            ch=getch();
            if(ch=='c')
            {
            	system("CLS");
			}
			else
			{
				printf("\n\nInvalid Key");
				goto g;
			}
        }
        
        else
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("But your guess is wrong\n\n");
            printf("The right answer is %d%% which is out of your guessed range\n\n",num);
            printf("No problem you won 10 Coins in your previous question better luck next time GOOD BYE\n\n");
            printf("Press any other key to continue");
            getch();
			*player_money += 10;
			*branching = 1;
			return;
        }
        
        
        printf("\n\nLets move to your 3rd question \n\n");
		
	srand(time(0)); /* seed random number generator */
    num = rand() % 100 + 1; /* random number between 1 and 100 */
    
    printf("3. How much %% of Indians scared by dogs ?\n\n");
    printf("This question is for 30 Coins\n\n");
    printf("For this question your range must be of 60\n\n");
	c:printf("Now enter your range \n\n");
        printf("From? ");
        scanf("%d", &min);
        printf("\nTo? ");
        scanf("%d", &max);
        printf("\n\n");

        
        if(min<0 || max>100)
        {
        	printf("Please enter the %% between 0 to 100\n\n");
        	goto c;
		}
        else if(max-min>60)
        {
        	printf("Range should not be bigger than 60 \n\n");
        	goto c;
		}
		else if(max-min<60)
		{
			printf("Range should not be smaller than 60 \n\n");
        	goto c;
		}
		
		else if (max>=num && min<=num)
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("And your guess is correct\n\n");
            printf("The right answer is %d%%\n\n",num);
            printf("You won 30 Coins\n\n");
            h:printf("press 'c' to continue");
            ch=getch();
            if(ch=='c')
            {
            	system("CLS");
			}
			else
			{
				printf("\n\nInvalid Key");
				goto h;
			}
        }
        
        else
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("But your guess is wrong\n\n");
            printf("The right answer is %d%% which is out of your guessed range\n\n",num);
            printf("No problem you won 20 Coins in your previous question, better luck next time GOOD BYE\n\n");
            printf("Press any other key to exit");
            getch();
            *player_money += 20;
            *branching = 1;
            return;
        }
        
        
        printf("\n\nLets move to your 4th question \n\n");
		
	srand(time(0)); /* seed random number generator */
    num = rand() % 100 + 1; /* random number between 1 and 100 */
    
    printf("4. How much %% of Indians thinks that if they move from watching the match, India would lose?\n\n");
    printf("This question is for 40 Coins\n\n");
    printf("For this question your range must be of 50\n\n");
	d:printf("Now enter your range \n\n");
        printf("From? ");
        scanf("%d", &min);
        printf("\nTo? ");
        scanf("%d", &max);
        printf("\n\n");

        
        if(min<0 || max>100)
        {
        	printf("Please enter the %% between 0 to 100\n\n");
        	goto d;
		}
        else if(max-min>50)
        {
        	printf("Range should not be bigger than 50 \n\n");
        	goto d;
		}
		else if(max-min<50)
		{
			printf("Range should not be smaller than 50 \n\n");
        	goto d;
		}
		
		else if (max>=num && min<=num)
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("And your guess is correct\n\n");
            printf("The right answer is %d%%\n\n",num);
            printf("You won 40 Coins\n\n");
            i:printf("press 'c' to continue");
            ch=getch();
            if(ch=='c')
            {
            	system("CLS");
			}
			else
			{
				printf("\n\nInvalid Key");
				goto i;
			}
        }
        
        else
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("But your guess is wrong\n\n");
            printf("The right answer is %d%% which is out of your guessed range\n\n",num);
            printf("No problem you won 30 Coins in your previous question, better luck next time GOOD BYE\n\n");
            printf("Press 'p' to play again\n\n");
            printf("Press any other key to exit");
            getch();
            *player_money += 30;
            *branching = 1;
            return;
        }
        
        
        printf("\n\nLets move to your last question which is for 50 Coins\n\n");
		
	srand(time(0)); /* seed random number generator */
    num = rand() % 100 + 1; /* random number between 1 and 100 */
    
    printf("5. How much %% of Indians males thinks that they are more intelligent than females\n\n");
    printf("This question is for 50 Coins so think properly and answer carefully\n\n");
    printf(" For this question your range must be of  only 40 \n\n");
	e:printf("Now enter your range \n\n");
        printf("From? ");
        scanf("%d", &min);
        printf("\nTo? ");
        scanf("%d", &max);
        printf("\n\n");

        
        if(min<0 || max>100)
        {
        	printf("Please enter the %% between 0 to 100\n\n");
        	goto e;
		}
        else if(max-min>40)
        {
        	printf("Range should not be bigger than 40 \n\n");
        	goto e;
		}
		else if(max-min<40)
		{
			printf("Range should not be smaller than 40 \n\n");
        	goto e;
		}
		
		else if (max>=num && min<=num)
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("And your guess is correct\n\n");
            printf("The right answer is %d%%\n\n",num);
            printf(" Amazing!!! You won 50 Coins\n\n");
            printf("Well played, Congratulations You are the winner of DUS KA DUM\n\n");
            j:printf("press 'c' to continue");
            *player_money +=50;
            *branching = 1;
            ch=getch();
            if(ch=='c')
            {
            	system("CLS");
			}
			else
			{
				printf("\n\nInvalid Key");
				goto j;
			}
        }
        
        else
        {
        	printf("So your range is from %d%% to %d%%\n\n",min,max);
            printf("But i am so sorry your guess is wrong\n\n");
            printf("The right answer is %d%% which is out of your guessed range\n\n",num);
            printf("No problem you won 40 Coins  in your previous question which is  very big amount,\n\n Better luck next time GOOD BYE\n\n");
            printf("Press any other key to continue");
            getch();
            *player_money += 40;
            *branching = 1;
        }
        
    
return 0;
}
	

