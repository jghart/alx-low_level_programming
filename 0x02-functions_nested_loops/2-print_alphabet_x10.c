#include "main.h"

/**
 * print_alphabet_x10  - prints 10 times the alphabet in lowercase
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char lc;
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
			_putchar(lc);

		_putchar('\n');
	}
}
