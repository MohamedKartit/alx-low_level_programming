#include "main.h"

/**
 * print_number - this function that prints an integer.
 *
 * @n: the integer to print
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar('0' + (num % 10));
}
