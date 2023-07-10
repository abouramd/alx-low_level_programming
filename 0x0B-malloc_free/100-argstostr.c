#include "main.h"

/**
 * argstostr - concat of strings
 * @ac: int
 * @av: strings
 * Return: returns a pointer to a new string which is concat all the string
 */

char *argstostr(int ac, char **av)
{
	char *d;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int c = 0;

	if (av == NULL && ac == 0)
		return (NULL);
	while (av[j])
	{
		i = 0;
		while (av[j][i++])
			c++;
	   j++;
	}
	d = malloc(c + 1);
	if (!d)
		return (NULL);
	c = 0;
	while (av[j])
	{
		i = 0;
		while (av[j][i])
			d[c++] = av[j][i++];
	   j++;
	}
	d[c] = 0;
	return (d);
}
