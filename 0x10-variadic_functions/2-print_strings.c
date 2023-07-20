#include "variadic_functions.h"

/**
 * print_strings - prints string followed by newline
 *
 * @separator:  the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		char *str = va_arg(params, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(params);
}
