#include "main.h"
/**
 * binary_to_uint - covert binary string to unsigned int
 *
 * @b: the string to be comverted
 *
 * Return: the converted number (Success) or 0 (Error)
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int	n;
	unsigned int	l;

	n = 0;
	l = 0;
	while (b[l])
	{
		if (b[l] != '1' && b[l] != '0')
			return (0);
		n = n << 1;
		n = n | (b[l] - '0');
		l++;
	}

	return (n);
}
