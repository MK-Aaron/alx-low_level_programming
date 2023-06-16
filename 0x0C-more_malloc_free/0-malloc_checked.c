#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: size of mem to be allocated
 * Return: void pointer
 */


void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(*ptr) * b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
