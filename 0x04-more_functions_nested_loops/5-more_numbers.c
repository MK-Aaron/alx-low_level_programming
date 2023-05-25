#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 1-14 ten times
 *
 * Retrun: Null
 */

void more_numbers(void)
{
	int i, j;

	j = 1;
	while (j < 15)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar('1');
			_putchar(i % 10 + '0');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
