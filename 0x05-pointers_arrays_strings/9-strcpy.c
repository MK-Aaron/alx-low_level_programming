#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - String copy
 * @src: string to copy
 * @dest: destination of string
 *
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
