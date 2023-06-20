#include "main.h"

/**
 * _isalpha - check if the char is alphabet or not
 *
 * @c: the character passed to the function
 *
 * Return: 0 if c is not alphabet and 1 if c is alphabet
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
