#include "main.h"

/**
 * _isdigit - checks for a digit from 0 through to 9
 * @c: character to be checked
 * Return: 1 if c is a digit otherwise 0
 */
int _isdigit(int c)
{
	int r;

	r = 0;

	if (c >= '0' && c <= '9')
		r = 1;

	return (r);
}
