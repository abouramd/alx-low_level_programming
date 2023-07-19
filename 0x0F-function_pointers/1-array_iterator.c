#include "function_pointers.h"

/**
 * array_iterator - array_iterator
 * @array: pointe to an array
 * @size: the size of the array
 * @action: function
 * Return: void
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	while (action && array && i < size)
	{
		action(array[i]);
		i++;
	}
}
