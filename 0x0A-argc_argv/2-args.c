#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0, i < argc; i++)
		printf("%d\n", argv[i]);
	return (0);
}
