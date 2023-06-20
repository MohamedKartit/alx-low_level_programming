#include "main.h"

/**
 * _islower - checks wether the character is lowercase or not
 *
 * @c: the chracter to check
 *
 * Return: 0 if the character is lower 1 if it is not
 */
int _islower(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
