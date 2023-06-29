#include "main.h"

/**
 * print_number - function that prints an integer
 *
 * @n: number
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int o;
	
	o = n;
	if (n < 0)
	{
		_putchar('-');
		o = n * -1;
	}	
	if (o >= 10)
		print_number(o / 10);
	_putchar(o % 10 + 48);
}
