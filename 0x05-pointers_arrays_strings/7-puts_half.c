#include "main.h"

/**
 * puts_half - rints half of a string, followed by a new line.
 * @s: the strng pointer
 * Return:no return value
 */

void puts_half(char *s)
{
	int index;

	index = 0;
	while (s[index])
		index++;
	index = (index - 1) / 2 + 1;
	while (s[index])
		_putchar(s[index++]);
	_putchar('\n');
}
