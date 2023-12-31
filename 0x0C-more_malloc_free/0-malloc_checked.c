#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of the mem
 *
 * Return: Always ptr.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}

