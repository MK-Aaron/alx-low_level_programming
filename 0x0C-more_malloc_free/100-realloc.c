#include <stdlib.h>

/**
 * _realloc - reuse a prev allocated memory
 * @ptr: previously used mem
 * @old_size: previous size of memory
 * @new_size: new size of mem needed
 * Return: pointer to new allocated space
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_mem, *old_ptr;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr) /* Checks ptr != NULL or == 0*/
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	new_mem = malloc(new_size);

	/* Check if memory was allocated */
	if (new_mem == NULL)
		return (NULL);

	old_ptr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_mem[i] = old_ptr[i];
	}
	else if (new_size < old_size)
	{
		for (i = 0; new_mem[i]; i++)/*Fill new_memory with old bytes*/
			new_mem[i] = old_ptr[i];
	}
	free(ptr);

	return (new_mem);
}
