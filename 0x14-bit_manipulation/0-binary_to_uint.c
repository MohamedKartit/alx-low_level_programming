#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char string
 *
 * Return: converted number (Success), 0 (unconvertable char)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unint, power;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
		;
	i--;

	for (power = 1, unint = 0; i >= 0; i--)
	{
		if (b[i] == '0')
		{
			power *= 2;
			continue;
		}
		else if (b[i] == '1')
		{
			unint += power;
			power *= 2;
			continue;
		}
		return (0);
	}
	return (unint);
}

