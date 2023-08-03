#include "main.h"

int get_bit(unsigned long n, unsigned int index)
{
	int i = 0;

	while (n)
	{
		if (i == index)
			return (n | 1);
		n = (n >> 1);
	}
	return (-1);
}

