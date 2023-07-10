#include "main.h"

/**
 * _strdup - copy of the string
 * @str: string
 * Return: returns a pointer to a new string which is a duplicate of the string str
 */

char *_strdup(char *str)
{
	char *d;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	d = malloc(i + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (str[i])
	{
		d[i] = str[i];
		i++;
	}
	d[i] = 0;
	return (d);
}
