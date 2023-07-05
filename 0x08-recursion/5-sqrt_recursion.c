#include "main.h"

/**
 * recursion_fun - returns the value of the natural number of square of n
 *
 * @n: the number to calculate sqaure to
 * @i: the squre number of the number
 *
 * Return: the square root number of n
 */
int _recursion_fun(int n, int i)
{
        if (i * i == n)
                return (i);
        else if (i * i > n)
                return (-1);
        return (_recursion_fun(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to return the square root to
 *
 * Return: returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_recursion_fun(n, 0));
}
