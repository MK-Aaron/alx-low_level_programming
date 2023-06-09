#include <stdio.h>

/**
 * main - Prints the first arguement
 * @argc: count of arguements
 * @argv: arguements
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);

	return (0);
}
