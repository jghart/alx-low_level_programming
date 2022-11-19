#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numerics;
	unsigned int count;

	va_start(numerics, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(numerics, unsigned int));
		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numerics);
	printf("\n");
}
