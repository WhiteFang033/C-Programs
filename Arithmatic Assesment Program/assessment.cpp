#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, first, second, result, answer, operation;
	
	//Storing responses in tables
	char correct_responses[][100]={"Euler is proud of you!","Correct!", 
								   "Bravo!", 
								   "Unstoppable!",
								   "Well Done!",
								   "Sick!",
								   "Good Going!",
								   "Noice!", 
								   "Maestro of Mathematics!", 
								   "Lit!"
								   };
								   
	char incorrect_responses[][100]={"Look Again!",
									 "That's wrong!", 
									 "Try Again", 
									 "Do Carefully!", 
									 "Calculate Again!", 
									 "Check Again!", 
									 "Incorrect!", 
									 "See Again!",
									 "Nope, that's not it.", 
									 "Take a moment to reconsider."
									 };
									 
	printf("--Welcome to the Arithmetic Assessment Program!--\n\n");
	printf("Enter the number of questions to be attempted:  ");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		first = rand()%10; //Storing first operand
		second = rand()%10; //Storing second operand
		
		//selecting operation
		operation = rand()%4;
		if(operation == 0)
		{
			printf("%d + %d = ",first, second);
			result = first + second;
		}
		else if(operation == 1)
		{
			printf("%d - %d = ",first, second);
			result = first - second;
		}
		else if(operation == 2)
		{
			printf("%d * %d = ",first, second);
			result = first * second;
		}
		else if(operation == 3)
		{
			printf("%d / %d = ",first, second);
			result = first / second;
		}
		
		//Checking the answer entered
		while(1)
		{
			scanf("%d", &answer);
			if(answer == result)
			{
				printf(correct_responses[rand()%10]);
				printf("\n");
				break;
			}
			else
			{
				printf(incorrect_responses[rand()%10]);
				printf("\n");
			}
		}
	}
	
	printf("\n\nThank You For Using The Assesment Program!\nKeep Practicing!\n");
	return 0;
}
