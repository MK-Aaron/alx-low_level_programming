#include <stdio.h>
#include "main.h"

/**
 * print_times_table -  n times table
 * @n: 0 - 15  timestable
 *
 * Return: NULL
 */

void print_times_table(int n)
{
	int i, j, num;

	if (n <= 15 && n >= 0)
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;

			if (j == 0)
				_putchar(num + '0');
			else if (num < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
			else if (num >= 10 && num < 100) /* print two digits */
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else if (num >= 100) /* print three digits */
			{
				_putchar(',');
				_putchar(' ');
				_putchar(num / 100 + '0');
				_putchar((num / 10) % 10 + '0');
				_putchar(num % 10 + '0');
			}
		}
		_putchar('\n');
	}
	}
}
