#include "main.h"

/**
 * print_sign - print the sign of number
 *
 * @n: hte number passed to the function
 *
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 if n is less than zero
 */

int print_sign(int n)
{
	int ret = 0;
	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n < 0)
	{

		_putchar('-');
		ret = -1;
	}
	else
		_putchar('0');
	return ret;
}
