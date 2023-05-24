#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int next = 0, tmp = 1, tmp2 = 2, sum = 3;

	for (i = 3; i <= 100; i++)
	{
		next = tmp2 + tmp;
		tmp = tmp2;
		tmp2 = next;

		if (next > 4000000)
			break;
		sum += next;
	}
	printf("%ld\n", sum);

	return (0);
}
