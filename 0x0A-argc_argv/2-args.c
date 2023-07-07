#include "main.h"

/**
 * main - start of the program
 *
 * @ac: argc
 *
 * @av: argv
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	ac = 0;
	while (av[ac])
		printf("%s\n", av[ac++]);
	return (0);
}
