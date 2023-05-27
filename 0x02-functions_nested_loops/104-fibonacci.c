#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: (0);
 */
int main(void)
{
	int i;
	unsigned long int num, prev1 = 1, prev2 = 2;

	printf("1, 2");
	for (i = 3; i <= 98; i++)
	{
		num = prev1 + prev2;
		prev1 = prev2;
		prev2 = num;

		printf(", %lu", num);
	}
	putchar('\n');

	return (0);
}
