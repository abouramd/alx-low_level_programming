#include "main.h"

/**
 * _strstr - locates a substring
 * @needle: first string
 * @haystack: second string
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while (haystack && needle && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == 0)
				return (&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
