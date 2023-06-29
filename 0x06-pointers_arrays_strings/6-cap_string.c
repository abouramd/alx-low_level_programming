#include "main.h"

/**
 * _cmp - search for a char in a string
 * @c: char that we are search for it
 * Return: 0 if not found, 1 if we found it
 */

int _cmp(char c)
{
	char s[] = " \t\n,;.!?\"(){}";
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string pointer
 *
 * Return: the String str
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (i == 0 || _cmp(str[i - 1]) && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
	return (str);
}
