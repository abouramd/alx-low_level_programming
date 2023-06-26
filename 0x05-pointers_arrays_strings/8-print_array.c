#include "main.h"


/**
 * _putn - prints the number
 * @n: a number the we will print
 * Return:no return value
 */

void _putn(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		_putn(n / 10);
	_putchar(n % 10 + 48);
}

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: the array pointer
 * @n: the number of elements of the array to print
 * Return: no return value
 */

void print_array(int *a, int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		_putn(a[index++]);
		if (index == n)
			break;
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
