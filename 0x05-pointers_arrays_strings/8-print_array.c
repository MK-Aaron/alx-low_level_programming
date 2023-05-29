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
	while (a[i] != '\0')
	{
		if (a[i] == a[n - 1])
			printf("%d\n", a[i]);
		else
			printf("%d, ", a[i]);
		i++;
	}
}
