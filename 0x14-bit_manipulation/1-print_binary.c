#include "main.h"

/**
 * print_binary - print the binary of a num
 * @n: number
 * Return: void function
 */

void print_binary(unsigned long int n)
{
	while (n)
	{
		printf("%ld\n", (n | 1));
		n = (n >> 1);
	}
	printf("\n");
}


