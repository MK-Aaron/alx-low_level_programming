#include <stdio.h>
#include <stdlib.h>

/**
 * breakdown - confirms the number of arguements
 * @ac: number of arguements
 * @av: arguements
 * Return: 0
 */

int breakdown(int ac, char *av[])
{
	int i, j;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	/* Checks if arguements are of numbers only */
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] >= '0' && av[i][j] <= '9')
				continue;
			else
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	return (0);
}

/**
 * mul - multipy two intergers
 * @num1: first set of number
 * @num2: second set if number
 *
 * Return: (0);
 */

int mul(char *num1, char *num2)
{
	printf("%d\n", atoi(num1) * atoi(num2));

	return (0);
}

/**
 * main - execution of program
 * @argc: number of arguements entered
 * @argv: arguements entered
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{

	breakdown(argc, argv);
	mul(argv[1], argv[2]);

	return (0);
}
