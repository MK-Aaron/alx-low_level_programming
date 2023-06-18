#include <stdlib.h>
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
 * strtow - splits strings into sub-strings
 * @str: string to be sub-divided
 * Return: String containin sub-strings
 */

char **strtow(char *str)
{
	int i, j, k, l, len;
	char **sub_str;
	char *ptr = str;

	j = len = k = 0;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	sub_str = malloc(sizeof(char) * (len + 1));
	if (sub_str == NULL)/* Checks if space was allocated */
		return (NULL);

	for (i = 0; i < len; i++)
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
	return (sub_str);
}
