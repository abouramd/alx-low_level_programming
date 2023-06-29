#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string of pointer
 * Return: s
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = (s[i] - 'A' + 13) % 26 + 'A';
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = (s[i] - 'a' + 13) % 26 + 'a';
		i++;
	}
	return (s);
}
