#include "main.h"

/**
 * _puts_recursion - prints a string in reverse.
 * @str: the string pointer
 * Return: no return value
 */
void _print_rev_recursion(char *str)
{
	if (str && *str)
	{
		_print_rev_recursion(str + 1);
		_putchar(*str);
	}
}
