#include "dog.h"

/**
 * int dog - init structer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: no return 
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: %s\n", "(nil)");
		if (d->age)
			printf("Age: %s\n", d->age);
		else
			printf("Age: %s\n", "(nil)");
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: %s\n", "(nil)");
	}
}
