#include <stdio.h>

/*
 * 3. alphABET
 */

/**
 * main - prints the alphabets lower and upper cases
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int u = 65;

	while (n <= 122)
	{
		char i = (char)n;

		putchar(i);
		n++;
	}
	while (u <= 90)
	{
		char i = (char)u;

		putchar(i);
		u++;
	}
	putchar(10);

	return (0);
}
