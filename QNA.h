#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int question(int *branch);
int question1(int *branch);
int play_qna(int *branch);


int play_qna(int *branch)
{
	*branch = 0;
	int t=10;
	int a;
	printf("************WELCOME TO THE GAME************\n");
	printf("Game will start in 30 second automatically and read instruction properly\n");
	printf("Rules of this round are simple\n");
	printf("There will be 5 Question which you have to answer,out of 5 minimum 3 answer should be correct to eligible for next journey \n ");
	printf("Answer should be in one word(one Alphabet)and in Capital letters or else it consider as wrong answer\n");
	printf("After giving answer next question will come after 5 second\n");
    printf("If you fail in first five question then you can have one last chance with diffrent five Question with same rule \n");
	printf("If you fail in last round then you have to start from beginning \n");
	printf("*************ALL THE BEST**************\n\n\n");
	while(1)
	{
		printf("   \r \t\t\t\t    Game start in %d",t);
		Sleep(1000);
		if(t!=0)
		{
			t--;
		}
		else
		{
			system("CLS");
		    goto a;
		}
	
	}

	
	 a:questions(branch);
	 return 0;
	
}

int questions(int *branch)
{
	int i,s=0,time,tt;
	char ans[10];
		
	 for(i=1;i<=5;i++)
	{
	 switch(i)
	{
		case 1: 
		        time=1;
		        printf("I am an odd number.Take away a letter and I become even.What number am I?\n");
				gets(ans);
				char a[] = "SEVEN";
				if(strcmp(ans,a)==0)
				{
					printf("Correct,Now move to next question \n");
					s++;
						while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
					
				}
				else
				{
					printf("Wrong,correct answer is SEVEN");
						while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
					
				} 
		        break;
		case 2:
			    time=1;
			    printf("I have branches,but no fruits,trunk or leaves.What am I?\n");
		        gets(ans);
			    char b[] = "BANK";
			    if(strcmp(ans,b)==0)
			    {
			    	printf("Correct,Now move to next question\n");
			    	s++;
			    		while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				else
				{
					printf("Wrong.correct answer is BANK");
						while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				break;
		case 3:
			    time=1;
			    printf("What invention lets you look right through a wall?\n");
			    gets(ans);
			    char c[] = "WINDOW";
			    if(strcmp(ans,c)==0)
			    {
			    	printf("Correct,Now move to next question\n");
			    	s++;
			    		while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				else
				{
					printf("Wrong,Correct answer is WINDOW");
						while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				break;
		case 4: 
		        time=1;
		        printf("A little girl goes to the store and buys one dozen eggs,\nAs she is going home,all but three break,how many aggs are left unbroken?\n");
			    gets(ans);
			    char d[] = "THREE";
			    if(strcmp(ans,d)== 0)
			    {
			    	printf("Correct,Now move to next question\n");
			    	s++;
			    		while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				else
				{
					printf("Wrong,Correct answer is THREE");
						while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				break;
		case 5:
			    time=1;
		        printf("I'am tall when I'am young and I'am short when I'am old.What am I?\n");
			    gets(ans);
			    char e[] = "CANDLE";
			    if(strcmp(ans,e) == 0)
			    {
			    	printf("Correct,Now let see your result\n");
			    	s++;
			    		while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				else
				{
					printf("Wrong,correct answer is CANDLE");
						while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				break;
		        						
						
				        
	}
	
   }
   if(s>=3)
   {
      printf("You have given %d correct answer out of 5 questions so as per rules you can continue your journey",s);
      *branch = 1;
	  	
   }
   else
   {
   	time=10;
   	printf("You have given %d correct answer out of 5 questions,you have failed this task.\n",s);
   	printf("But you have chance to clear this stage again and round will start in 10 sec\n");
   	while(1)
	{
		printf("   \r \t\t\t\t    Game start again in %d",time);
		Sleep(1000);
		if(time!=0)
		{
			time--;
		}
		else
		{
			system("CLS");
		    goto tt;
		    break;
		}
	
	}
   
   
   
   	tt: question1(branch);
	}
}


int question1(int *branch)
{
	int i,s=0,time,tt;
	char ans[10];

	for(i=1;i<=5;i++)
	{
	 switch(i)
	{
		case 1: 
		        time=1;
		        printf("What five letter word becomes shorter when you add two letters to it?\n");
				gets(ans);
				char a1[] = "SHORT";
				if(strcmp(ans,a1)==0)
				{
					printf("Correct,Now move to next question\n");
					s++;
					while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				else
				{
					printf("Wrong,Correct answer is SHORT");
					while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				} 
		        break;
		case 2:
			    time=1;
			    printf("What word of five letters has one left when two are removed ?\n");
		        gets(ans);
			    char b1[] = "STONE";
			    if(strcmp(ans,b1)==0)
			    {
			    	printf("Correct,Now move to next question\n");
			    	s++;
			    	while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				else
				{
					printf("Wrong,Correct answer is STONE");
					while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				break;
		case 3:
			    time=1;
			    printf("What 4 letters word can be written forword,backword or upside dowm and can still be read from left to right\n");
			    gets(ans);
			    char c1[] = "NOON";
			    if(strcmp(ans,c1)==0)
			    {
			    	printf("Correct,Now move to next question\n");
			    	s++;
			    	while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				else
				{
					printf("Wrong,Correct answer is NOON");
					while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				break;
		case 4:
		        time=1; 
		        printf("It belong to you,but other people use it more than you do,What is it?\n");
			    gets(ans);
			    char d1[] = "NAME";
			    if(strcmp(ans,d1)== 0)
			    {
			    	printf("Correct,Now move to next question\n");
			    	s++;
			    	while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				else
				{
					printf("Wrong,Correct answer is NAME");
					while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				break;
		case 5:
			    time=1;
		        printf("What would you find in the middle of toronto?\n");
			    gets(ans);
			    char e1[] = "O";
			    if(strcmp(ans,e1) == 0)
			    {
			    	printf("Correct,Now let see the result\n");
			    	s++;
			    	while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				else
				{
					printf("Wrong,Correct answer is O");
					while(1)
	                    {
		            
		                    Sleep(1000);
		                    if(time!=0)
		                    {
			                    time--;
		                    }
		                    else
		                    {
		                       system("CLS");
		                       break;
		                    }
	
	                     }
				}
				break;				
						
				        
	}


  }
  	if(s>=3)
   {
      printf("You have given %d correct answer out of 5 questions so as per rules you can continue your journey",s);
      *branch = 1;
   }
   else
   {
   	
   	printf("You have given %d correct answer out of 5 questions,you have failed this task.\n",s);
   	printf("SORRY,You have to start from beginning.\n");
   	printf("Better luck next time");
   
   }
}
