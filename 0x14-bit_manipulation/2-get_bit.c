#include "main.h"

/**
 * get_bit - git a bit in a specif index
 *
 * @n: the num to check
 *
 * @index: the index of the bit
 *
 * Return: the bit in the index of -1 if an error
 */

int get_bit(unsigned long n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
			return (n & 1);
		n = (n >> 1);
		i++;
	}
	return (0);
}

