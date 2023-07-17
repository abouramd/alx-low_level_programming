#include "dog.h"

/**
 * int_dog - init structer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
