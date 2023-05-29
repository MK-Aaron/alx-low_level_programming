#include <stdio.h>
#include "main.h"

/**
 * swap_int - Swap intergers
 * @a: interger to swap
 * @b: number to swap with
 *
 * Return: NULL
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
