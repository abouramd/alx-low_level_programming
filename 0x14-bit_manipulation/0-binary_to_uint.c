#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: the converted number, or 0 if an error
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	unsigned int i = 0;
	unsigned int pow = 1;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
		if (b[i] != '1' && b[i] != '0')
			return (0);
	while (i && i--)
	{
		if (b[i] == '1')
			res += 2 * pow;
		pow *= 2;
	}
	return (res);
}

