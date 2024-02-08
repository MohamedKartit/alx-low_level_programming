#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: first number
 * @m: second number to convert to
 *
 * Return: number of bits that was needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d;
	int c;

	d = n ^ m;
	c = 0;

	while (d)
	{
		c++;
		d &= (d - 1);
	}

	return (c);
}

