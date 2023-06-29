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
	dest[n] = 0;
	while (dest <= src && src[i2] && i2 < n)
		dest[i1++] = src[i2++];
	while (src[i1] && i1 < n)
		i1++;
	while (dest > src && i1--)
		dest[i1] = src[i1];
	return (dest);
}
