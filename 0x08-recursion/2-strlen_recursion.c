#include "main.h"

/**
 * _strlen_recursion - count the length of a string.
 * @s: the string pointer
 * Return: returns the length of s.
 */

int _strlen_recursion(char *s)
{
	if (!s || !*s)
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
