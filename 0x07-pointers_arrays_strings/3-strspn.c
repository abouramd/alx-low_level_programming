#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the first pointer
 * @accept: the second pointer
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int c = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				c++;
			j++;
		}
		i++;
	}
	return c;
}
