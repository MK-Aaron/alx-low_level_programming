#include <stdio.h>
#include "main.h"

/**
 * puts2 - Prints a char then skips the other
 * @str: String to print
 * Return: Null
 */

void puts2(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
