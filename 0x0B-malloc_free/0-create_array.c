#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array
 * @c: char
 * Return: NULL if size = 0 or fail else return a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(size);
	if (!arr)
		return (NULL);
	while (i < size)
		arr[i++] = c;
	return (arr);
}
