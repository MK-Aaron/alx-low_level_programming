#include <stdio.h>
#include "main.h"

/**
 * print_sign - Checks state of an interger
 * @n: Value holder
 *
 * Return: 1 if is greater, 0 if is zero, -1 if is greater
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
