#include "main.h"

/**
 * print_binary - print the binary of a num
 * @n: number
 * Return: void function
 */

void print_binary(unsigned long int n)
{
	do {
		_putchar((n & 1) + 48);
		n = (n >> 1);
	} while (n);
}


