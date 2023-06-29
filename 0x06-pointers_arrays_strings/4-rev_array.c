#include "main.h"

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: pointer to an array of int
 * @n: number of elements of the array
 * Return: void function
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	while (i < --n)
	{
		tmp = a[i];
		a[i++] = a[n];
		a[n] = tmp;
	}
}
