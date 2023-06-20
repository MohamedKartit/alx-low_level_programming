#include "main.h"

/**
 * print_sign - a fucntion prints the sign of a number
 *
 * @n: int to chack
 *
 * Return: returns 1 if it is greater than 0 and -1 if it is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
