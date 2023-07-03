#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: board
 * Return: void function
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
		i++;
	}
}
