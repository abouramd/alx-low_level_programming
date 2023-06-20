#include "main.h"

/**
 * print_alphabet - print the alphabet
 *
 * Return: it is void
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
