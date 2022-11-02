#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dog_t - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));
	if (d == 0)
	{
		free(d);
		d = 0;
		return (0);
	}

	d->name = malloc(strlen(name) + 1);
	if (d->name == 0)
	{
		free(d->name);
		d->name = 0;
		return (0);
	}
	d->owner = malloc(strlen(owner) + 1);
	if (d->owner == 0)
	{
		free(d->owner);
		d->owner = 0;
		return (0);
	}

	strcpy(d->name, name);
	strcpy(d->owner, owner);

	if (name == 0 || owner == 0)
		return (0);

	d->age = age;

	return (d);
}
