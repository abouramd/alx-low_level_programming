#include "main.h"

/**
 * print_diagsums - prints the sum of
 * the two diagonals of a square matrix of integers
 * @a:pointer to an array
 * @size: size of the array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum_1 = 0, sum_2 = 0, k, m = 0;

	k = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum_1 += a[m];
			if (j == k)
				sum_2 += a[m];
			m++;
		}
		k--;
	}
	printf("%i, %i\n", sum_1, sum_2);
}
