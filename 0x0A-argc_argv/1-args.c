#include <stdio.h>

/**
 * main - Prints the number of  arguements
 * @argc: count of arguements
 * @argv: arguements
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
