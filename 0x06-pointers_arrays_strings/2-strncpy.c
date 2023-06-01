#include "main.h"

/**
 * _strncpy - Copies certain bytes of a str
 * @dest: Destination to be coied to
 * @src: String to be copieed
 * @n: Bytes to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
