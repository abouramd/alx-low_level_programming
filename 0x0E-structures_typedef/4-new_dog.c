#include "dog.h"



/**
 * _strdup - copy of the string
 * @str: string
 * Return: returns a pointer to a new string
 * which is a duplicate of the string str
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	d = malloc(i + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (str[i])
	{
		d[i] = str[i];
		i++;
	}
	d[i] = 0;
	return (d);
}


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
		ptr->name = _strdup(name);
		if (!ptr->name)
			return (NULL);
		ptr->age = age;
		ptr->owner = _strdup(owner);
		if (!ptr->owner)
			return (NULL);
	}
	return (ptr);
}
