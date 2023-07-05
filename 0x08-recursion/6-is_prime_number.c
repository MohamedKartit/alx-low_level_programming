#include "main.h"

/**
 * get_prime - calculate if a number is prime
 *
 * @n: number to calculate prime to
 * @i: iterator
 *
 * Return: 1 if prime, 0 if not
 */
int get_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (get_prime(n, i - 1));
}

/**
 * is_prime_number -  returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: number to check
 *
 * Return: 1 if n is prime 0 if n is not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(n, n - 1));
}
