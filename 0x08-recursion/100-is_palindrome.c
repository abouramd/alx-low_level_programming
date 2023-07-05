#include "main.h"

/**
 * _ip - recursion to find palindrome
 * @n: string
 * @i: checker
 * @j: checker
 * Return: 1 if is palindrome or 0 if not
 */

int _ip(char* s, int i, int j)
{
	if (i >= j)
		return (1);
	if (s[i] != s[j])
		return (0);
	return (_ip(s, ++i, --j));
}

int _len(char *s)
{
	if (*s)
		return (1 + _len(s + 1));
	return 0;
}

/**
 * is_palindrome - palindrome
 * @n: string
 * Return: 1 if is prime or 0 if not
 */

int is_palindrome(char* n)
{
	return (_ip(n, 0, _len(n) - 1));
}
