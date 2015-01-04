/* Author: Parker Mathewson
		created on 2/1/12
		this program is the first problem of the 2nd lab*/

#include <stdio.h>

int main(void)
{
	int num;

	printf("Guess a number between 1 and 10: ");
	scanf("%d",&num);

	while (num != 7)
	{
		if (num > 10 || num < 1)
		{	printf("You're number is out of range");
			fflush(stdin);
			printf("\nGuess a number between 1 and 10: ");
			scanf("%d",&num);
		}		


		if (num >= 1 && num < 7)
		{	printf("you're number is too low.");
			fflush(stdin);
			printf("\nGuess a number between 1 and 10: ");
			scanf("%d",&num);
		}

		if (num > 7 && num <= 10)
		{	printf("You're number is too high.");
			fflush(stdin);
			printf("\nGuess a number between 1 and 10: ");
			scanf("%d",&num);
		}


	}

	while (num == 7)
	{
		printf("\nYou got the right answer! It was number 7.\n");
		return (0);
	}

	return (0);
}
