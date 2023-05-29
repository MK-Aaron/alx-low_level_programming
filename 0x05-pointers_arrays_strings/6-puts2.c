#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints a char then skips the other
 * @str: String to print
 * Return: Null
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j != i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
