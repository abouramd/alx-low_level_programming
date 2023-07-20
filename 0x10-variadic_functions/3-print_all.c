#include "variadic_functions.h"

/**
 * print_all - print all its parameters
 * @f: format
 * Return: void
 */

void print_all(const char *f, ...)
{
	va_list p;
	unsigned int index = 0;
	char *s;

	va_start(p, f);
	while (f && f[index])
	{
		if (f[index] == 'c' && ++index)
		{
			printf("%c", va_arg(p, int));
			continue;
		}
		if (f[index] == 'i' && ++index)
		{
			printf("%d", va_arg(p, int));
			continue;
		}
		while (f[index] == 'f' && ++index)
		{
			printf("%f", va_arg(p, double));
			continue;
		}
		s = va_arg(p, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		index++;
	}
	va_end(p);
	printf("\n");
}
