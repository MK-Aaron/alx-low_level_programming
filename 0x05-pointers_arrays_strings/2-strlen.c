#include <stdio.h>
#include "main.h"

/**
 * _strlen - check length of a string
 * @s: arguement to get length
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
