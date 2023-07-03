#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: board
 * Return: void function
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	char *s;

	while (i < 8)
	{
		s = a[i];
		while (s && *s)
		{
			if (*s != ' ')
				_putchar(*(s));
			s++;
		}
		_putchar('\n');
		i++;
	}
}