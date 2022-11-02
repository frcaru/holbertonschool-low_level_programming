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
	char *_name = malloc(strlen(name));
	char *_owner = malloc(strlen(owner));

	strcpy(_name, name);
	strcpy(_owner, owner);

	if (name == 0 || owner == 0)
		return (0);

	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
