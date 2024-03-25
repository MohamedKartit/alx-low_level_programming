#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 *
 * @c: the chracter to check
 *
 * Return: 0 if the character is alpha and 1 if it is not
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
