#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value of first integer
 * @b: value of second integer
 */

void swap_int(int *a, int *b);
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
