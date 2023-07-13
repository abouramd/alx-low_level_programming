#include "main.h"

/**
 * _realloc - a
 *
 * @ptr: a
 *
 * @old_size: a
 *
 * @new_size: a
 *
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i = 0;
	char *p;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (!p)
		return (NULL);
	while ((unsigned int)i < new_size && (unsigned int)i < old_size)
	{
		p[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (p);
}
