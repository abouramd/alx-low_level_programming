#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @str: string of pointer
 * Return: str
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = ((s[i] - 65) + 13) % 26 + 65;
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] = ((s[i] - 97) + 13) % 26 + 97;
		i++;
	}
	return (s);
}
