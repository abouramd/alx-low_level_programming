#include "main.h"

/**
 * str_concat - concat of two string
 * @s1: string
 * @s2: string
 * Return: returns a pointer to a new string which is concat of the two string
 */

char *str_concat(char *s1, char *s2)
{
	char *d;
	unsigned int i = 0;
	unsigned int j = 0;

	while (s1 && s1[i])
		i++;
	while (s2 && s2[j++])
		i++;
	d = malloc(i + 1);
	if (!d)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		d[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		d[i++] = s2[j++];
	d[i] = 0;
	return (d);
}
