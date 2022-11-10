#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints multiplication of two numbers
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (sum = atoi(argv[1]) * atoi(argv[2]))
			printf("%d", sum);
		return (0);
	}
}
