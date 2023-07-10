#include "main.h"

/**
 * cou - count words
 * @str: string
 * Return: number of word
 */

unsigned int cou(char *str)
{
	unsigned int i = 0;
	unsigned int c = 0;

	while (str && str[i] == ' ')
		i++;
	while (str && str[i])
	{
		while (str[i] && str[i] != ' ')
			i++;
		while (str[i] && str[i] == ' ')
			i++;
		c++;
	}
	if (i == 0)
		return (0);
	return (c);
}

/**
 * strtow - split of strings
 * @str: strings
 * Return: splits a string into words
 */

char **strtow(char *str)
{
	char **p;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int m = 0;
	unsigned int c = 0;

	c = cou(str);
	if (c == 0)
		return (NULL);
	c++;
	p = malloc(sizeof(char *) * c);
	if (!p)
		return (NULL);
	i = 0;
	c = 0;
	while (str && str[i] == ' ')
		i++;
	while (str && str[i])
	{
		j = 0;
		while (str[i] && str[i] != ' ')
		{
			i++;
			j++;
		}
		p[c] = malloc(j + 1);
		if (!p[c])
			return (NULL);
		m = 0;
		i -= j;
		while (j--)
			p[c][m++] = str[i++];
		p[c][m] = 0;
		while (str[i] && str[i] == ' ')
			i++;
		c++;
	}
	p[c] = NULL;
	return (p);
}
