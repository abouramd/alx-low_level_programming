#include "main.h"

/**
 * main - start of the program
 *
 * @ac: argc
 *
 * @av: argv
 *
 * Return: 0, 1 if argc diff 2
 */

int main(int ac, char **av)
{
	int n = 0;

	if (ac != 2)
	{
		printf("Error\n");
		return (1);
	}
	ac = 0;
	n = atoi(av[1]);
	while (n > 0)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
		ac++;
	}
	printf("%d\n",ac);
	return (0);
}
