#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: the string pointer
 * Return: no return value
 */
void _puts(char *str)
{
	if (!str || !*str)
		_putchar('\n');
	else
	{
		_putchar(*str);
		_puts(str + 1);
	}
}
