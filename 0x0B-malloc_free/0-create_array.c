#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array
 * @c: the character
 *
 * Return: returns NULL (Error)
 * return pointer to the array (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	while (i < size)
	{
		if (ptr == NULL)
			return (NULL);
		*(ptr + i) = c;
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}
