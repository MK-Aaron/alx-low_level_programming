#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit
 * @num: arguement
 *
 * Return: num
 */

int print_last_digit(int num)
{
	int j;

	/* j stores the last digit of num*/
	j = num % 10;

	/* if j is less 0 multuiply by -1*/
	if (j < 0)
		j = j * (-1);
	/* Print output of j */
	_putchar(j + '0');

	return (j);
}
