#include "main.h"

/**
 * _strcmp - compar two strings
 * @dest:string of pointer
 * @src:string of pointer
 * Return: 0 if is the same else the diff between them
 */

int _strcmp(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] || dest[i])
	{
		if (dest[i] != src[i])
			return (dest[i] - src[i]);
		i++;
	}
	return (0);
}
