#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: arguement
 *
 * Return: Null
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (n > i)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n <= 0 )
		_putchar('\n');
}
