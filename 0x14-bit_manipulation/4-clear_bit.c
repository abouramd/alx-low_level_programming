#include "main.h"
#include <limits.h>

/**
 * clear_bit - set the value of a bit to 0
 *
 * @n: pointer to the memory area of the number
 *
 * @index: the index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);
	(*n) &= (LONG_MAX << index + 1 | LONG_MAX << index);
	return (1);
}

