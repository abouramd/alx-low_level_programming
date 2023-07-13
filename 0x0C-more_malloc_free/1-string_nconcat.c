#include "main.h"

/**
 * string_nconcat - concat of two string
 * @s1: string
 * @s2: string
 * @n: int
 * Return: returns a pointer to a new string which is concat of the two string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int i = 0;
	unsigned int j = 0;

	if (!s1 || !s2)
	{
		d = malloc(1);
		if (!d)
			return (NULL);
		*d = 0;
		return (d);
	}
	while (s1 && s1[i])
		i++;
	while (s2 && j < n && s2[j++])
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
	while (s2 && s2[j] && j < n)
		d[i++] = s2[j++];
	d[i] = 0;
	return (d);
}
