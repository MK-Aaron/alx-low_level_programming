#include "main.h"

/**
 * factorial - gets factorial of a number
 * @n: Number to find factorial
 * Return: factorial or -1 if number is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
