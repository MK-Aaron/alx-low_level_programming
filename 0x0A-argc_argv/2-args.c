#include <stdio.h>

/**
 * main - prints all arguements entered
 * @argc: Number of arguements entered
 * @argv: arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
