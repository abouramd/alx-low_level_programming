#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the start address
 * @b: the char that will fill the memory byte
 * @n: bytes of the memory area pointed to by s
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		s[i++] = b;
	return (s);
}
