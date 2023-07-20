#include "variadic_functions.h"

/**
 * print_strings - print all its parameters
 * @separator: separator
 * @n: number of param
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int index = 0;

	va_start(p, n);
	while (index++ < n)
	{
		char *s = va_arg(p, char *);

		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (index != n && separator)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
