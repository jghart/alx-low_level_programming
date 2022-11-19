#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all its parameters
 * @n: the numbers to be listed
 * Return: 0 if there is no parameter or number
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list parameters;
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(parameters, n);

	for (count = 0; count < n; count++)
		sum += va_arg(parameters, int);

	va_end(parameters);
	return (sum);
}
