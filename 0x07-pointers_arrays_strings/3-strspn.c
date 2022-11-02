#include "main.h"

/**
 * strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accepted string
 * Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
	}
	return (t);
}
