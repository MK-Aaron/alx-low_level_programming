#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in rev
 * @s: Value to be printed
 * Return: Null
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
