#include "main.h"

/**
 * _abs - print the sign of number
 *
 * @n: hte number passed to the function
 *
 * Return: abs value
 */

int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
