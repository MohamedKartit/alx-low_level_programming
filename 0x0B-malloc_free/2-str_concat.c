#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenate 2 strings
 *
 * @s1: the first string to concat
 * @s2: the second string to concat
 *
 * Return: pointer to the new string (success), Null (error)
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int len1, len2, i, j;

	len1 = 0;
	len2 = 0;
	i = 0;
	j = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	ptr = (char *) malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			*(ptr + i) = *(s1 + i);
			i++;
		}
	}
	if (s2)
	{
		while (i < (len1 + len2))
		{
			*(ptr + i) = *(s2 + j);
			i++;
			j++;
		}
	}

	*(ptr + i) = '\0';

	return (ptr);
}
