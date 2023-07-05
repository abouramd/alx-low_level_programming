#include "main.h"

/**
 * _ipn - recursion to find prime
 * @n: integer
 * @i: checker
 * Return: 1 if is prime or 0 if not
 */

int _ipn(int n, int i)
{
	if (n % i)
		return (0);
	if (i >= n / 2)
		return (1);
	return (_ipn(n, ++i));
}

/**
 * is_prime_number - prime number
 * @n: integer
 * Return: 1 if is prime or 0 if not
 */

int is_prime_number(int n)
{
	return (_ipn(n, 2));
}
