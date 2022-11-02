#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
		return (0);

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		free(d);
		d = NULL;
		return (0);
	}

	d->name = malloc(strlen(name) + 1);
	if (!d->name)
	{
		free(d->name);
		free(d);
		d->name = NULL;
		d = NULL;
		return (0);
	}
	d->owner = malloc(strlen(owner) + 1);
	if (!d->name || !d->owner)
	{
		free(d->name);
		free(d->owner);
		free(d);
		d->name = NULL;
		d->owner = NULL;
		d = NULL;
		return (0);
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);

	d->age = age;

	return (d);
}
