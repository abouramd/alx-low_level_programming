#include "3-calc.h"

/**
 * main - main function
 * @ac: argc
 * @av: argv
 * Return: 0
 */


int main(int ac, char **av)
{
	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	int a = atoi(av[1]);
	int b = atoi(av[3]);

	if (b == 0 && (av[2] == '/' || av[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	if (!get_op_func(av[2]))
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", (int)((get_op_func(av[2]))(atoi(av[1]), atoi(av[3]))));
	return (0);
}
