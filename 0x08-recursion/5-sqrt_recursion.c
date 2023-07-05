#include "main.h"

/**
 * _sr - recursion to find sqrt
 * @n: integer
 * @i: checker
 * Return: the sgrt of n or -1 if not found
 */

int _sr(int n, int i)
{
	if (i == n / i)
		return (i);
	if (i > n / i)
		return (-1);
	return (_sr(n, ++i));
}

/**
 * _sqrt_recursion - sqrt of n
 * @n: integer
 * Return: the sgrt of n or -1 if not found
 */

int _sqrt_recursion(int n)
{
	return (_sr(n, 1));
}
