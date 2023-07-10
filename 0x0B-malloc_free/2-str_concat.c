#include "main.h"

/**
 * _strdup - copy of the string
 * @str: string
 * Return: returns a pointer to a new string which is a duplicate of the string str
 */

char *str_concat(char *s1, char *s2)
{
	char *d;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL || s2 == NULL)
	{
		d = malloc(1);
		if (d == NULL)
			return (NULL);
		*d = 0;
		return (d);
	}
	while (s1[i])
		i++;
	while (s2[j++])
		i++;
	d = malloc(i + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		d[i++] = s2[j++];
	d[i] = 0;
	return (d);
}
