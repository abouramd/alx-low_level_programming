#include "main.h"

/**
 * print_alpha - print the alphabet
 *
 * Return: it is void
 */

void print_alpha(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}

/**
 * print_alphabet_x10 - call print_alphabet 10 time
 *
 * Return: it is void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		print_alpha();
		i++;
	}
}
