#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - converts a string to an interger
 * @s: string to convert
 * Return: s, if no any number Return 0
 */

int _atoi(char *s)
{
	int i, minus = 0;
	unsigned int num;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			++minus;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = num * 10 + ((s[i]) - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}

	if (num)
	{
		if (minus % 2)
			return (-num);
		else
			return (num);
	}

	return (0);
}

/**
 * main - multiplies two numbers
 * @argc: Count of arguements
 * @argv: arguements enetered
 * Return: 0 success or 1 if no args entered
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}

	mul = _atoi(argv[1]) * _atoi(argv[2]);

	printf("%d\n", mul);

	return (0);
}
