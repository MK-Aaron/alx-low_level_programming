#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: variable 1
 * @b: variable 2
 *
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int xy;

	xy = *a;
	*a = *b;
	*b = xy;
}
