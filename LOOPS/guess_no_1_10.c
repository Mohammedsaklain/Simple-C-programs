#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	/* When the line srand(time(NULL)); is executed, 
	the time(NULL) function indeed gets the current calendar time 
	and returns it as a numerical value representing the number of seconds 
	that have elapsed since the Epoch (January 1, 1970, at 00:00:00 Coordinated 
	Universal Time - UTC)*/
	srand(time(NULL));
	printf("Welcome to the Guess No Game\n");
	printf("I'm thinking of a number between 1 to 10\n");
	int secret_no, guess, attempt=0;
	secret_no = rand() % 10 + 1;
	do
	{
		printf("Guess My Number\n");
		scanf("%d",&guess);
		if(guess < secret_no)
		{
			printf("Too Low\n");
			attempt++;
		}
		else if(guess > secret_no)
		{
			printf("Too High\n");
			attempt++;
		}
		else if(guess == secret_no)
		{
			printf("Congratulations, My number was %d, Your attempts was %d\n",secret_no,attempt);
		}
	}while(secret_no!=guess);
	return 0;
}

