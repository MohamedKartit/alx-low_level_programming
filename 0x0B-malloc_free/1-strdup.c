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

	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	ptr = (char *) malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);

	while (i < len)
	{
		if (ptr == NULL)
			return (NULL);
		*(ptr + i) = *(str + i);
		i++;
	}
	*(ptr + i) = '\0';

	return (ptr);
}
