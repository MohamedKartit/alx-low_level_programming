#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into the program
 *
 * @argc: number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
