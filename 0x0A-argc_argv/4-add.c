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
 * main - adds positive numbers.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count, n;
	int result = 0;

	for (count = 1; count < argc; count++)
	{
		for (n = 0; argv[count][n] != '\0'; n++)
		{
			if (argv[count][n] < '0' || argv[count][n] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

	}

	for (count = 1; count < argc; count++)
	{
		if (_atoi(argv[count]) >= 0)
			result += _atoi(argv[count]);
	}

	printf("%d\n", result);

	return (0);
}

