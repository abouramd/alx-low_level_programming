#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string of pointer
 * Return: s
 */

char *rot13(char *s)
{
	int i;
	char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *r = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (s[i])
	{
		int u = 0;

		while (l[u])
		{
			if (l[u] == s[i])
			{
				s[i] = r[u];
				break;
			}
			u++;
		}
		i++;
	}
	return (s);
}
