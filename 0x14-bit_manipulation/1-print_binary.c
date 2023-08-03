#include "main.h"

/**
 * print_binary - print the binary of a num
 * @n: number
 * Return: void function
 */

void print_binary(unsigned long int n)
{
	do {
		printf("%ld", (n & 1));
		n = (n >> 1);
	} while (n);
}


