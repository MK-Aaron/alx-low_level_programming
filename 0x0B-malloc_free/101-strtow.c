#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_all - frees memory
 * @ptr: 2d pointers
 * @width: rows of arrays
 * @height: columns of array
 */

void free_all(char **ptr, int width, int height)
{
	int i, j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			free(ptr[j]);
			j++;
		}
		i++;
	}
	free(ptr);
}

/**
 * space - checks for len of strings ommiting spaces
 * @str: string to be counted
 * Return: len of characters omiting space
 */

int space(char *str)
{
	int i, j, k, len, totallen;

	j = len = k = totallen = 0;


	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			continue;
		for (j = 0; ; j++)
		{
			if (str[i] == ' ')
			{
				totallen += j;
				break;
			}
			i++;
		}
		k++;
	}

	return (totallen);
}

/**
 * strtow - splits strings into sub-strings
 * @str: string to be sub-divided
 * Return: String containin sub-strings
 */

char **strtow(char *str)
{
	int len, i, l, k, j;
	char **sub_str, *ptr = str;

	if (str == NULL)
		return (NULL);

	len = space(str);
	if (len == 0)
		return (NULL);
	sub_str = malloc(sizeof(char) * len);
	if (sub_str == NULL)
		return (NULL);

	l = k = 0;
	for (i = 0; i < str[i]; i++)
	{
		if (ptr[i] == ' ')
			continue;
		for (j = 0; ; j++)
		{
			if (ptr[i] == ' ')
			{
				i -= j;
				sub_str[k] = malloc(sizeof(char) * j);

				if (sub_str[k] == NULL)
				{
					free_all(sub_str, k, j);
					return (NULL);
				}
				for (l = 0; l < j; l++, i++)
					sub_str[k][l] = ptr[i];
				break;
			}
			i++;
		}
		k++;
	}
	sub_str[k] = '\0';
	return (sub_str);
}
