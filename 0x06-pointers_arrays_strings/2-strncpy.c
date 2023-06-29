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
	int	index;

	index = 0;
	while (src[index] && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
