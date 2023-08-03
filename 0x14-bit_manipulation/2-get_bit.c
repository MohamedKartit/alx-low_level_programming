#include <stdio.h>
#include "main.h"

/**
 * get_bit - gives the value of a bit at a given index
 * @n: number
 * @index: index starts from 0
 *
 * Return: value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	i = n >> index;

	return (i & 1);
}
