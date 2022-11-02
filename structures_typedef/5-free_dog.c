#include "dog.h"
#include <stdlib.h>

/**
 *
 * free_dog - frees variable
 * @d: dog_t variable type
 *
 * Return: 0
 */

void free_dog(dog_t *d)
{
	if (d && d->name)
	{
		free(d->name);
		d->name = 0;
	}
	if (d && d->owner)
	{
		free (d->owner);
		d->owner = 0;
	}
	if (d)
	{
		free(d);
		d = 0;
	}
}

