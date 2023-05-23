#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet
 *
 * Return: NULL
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	for (i = 1; i <= 10; i++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			++ch;
		}
		_putchar('\n');
	}
}
