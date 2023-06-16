#include <stdio.h>

/*
 * 12. Software is eating the World
 */

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, i;

	while (n <= 99)
	{
		i = n;
		while (i <= 99)
		{
			if (i != n)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);

				if (n != 98 || i != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			i++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
