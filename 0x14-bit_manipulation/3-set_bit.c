#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: decimal number
 * @index: index position to change, starts from 0
 *
 * Return: 1 success, -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	i = 1;
	while (index > 0)
	{
		i *= 2;
		index--;
	}

	*n += i;

	return (1);
}
