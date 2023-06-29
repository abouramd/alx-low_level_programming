#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: str
 */

char *leet(char *str)
{
	int i = 0;
	int a = 0;
	char d[] = "43071";
	char s[] = "aeotl";
	char S[] = "AEOTL";

	while (str[i])
	{
		a = 0;
		while (s[a])
		{
			if (str[i] == s[a] || str[i] == S[a])
				str[i] = s[a];
			a++;
		}
		i++;
	}
	return (str);
}
