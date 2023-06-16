#include <stdio.h>

/*
 * 6. Numberz
 */

/**
 * main - prints base 10 single numbers usings putchar
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int  n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar(10);

	return (0);
}
