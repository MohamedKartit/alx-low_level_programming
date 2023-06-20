#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: ALways 0 (Success)
 */

int main(void)
{
	unsigned long int prev, curr, next;
	int i;

	prev = 1;
	curr = 2;

	printf("%lu, %lu", prev, curr);
	for (i = 3; i <= 98; i++)
	{
		next = prev + curr;
		printf(", %lu", next);

		prev = curr;
		curr = next;
	}
	printf("\n");

	return (0);
}
