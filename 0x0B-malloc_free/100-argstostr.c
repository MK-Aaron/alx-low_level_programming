#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: arguement count
 * @av: arguements entered
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, len, totallen;
	char *token, *arg;

	if (ac <= 0 || av == NULL)
		return (NULL);

	totallen = 0;
	for (i = 0; i < ac; i++)
	{
		totallen = totallen + strlen(av[i]) + 1;
	}

	token = malloc(sizeof(char) * (totallen + 1));

	if (token == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		arg = av[i];
		for (j = 0; j < len; j++)
		{
			token[k] = arg[j];
			k++;
		}
		token[k++] = '\n';
	}

	return (token);
}
