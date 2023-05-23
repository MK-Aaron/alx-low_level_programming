#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @j: Variable holder
 *
 * Return: 0
 */

int _abs(int j)
{
	if (j < 0)
		return (-j);
	else if (j > 0)
		return (j);
	else
		return (j);
}
