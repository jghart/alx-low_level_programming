#include "main.h"

/**
 * _strcat - concatenataes two strings
 * @dest: copy to 
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcat(char *des, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
