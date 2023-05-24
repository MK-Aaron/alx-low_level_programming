#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int next = 0, tmp = 1, tmp2 = 2;

	printf("1, 2");
	for (i = 0; i <= 50; i++)
	{
		next = tmp2 + tmp;
		tmp = tmp2;
		tmp2 = next;

		printf(", %ld", next);
	}
	putchar('\n');

	return (0);
}
