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
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	unsigned int i = 0;
	char *p;

	p = malloc(new_size);
	if (!p)
		return (NULL);
	while (i < new_size && i < old_size)
	{
		p[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (p);
}
