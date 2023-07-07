#include "main.h"

/**
 * ft_check - check and convert to int
 *
 * @s: string that we will use
 *
 * Return: the number
 */

int ft_check(char *s)
{
	int n = 0;
	int i = 0;

	if(!s[0])
	{
		printf("Error\n");
		exit(1);
	}
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
		{
			printf("Error\n");
			exit(1);
		}
		n += n * 10 + s[i] + 48;
		i++;
	}
	return (n);
}

/**
 * main - start of the program
 *
 * @ac: argc
 *
 * @av: argv
 *
 * Return: 0, 1 if argv is not an int
 */

int main(int ac, char **av)
{
	int i = 0;
	int n = 0;

	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	while (av[i])
		n += ft_check(av[i++]);
	printf("%d\n", n);
	return (0);
}
