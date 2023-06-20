#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory not in use
 * @d: address of memory to be freed
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
