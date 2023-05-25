#include <stdio.h>
#include "main.h"

/**
 * print_square - Prints a square
 * @size: size to be printed
 *
 * Return: Null
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
