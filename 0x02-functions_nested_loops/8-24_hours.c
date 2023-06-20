#include "main.h"

/**
 * jack_bauer - a function that prints every minute
 * of the days tarting from 00:00 to 23:59
 *
 * Return: 0
 */

void jack_bauer(void)
{
	int n = 0;

	while (n <= 23)
	{
		int j = 0;

		while (j < 60)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');

			j++;
		}
		n++;
	}
}
