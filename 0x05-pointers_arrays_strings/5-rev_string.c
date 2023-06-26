#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: the string we want to print in reverse
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char temp;
	int i, j, len;

	len = 0;
	j = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	i = len - 1;
	while (j < len / 2)
	{
		temp = s[j];
		s[j] = s[i];
		s[i--] = temp;
		j++;
	}
}
