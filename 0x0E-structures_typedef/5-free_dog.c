#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for struct dog
 * @d: pointer to memory block to be freed
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
