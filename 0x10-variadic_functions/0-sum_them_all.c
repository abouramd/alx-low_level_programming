#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of param
 * Return: sum of all its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	int res = 0;
	unsigned int index = 0;

	va_start(p, n);
	while (index++ < n)
		res += va_arg(p, int);
	va_end(p);
	return (res);
}
