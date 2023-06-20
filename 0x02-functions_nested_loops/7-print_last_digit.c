#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 *
 * @n: the integer to get the last digit of
 *
 * Return: the last of an integer
 */

int print_last_digit(int n)
{
	int Last_Num;

	if (n < 0)
	{
		n = -n;
	}
	
	Last_Num = n % 10;
	if (Last_Num < 0)
	{
		Last_Num = -Last_Num;
	}
	_putchar('0' + Last_Num);

	return (Last_Num);
}
