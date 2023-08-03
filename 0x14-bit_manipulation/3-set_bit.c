#include "main.h"

/**
 * set_bit - set the value of a bit to 1
 *
 * @n: pointer to the memory area of the number
 *
 * @index: the index of the bit
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);
	(*n) |= 1 << index;
	return (1);
}

