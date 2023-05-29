#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints array
 * @a: Array to be printed
 * @n: the number of elements of the array to be printed.
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i <= n && n >= 0)
	{
		if (a[i] == a[0])
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
		i++;
	}
	putchar('\n');
}
