#include <stdio.h>

/*
 * 2. I sometimes suffer from insomnia. And when I can't fall asleep,
 * I play what I call the alphabet game
 */

/**
 * main - it prints all teh alphabets in lowercase
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int  n = 97;

	while (n <= 122)
	{
		char i = (char)n;

		putchar(i);
		n++;
	}
	putchar(10);

	return (0);
}
