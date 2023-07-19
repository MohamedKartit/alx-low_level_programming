#include "function_pointers.h"

/**
 * print_name - prints a name
 *
 * @name: the string name to be printed
 * @f: the printing function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
