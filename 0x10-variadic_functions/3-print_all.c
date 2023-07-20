#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, *spr = "";

	va_list params;

	va_start(params, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spr, va_arg(params, int));
					break;
				case 'i':
					printf("%s%i", spr, va_arg(params, int));
					break;
				case 'f':
					printf("%s%f", spr, va_arg(params, double));
					break;
				case 's':
					str = va_arg(params, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", spr, str);
					break;
				default:
					i++;
					continue;
			}
			spr = ", ";
			i++;
		}
	}

	printf("\n");

	va_end(params);
}
