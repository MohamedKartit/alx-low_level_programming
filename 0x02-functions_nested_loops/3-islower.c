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
	int Islower;

	if (c <= 'Z' && c >= 'A')
	{
		Islower = 0;
	}
	else
	{
		Islower = 1;
	}

	return (Islower);
}
