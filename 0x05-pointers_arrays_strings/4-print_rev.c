#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: the strng pointer
 * Return:no return value
 */

void print_rev(char *s)
{
	int index;

	index = 0;
	while (s[index])
		index++;
	while (index--)
		_putchar(s[index]);
	_putchar('\n');
}
