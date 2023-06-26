#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the strng pointer
 * Return:no return value
 */

void rev_string(char *s)
{
	int end;
	int start;
	int swap;

	end = 0;
	start = 0;
	while (s[end])
		end++;
	while (--end > start)
	{
		swap = s[end];
		s[end] = s[start];
		s[start++] = swap;
	}
}
