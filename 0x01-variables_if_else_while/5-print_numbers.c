#include <stdio.h>

/*
 * 5. Numbers
 */

/**
 * main - prints all single digits numbers of base 10
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int  n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");

	return (0);
}
