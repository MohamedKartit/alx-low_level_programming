#include <stdio.h>

/*
 * 7. Smile in the mirror
 */

/**
 * main - prints the reverse alphabets
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int  n = 122;

	while (n >= 97)
	{
		char i = (char)n;

		putchar(i);
		n--;
	}
	putchar(10);

	return (0);
}
