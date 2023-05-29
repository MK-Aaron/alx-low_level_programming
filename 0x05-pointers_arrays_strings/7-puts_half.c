#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half string
 * @str: arguemnt to check
 * Return: null
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	do {
		i++;
}
	while (str[i] != '\0');

	if (i % 2 != 0)
	{
		printf("%d\n", (i - 1) / 2);
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
