#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable of struct dog type
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return (0);

	d->name = name;
	d->age = age;
	d->owner = owner;
}
