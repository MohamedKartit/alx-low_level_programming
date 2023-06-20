#include "main.h"

/**
 * times_table - printsthe 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
	int n, j, result;

	for (n = 0; n <= 9; n++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = n * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
					_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
