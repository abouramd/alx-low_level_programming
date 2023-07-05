#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @str: the string pointer
 * Return: no return value
 */
void _puts_recursion(char *str)
{
	if (!str || !*str)
		_putchar('\n');
	else
	{
		_putchar(*str);
		_puts_recursion(str + 1);
	}
}
