#include <stdio.h>

/*
 * 8. Hexadecimal
 */

/**
 * main - prints numbers of base 16 in lowercases
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n = 48;
	char c = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (c <= 102)
	{
		putchar(c);
		c++;
	}
	putchar(10);

	return (0);
}
