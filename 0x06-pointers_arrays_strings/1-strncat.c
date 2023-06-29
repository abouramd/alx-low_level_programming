#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest:string of pointer
 * @src:string of pointer
 * @n: number of byet to use from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i1;
	int i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1])
		i1++;
	while (src[i2] && i2 < n)
		dest[i1++] = src[i2++];
	dest[i1] = 0;
	return (dest);
}
