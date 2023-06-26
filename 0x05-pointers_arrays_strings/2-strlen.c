#include "main.h"

/**
 * _strlen : count the length of a string.
 * @s: the string pointer
 * Return: returns the length of s.
 */

int _strlen(char *s)
{
	if (!s)
		return (0);
	return (1 + _strlen(s + 1));
}
