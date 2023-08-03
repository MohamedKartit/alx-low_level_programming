#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 *
 * @n: firt number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int c;

	diff = n ^ m;
	c = 0;
	for (; diff;)
	{
		c++;
		diff &= diff - 1;
	}

	return (c);
}
