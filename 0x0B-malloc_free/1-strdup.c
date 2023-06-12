#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly
 * allocated space in memory, which contains
 * a copy of the string given as a parameter
 * @str: string
 * Return: a pointer
 */

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}

	return (ptr);
}
