#include "3-calc.h"

/**
 * main - main function
 * @ac: argc
 * @av: argv
 * Return: 0
 */


int main(int ac, char **av)
{
	if (ac == 4 && get_op_func(av[2]))
	{
		printf("%d\n", (int)((get_op_func(av[2]))(atoi(av[1]), atoi(av[3]))));
	}
	else
		printf("Error\n");
	return (0);
}
