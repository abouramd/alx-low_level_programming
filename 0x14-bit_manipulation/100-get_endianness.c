#include "main.h"

/**
 * get_endianness - checks the get_endianness
 *
 * Return: 0 if big endian, 1 if little get_endianness
 */

int get_endianness(void)
{
	int nbr = 255;
	unsigned char *ptr;

	ptr = (unsigned char *)&nbr;
	return (*ptr);
}
