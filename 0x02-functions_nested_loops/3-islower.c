#include "main.h"

/**
 * _islower - check if the char is lower or not
 *
 * @c: the character passed to the function
 *
 * Return: 0 if c is not lower and 1 if c is lower
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
