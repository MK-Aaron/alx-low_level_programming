#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int next = 0, tmp = 0, tmp2 = 1, sum = 0;

	for (i = 1; i <= 100; i++)
	{
		next = tmp2 + tmp;
		tmp = tmp2;
		tmp2 = next;

		if (next > 4000000)
			break;
		else if (next % 2 == 0)
			sum += next;
	}
	printf("%ld\n", sum);

	return (0);
}
