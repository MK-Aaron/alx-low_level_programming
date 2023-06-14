#include <stdlib.h>

/**
 * free_all - frees memory
 * @ptr: 2d pointers
 * @width: rows of arrays
 * @height: columns of array
 */

void free_all(int **ptr, int width, int height)
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
 * alloc_grid - 2d array
 * @width: width
 * @height: height
 * Return: pointer interger
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(*ptr) * height);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		j = 0;
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr[i] == NULL)
		{
			free_all(ptr, width, height);
			return (NULL);
		}

		while (j < width)
		{
			ptr[i][j] = 0;
			j++;
		}
		i++;
	}

	return (ptr);
}
