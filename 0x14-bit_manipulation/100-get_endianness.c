#include "main.h"

int get_endianness(void)
{
	int nbr = 255;
	unsigned char *ptr = (unsigned char *)&nbr;

	return (*ptr);
}
