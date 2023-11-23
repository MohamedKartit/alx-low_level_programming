#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number passed
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int clear;

	if (index > 64 || !n)
		return (-1);

	clear = index;
	i = 1;

	while (clear > 0)
	{
		clear--;
		i *= 2;
	}
	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}

