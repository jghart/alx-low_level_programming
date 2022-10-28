#include <stdio.h>

/**
 * _putchar - prints out the character c to stdout
 * @c: character to be printed
 * Return: 1 on success 
 */
int _puchar(char c)
{
	return ((write(1, &c, 1));
}
