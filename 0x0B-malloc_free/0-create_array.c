#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: character to fill in
 * Return: pointer to characters
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	else
	{
		i = 0;
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
	}

	return (ptr);
}
