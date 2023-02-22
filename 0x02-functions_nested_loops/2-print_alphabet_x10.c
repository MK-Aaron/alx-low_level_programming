#include "main.h"

/**
 * print_alphabet_x10 - A function
 * that prints 10 times the alphabet
 * in lower case
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char i = 0, ch;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
