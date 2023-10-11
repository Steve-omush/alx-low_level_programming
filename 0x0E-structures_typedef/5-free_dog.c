#include "dog.h"
#include <stdlib.h>

/**
 * free_dog: deallocates memory
 * @d: struct dog
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
