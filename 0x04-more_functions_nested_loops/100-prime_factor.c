#include <stdio.h>

/**
 * tosqrt - finds the squre root of a number
 *
 * @n: the number to find square root
 *
 * Return: Always 0 (Success)
 */

double tosqrt(double n)
{
	float sqrt, tmp;

	sqrt = n / 2;
	tmp = 0;
	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (n / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int number, max;
	int i;

	number = 612852475143;
	max = -1;

	while (number % 2 == 0)
	{
		max = 2;
		number /= 2;
	}

	for (i = 3; i <= tosqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			max = i;
			number /= i;
		}
	}

	if (number > 2)
		max = number;

	printf("%ld\n", max);

	return (0);
}
