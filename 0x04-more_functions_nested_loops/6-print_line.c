#include <stdio.h>
#include "main.h"

/**
 * print_line - print horizontal lines
 * @n: how long the line should be
 *
 * Return: Null
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
