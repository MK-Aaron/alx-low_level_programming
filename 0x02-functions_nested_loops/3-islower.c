#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * Return: 0
 */

int _islower(int c)
{
	char ch;
	int j = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
			j = 1;
	}
	return (j);
}
