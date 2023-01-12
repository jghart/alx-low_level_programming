#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: constant byte
 * @n: value of integer
 * Return: returns changed array with the new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
