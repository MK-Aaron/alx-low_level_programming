#include "main.h"

/**
 * binary_to_unit - Convert a binary to a number
 * @b: pointing to a string of 0 ans 1 chars
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num << 1;

		if (b[i] == '1')
			num = num | 1;
		i++;
	}

	return (num);
}
