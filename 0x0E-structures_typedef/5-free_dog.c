#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for dogs
 * @d: dog to free
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(0);
	free(d->name);
	free(d->owner);
	free(d);
}
