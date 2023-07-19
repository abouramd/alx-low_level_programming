#include "3-calc.h"

/**
 * main - main function
 * @ac: argc
 * @av: argv
 * Return: 0
 */


int main(int ac, char **av)
{
	int a;
	int b;

	if (ac != 4)
	{
		printf("Error\n");
		return (98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if (b == 0 && (av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		return (100);
	}
	if (!get_op_func(av[2]))
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", (int)((get_op_func(av[2]))(a, b)));
	return (0);
}
