#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned long int prev, curr, n, n1, k, k1;
	int i;

	prev = 1;
	curr = 2;

	printf("%lu", prev);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", curr);
		curr = curr + prev;
		prev = curr - prev;
	}
	n = prev / 1000000000;
	n1 = prev % 1000000000;
	k = curr / 1000000000;
	k1 = curr % 1000000000;

	for (i = 92; i < 99; i++)
	{
		printf(", %lu", k + (k1 / 1000000000));
		printf("%lu", k1 % 1000000000);

		k = k + n;
		n = k - n;
		k1 = k1 + n1;
		n1 = k1 - n1;
	}
	printf("\n");

	return (0);
}
