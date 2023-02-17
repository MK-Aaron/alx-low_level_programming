#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
	printf("last digit of %i is %i  greater than 5\n", n, last);
	}
	else if (last == 0)
	{
	printf("last digit of %i is %i equal 0\n", n, last);
	}
	else if (last < 6)
	{
	printf("last digit of %i is %i and its than 6 not 0\n", n, last);
	}
	return (0);
}
