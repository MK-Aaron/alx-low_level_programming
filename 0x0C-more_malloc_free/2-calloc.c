#include <stdlib.h>
#include <string.h>

/**
 * _calloc - fill memory
 * @nmemb: allocates space of unused space of an array
 * @size: size of memory
 * Return: pointer to filled memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = 0;

	return (ptr);
}
