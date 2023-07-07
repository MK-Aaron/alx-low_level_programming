#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: number to check for binary
 * @index: nth bit to check
 * Return: 1 success -1 fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int add;

	if (index >= 64)
		return (-1);

	for (add = 1; index > 0; index--, add *= 2)
		;
	*n += add;

	return (1);
}
