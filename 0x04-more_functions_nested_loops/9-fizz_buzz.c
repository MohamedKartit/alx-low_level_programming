#include <stdio.h>
#include "main.h"

/**
 * main - Fizz-Buzz test
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 != 0)
			printf("Fizz");
		else if (n % 5 == 0 && n % 3 != 0)
			printf("Buzz");
		else if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);
		if (n != 100)
			printf(" ");
		n++;
	}
	printf("\n");

	return (0);
}
