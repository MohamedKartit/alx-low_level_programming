#include <stdio.h>

/*
 * 4. When I was having that alphabet soup,
 * I never thought that it would pay off
 */

/**
 * main - prints alphabets except q and e
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int  n = 97;

	while (n <= 122)
	{
		char i = (char)n;

		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}

		putchar(i);
		n++;
	}
	putchar(10);

	return (0);
}
