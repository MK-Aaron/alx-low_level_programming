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
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	ptr = memset(ptr, 0, size * nmemb);

	return (ptr);
}
