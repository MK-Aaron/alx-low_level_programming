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
 * rspace - remove unwanted  spaces in a string
 * @str: string to be removed spaces
 * Return: len of characters omiting space
 */

char *rspace(char *str)
{
	int i, j, k, l, len;
	char *ptr;

	j = len = k = 0;

	len = strlen(str);
	if (len == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * (len + 1));

	if (!ptr)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
			continue;
		for (j = 0; ; j++)
		{
			if (str[i] == ' ')
			{
				i -= j;

				for (l = 0; l < j; l++, i++, k++)
					ptr[k] = str[i];
				break;
			}
			i++;
		}
		ptr[k++] = ' ';
	}
	ptr[k++] = '\0';

	return (ptr);
}

/**
 * token - number of words
 * @str: string to check words
 * Return: words
 */

int token(char *str)
{
	int i, words = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
			words++;
	}

	return (words);
}

/**
 * strtow - splits strings into sub-strings
 * @str: string to be sub-divided
 * Return: String containin sub-strings
 */

char **strtow(char *str)
{
	int len, i, l, k, j, words;
	char **sub_str, *str_space;

	str_space = rspace(str);
	if (str_space == NULL)
		return (NULL);

	len = strlen(str_space);
	words = token(str_space);

	sub_str = malloc(sizeof(char) * words);
	if (sub_str == NULL)
		return (NULL);

	l = k = 0;
	for (i = 0; i < len; i++)
	{
		if (str_space[i] == ' ')
			continue;
		for (j = 0; ; j++)
		{
			if (str_space[i] == ' ')
			{
				i -= j;
				sub_str[k] = malloc(sizeof(char) * j);

				if (sub_str[k] == NULL)
				{
					free_all(sub_str, k, j);
					return (NULL);
				}
				for (l = 0; l < j; l++, i++)
					sub_str[k][l] = str_space[i];
				break;
			}
			i++;
		}
		k++;
	}
	sub_str[k] = '\0';
	return (sub_str);
}
