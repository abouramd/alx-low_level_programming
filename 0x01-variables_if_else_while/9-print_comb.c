#include <stdio.h>
/**
 * main - Start point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = '0';
	while (c <= '9')
	{
		putchar(c++);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
