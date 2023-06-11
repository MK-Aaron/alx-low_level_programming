#include <stdio.h>
#include <stdlib.h>

/**
 * main -  prints the minimum number of coins
 * to make change for an amount of money
 * @argc: Number of arguements
 * @argv: arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num, count, i;
	int cents[] = {25, 10, 5, 2, 1};

	/* Check number of arguements entered */
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
	}
	else
	{
		count = 0;
		for (i = 0; i < 5; i++)
		{
			while (num > cents[i])
			{
				count++;
				num -= cents[i];
			}
		}
	}
	/* Prints the number of coins */
	printf("%d\n", count);

	return (0);
}
