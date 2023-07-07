#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @n: the number to change nth bit
 * @index: nth bit
 * Return: 1 success 0 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int minus;

	if (index >= 64)
		return (-1);

	if (*n == 0)
		return (1);

	for (minus = 1; index > 0; index--, minus *= 2)
		;
	*n -= minus;

	return (1);
}
