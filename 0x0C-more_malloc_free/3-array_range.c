#include "main.h"

/**
 * array_range - creates an array of int
 * @min: int min
 * @max: int max
 * Return: NULL if size <= 0 or fail else return a pointer to the array
 */

int *array_range(int min, int max)
{
	int *arr;
	unsigned long size;
	unsigned int i = 0;

	size = max - min + 1;
	if (size <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}
