/* Author: Parker Mathewson
		created on 2/1/12
		this program is the first problem of the 2nd lab*/

#include <stdio.h>

int main(void)
{
	int num=1;

	printf("Guess a number between 1 and 10: ");
	scanf("%d",&num);

	while (num != 7)
	{
		fflush(stdin);
		printf("\nGuess a number between 1 and 10: ");
		scanf("%d",&num);
	}

	while (num == 7)
	{
		printf("\nYou got the right answer! It was number 7.\n");
		return (0);
	}

	return (0);
}
