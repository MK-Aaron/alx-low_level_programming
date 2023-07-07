#include "main.h"

/**
 * get_bit - returns value of a bit at a given index
 * @n: Number to check for bit
 * @index: index to check for in the bit
 * Return: the value of bit at a certain index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	num = n >> index;

	return (num & 1);
}
