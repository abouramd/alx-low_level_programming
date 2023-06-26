#include "main.h"

/**
 * puts2 - prints every other character of a str
 * @str: the string pointer
 * Return: no return value
 */
void puts2(char *str)
{
	if (!str || !*str)
		_putchar('\n');
	else
	{
		_putchar(*str);
		if (!*(str + 1))
			puts2(str + 1);
		else
			puts2(str + 2);
	}
}
