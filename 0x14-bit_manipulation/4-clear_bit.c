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
	unsigned long int num;
	if (!n)
		return (-1);
	num = ~(*n);
	num |= (1 << index);
	*n = ~num;
	return (1);
}

