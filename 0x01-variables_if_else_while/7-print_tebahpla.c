#include <stdio.h>
/**
 * main - Start point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
		putchar(c--);
	putchar('\n');
	return (0);
}
