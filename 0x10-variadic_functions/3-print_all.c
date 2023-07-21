#include "variadic_functions.h"

void pint(va_list p)
{
       printf("%d", va_arg(p, int));
}

void pchar(va_list p)
{
       printf("%c", va_arg(p, int));
}

void pfloat(va_list p)
{
       printf("%f", va_arg(p, double));
}

void pstring(va_list p)
{
	char *s = va_arg(p, char *);
	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)"); 
}

/**
 * print_all - print all its parameters
 * @f: format
 * Return: void
 */

void print_all(const char *f, ...)
{
	va_list p;
	void (*ptr[])(va_list) = {
		&pchar,
		&pint,
		&pfloat,
		&pstring
	};
	char *name = "cifs";
	unsigned int index = 0;
	int j;
	int  t = 0;

	va_start(p, f);
	while (f && f[index])
	{
		j = 0;
		while (name[j])
		{
			if (name[j] == f[index] && ((t == 1 && printf(", ")) ||(t = 1)))
				(ptr[j])(p);
			j++;
		}
		index ++;
	}
	va_end(p);
	printf("\n");
}
