#include "main.h"

/**
 * _strncpy - copy two strings
 * @dest:string of pointer
 * @src:string of pointer
 * @n: number of byet to use from src
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i1;
	int i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] && src[i2] && i2 < n)
		dest[i1++] = src[i2++];
	dest[i1] = 0;
	return (dest);
}
