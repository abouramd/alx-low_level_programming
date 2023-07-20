#include "function_pointers.h"

/**
 * int_index - array_iterator
 * @array: pointe to an array
 * @size: the size of the array
 * @cmp: function
 * Return: void
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (cmp && array && i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
