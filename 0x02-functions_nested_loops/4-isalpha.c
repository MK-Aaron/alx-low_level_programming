#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if is alphabet
 * @c: character to check
 *
 * Return: 1 if is alpha 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
