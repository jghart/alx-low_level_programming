#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: is a pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
