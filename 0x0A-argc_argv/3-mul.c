#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert string to a number
 *
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int digit = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			digit = (digit * 10) + (*s - '0');
		else if (digit > 0)
			break;
	} while (*s++);

	return (digit * sign);
}

/**
 * main - multiplies 2 number
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

