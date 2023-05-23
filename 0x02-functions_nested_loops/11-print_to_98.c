#include <stdio.h>
#include"main.h"

/**
 * print_to_98 - print double numbers
 * @n: arguement
 *
 * return: NULL
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for ( ; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}
