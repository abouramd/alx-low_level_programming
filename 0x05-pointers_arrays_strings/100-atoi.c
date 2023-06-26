#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s : string
 * Return: an integer
 */

int _atoi(char *s)
{
	int n = 0;
	int sign = 1;

	while (*s == ' ')
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + *s - 48;
		s++;
	}
	return (n * sign);
}
