#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 1. The last digit */

/**
 * main - gets the last digit of a random number compare it with 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, LastNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastNumber = n % 10;

	if (LastNumber == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LastNumber);
	}
	else if (LastNumber > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastNumber);
	}
	else if (LastNumber < 6 && LastNumber != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				 n, LastNumber);
	}
	return (0);
}
