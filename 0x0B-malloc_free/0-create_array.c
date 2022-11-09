#include "main.h"
#include <stdlib>

/**
 * create_array - creates an array and initializes it with a specific char
 * @size: number of bytes allocated
 * @c: character
 * Return: returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
