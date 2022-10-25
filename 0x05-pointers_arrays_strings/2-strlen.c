#inlcude "main.h"

/**
 * _strlen - prints the length of a string
 * @s: character for string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		*s++;
	}

	return (len);
}
