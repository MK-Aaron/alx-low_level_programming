#include <stdlib.h>

/**
 * array_range - Creates array in ascending order
 * @min: first array in element
 * @max: last array in elememnt
 * Return: pointer of the newly created array
 */

int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	/* Creat space for array */
	ptr = malloc(sizeof(*ptr) * len);

	if (ptr == NULL)
		return (NULL);

	/* Fill mem created with array */
	for (i = 0; min < max; min++, i++)
		ptr[i] = min;

	return (ptr);
}
