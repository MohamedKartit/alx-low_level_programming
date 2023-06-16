#include <stdio.h>

/*
 * 11. The success combination in business is:
 * Do what you do better... and: do more of what you do...
 */

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, i, m;

	for (n = 48; n <= 55; n++)
	{
		for (i = 49; i <= 56; i++)
		{
			for (m = 50; m <= 57; m++)
			{

				if ((i > n) && (m > i))
				{

					putchar(n);
					putchar(i);
					putchar(m);
					if (n != 55 || i != 56 || m != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
