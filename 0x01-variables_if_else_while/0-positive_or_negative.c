#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * prints if a number is equal, positive or negative
 * return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%i greater than 0\n", n);
	}
	else if (n == 0)
	{
	printf("%i equal to 0\n", n);
	}
	else if (n < 0)
	{
	printf("%i less than 0\n", n);
	}
	return (0);
}
