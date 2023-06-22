#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size: the size of the triangle
 *
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j, n;

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}
		for (n = 0; n < i; n++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
