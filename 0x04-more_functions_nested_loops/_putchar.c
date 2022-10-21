#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c - the character to print
 * Return: On success return 1 else -1
 */
int _purchar(char c)
{
	return (write(1, &c, 1));
}
