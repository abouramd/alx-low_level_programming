#include "dog.h"

/**
 * new_dog - init structer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: no return
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr)
	{
		ptr->name = name;
		ptr->age = age;
		ptr->owner = owner;
	}
	return (ptr);
}
