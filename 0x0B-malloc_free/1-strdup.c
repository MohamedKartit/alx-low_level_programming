#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: the string to be copied
 *
 * Return: returns a pointer to the duplicated string (Success)
 * returns NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int len, i;

	len = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ptr = (char *) malloc(sizeof(char) * (len + 1));

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		*(ptr + i) = *(str + i);
		i++;
	}

	*(ptr + i) = '\0';

	return (ptr);
}
