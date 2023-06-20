#include <stdio.h>

/**
 * main -  computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned long int sumOf3, sumOf5, totalSum;
	int i = 0;

	sumOf3 = 0;
	sumOf5 = 0;
	totalSum = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0)
		{
			sumOf3 = sumOf3 + i;
		}
		else if ((i % 5) == 0)
		{
			sumOf5 = sumOf5 + i;
		}
		i++;
	}
	totalSum = sumOf3 + sumOf5;
	printf("%lu\n", totalSum);

	return (0);
}
