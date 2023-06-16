#include <stdio.h>

/*
 * 9. Patience, persistence and perspiration
 * make an unbeatable combination for success
 */

/**
 * main - prints all possible combinations of single-digit numbers
 * must be separated by , and space
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int  n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n == 57)
		{
			break;
		}
		putchar(44);
		putchar(32);
		n++;
	}
	putchar(10);

	return (0);
}
