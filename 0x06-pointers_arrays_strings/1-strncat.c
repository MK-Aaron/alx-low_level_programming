#include "main.h"

/**
 * _strncat - concatenate strng n bytes
 * @dest: String to concatenate
 * @src: String to be concatenated
 * @n: bytes to be concatenated
 *
 * Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
