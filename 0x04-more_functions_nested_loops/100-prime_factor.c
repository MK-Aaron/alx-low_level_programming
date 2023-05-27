#include <stdio.h>
#include "main.h"

/**
 * main - primefactor
 * Return: 0
 */

int main(void)
{
	int i;
	long n = 612852475143, next;

	for (i = 2; 1 != n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
			next = i;
		}
	}
	printf("%ld\n", next);

	return (0);
}
