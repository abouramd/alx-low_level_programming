#include "0-putchar.h"

/**
 * main - loop truw the string and send each char to _putchar
 *
 * Return: always return success 0.
 */

int main(void)
{
	char *s = "_putchar\n";

	while (*s)
		_putchar(*(s++));
	return (0);
}
