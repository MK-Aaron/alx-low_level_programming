#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half string
 * @str: arguemnt to check
 * Return: null
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;
	do {
		i++;
}
	while (str[i] != '\0');

	if (i % 2 != 0)
	{
		n = (i - 1) / 2;
		while (n < i - 1)
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	else
	{
		i = i / 2;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}
