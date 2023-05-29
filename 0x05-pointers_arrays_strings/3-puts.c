#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: Value to be printed
 * Return: Null
 */

void _puts(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
