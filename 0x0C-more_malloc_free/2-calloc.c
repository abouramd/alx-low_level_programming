#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with 0.
 * @s: size of array
 * @nmemb: num of elemant
 * Return: NULL if size = 0 or fail else return a pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int s)
{
	char *arr;
	unsigned long size;
	unsigned int i = 0;

	size = nmemb * s;
	if (size == 0)
		return (NULL);
	arr = malloc(size);
	if (!arr)
		return (NULL);
	while (i < size)
		arr[i++] = 0;
	return (arr);
}
