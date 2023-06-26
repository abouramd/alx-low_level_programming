#include "main.h"

/**
 * _strcpy - copy src in dest
 * @dest:string pointer
 * @src:string pointer
 * Return: no return value
 */

char *_strcpy(char *dest, char *src)
{
	int index1 = 0;
	int index2 = 0;

	while (src[index2])
		dest[index1++] = src[index2++];
	dest[index1] = 0;
	return (dest);
}
