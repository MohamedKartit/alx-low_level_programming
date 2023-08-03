#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an
 * unisgned integer
 *
 * @b: the binary number to be converted
 *
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result, pow;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}

	for (result = 0, pow = 1, len--; len >= 0; pow *= 2, len--)
	{
		if (b[len] == '1')
			result += pow;
	}

	return (result);
}
