#include "dog.h"

/**
 * free_dog - free structer
 * @ptr: dog
 * Return: no return
 */

void free_dog(dog_t *ptr)
{
	if (ptr)
	{
			free(ptr->owner);
			free(ptr->name);
	}
	free(ptr);
}
