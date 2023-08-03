#include <stdio.h>
#include "main.h"

/**
 * print_binary -  prints the binary representation of a number.
 *
 * @n: the number to be printed
 *
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int t;
	int change = 0;

	if (n == 0)
	{
		printf("0");
		return;
	}
	else
	{
		t = n;
		while ((t >>= 1) > 0)
			change++;
		while (change >= 0)
		{
			if ((n >> change) & 1)
				printf("1");
			else
				printf("0");
			change--;
		}
	}
}
