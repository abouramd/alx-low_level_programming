#include "main.h"

/**
 * main - start of the program
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int i = 0;

	while (av[0][i])
		_putchar(av[0][i++]);
	_putchar('\n');
	return (0);
}
