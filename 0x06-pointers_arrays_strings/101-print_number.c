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
	if (n < 0)
	{
		_putchar('-');
		if (n <= -10)
			print_number((n / 10) * -1);
		print_number((n % 10) * -1);
		return;
	}	
	if (n >= 10)
		print_number(n / 10);
	_putchar(n % 10 + 48);
}
