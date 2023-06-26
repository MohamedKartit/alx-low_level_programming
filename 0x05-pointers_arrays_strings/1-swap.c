#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: first integer to swap with b
 * @b: second integer to swap with a
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
