#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the first pointer
 * @accept: the second pointer
 * Return:a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
