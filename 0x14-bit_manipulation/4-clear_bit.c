#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @n: the number to change nth bit
 * @index: nth bit
 * Return: 1 success 0 fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;
	unsigned long int minus;

	if (index >= 64)
		return (-1);

	if (*n == 0)
		return (1);

	temp = index;
	for (minus = 1; temp > 0; temp--, minus *= 2)
		;
	if ((*n >> index) & '1')
		*n -= minus;

	return (1);
}
