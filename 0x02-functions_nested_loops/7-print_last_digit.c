#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @d: character to show the last digit
 * Return: returns the value of the last digit
 */
int print_last_digit(int d)
{
	int ld = d % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (ld);
}
