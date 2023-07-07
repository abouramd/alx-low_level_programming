#include "main.h"

/**
 * main - start of the program
 *
 * @ac: argc
 *
 * @av: argv
 *
 * Return: 0, 1 if argc diff 3
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
