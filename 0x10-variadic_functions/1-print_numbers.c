#include "variadic_functions.h"

/**
 * print_numbers - print all its parameters
 * @separator: separator
 * @n: number of param
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int index = 0;

	va_start(p, n);
	while (index++ < n)
	{
		printf("%d", va_arg(p, int));
		if (index != n && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
