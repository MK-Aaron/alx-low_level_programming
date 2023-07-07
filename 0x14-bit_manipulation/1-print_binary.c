#include "main.h"

/**
 * print_binary - convert number to binary
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		printf(print_binary >> n);
	}

	_putchar((n & 1) + '0');
}
