#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*0. Positive anything is better than negative nothing*/
/**
 * main - chacks if a random number is positive or negative or zero
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
