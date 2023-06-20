#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int curr, prev, next;
	unsigned long totalSum;
	int i;

	prev = 1;
	curr = 2;
	totalSum = 0;

	for (i = 1; i <= 33; i++)
	{
		if (prev != 4000000 && (prev % 2) == 0)
		{
			totalSum = totalSum + prev;
		}

		next = prev + curr;
		prev = curr;
		curr = next;
	}
	printf("%lu\n", totalSum);


	return (0);
}

