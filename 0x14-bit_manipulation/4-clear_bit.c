#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit to 0 at a given index.
 *
 * @n: pointer to decimal number to change
 * @index: index position to change
 *
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;
	unsigned int x;

	if (index > 64)
		return (-1);

	x = index;

	while (x > 0)
	{
		i *= 2;
		x--;
	}

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
