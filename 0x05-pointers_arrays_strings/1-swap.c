#include "main.h"

/**
 * swap_int - swap the value of two pointer
 * @a:the first pointer
 * @b:the second pointer
 * Return:nor return value
 */

void swap_int(int *a, int *b)
{
	int save;

	save = *a;
	*a = *b;
	*b = save;
}
