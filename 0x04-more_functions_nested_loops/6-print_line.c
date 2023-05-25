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
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
