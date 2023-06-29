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
			s[i] = ((s[i] - 65) + 13) % 25 + 65;
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = ((s[i] - 97) + 13) % 25 + 97;
		i++;
	}
	return (s);
}
