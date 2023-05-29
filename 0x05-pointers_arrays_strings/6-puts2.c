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
	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
