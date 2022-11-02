#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: character
 * @n: value of integer
 * Return: returns changed array with the new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
