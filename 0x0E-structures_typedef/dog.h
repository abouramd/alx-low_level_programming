#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - my first structer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct dog
{
	char	*name;
	float	age;
	char	*owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
