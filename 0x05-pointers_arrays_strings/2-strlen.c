#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: the string that we want the length to
 *
 * Return: the length of the given string
 */
int _strlen(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
