#include <stdio.h>

/**
 * main- Entry point
 * statements to print
 * base 10 numbers from 0
 *
 * Return: always 0 success
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
