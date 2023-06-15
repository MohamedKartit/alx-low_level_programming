#include <stdio.h>
#include <unistd.h>

/**
 * main - print a phrase to the standard error.
 *
 * Return: Always 0 (Seccess)
 */
int main(void)
{
	write(2, "and that piece of art is usefu\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
