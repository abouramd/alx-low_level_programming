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
		if (s[i] == c)
			return (1);
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
	int b = 1;
	int i = 0;

	while (str[i])
	{
		if (_cmp(" \t\n,;.!?\"(){}", str[i]))
			b = 1;
		if (str[i] >= 'a' && str[i] <= 'z' && b)
		{
			str[i] = str[i] - 'a' + 'A';
			b = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] - 'A' + 'a';
		i++;
	}
	return (str);
}
