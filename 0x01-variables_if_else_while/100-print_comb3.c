#include <stdio.h>

/*
 * 10. Inventing is a combination of brains and materials.
 * The more brains you use, the less material you need
 */

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, i;

	for (n = 48; n <= 56; n++)
	{
		for (i = 49; i <= 57; i++)
		{
			if (i > n)
			{

				putchar(n);
				putchar(i);
				if (n != 56 || i != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
