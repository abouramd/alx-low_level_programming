#include "main.h"

/**
 * _realloc - allocat new size
 *
 * @ptr: ptr
 *
 * @old_size: old size
 *
 * @new_size: new size
 *
 * Return: ptr or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *p;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (!p)
		return (NULL);
	free(ptr);
	return (p);
}

