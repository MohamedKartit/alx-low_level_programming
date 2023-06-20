#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int curr, prev, next;
	int i;

	prev = 1;
	curr = 2;

	for (i = 1; i <= 50; i++)
	{
		if (prev != 20365011074)
		{
			printf("%ld, ", prev);
		}
		else
		{
			printf("%ld\n", prev);
		}
		next = prev + curr;
		prev = curr;
		curr = next;
	}

	return (0);
}

