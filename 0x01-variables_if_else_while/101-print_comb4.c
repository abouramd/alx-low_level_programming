#include <stdio.h>
/**
 * main - Start point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;
	int sb;
	int c;
	int sc;

	a = '0';
	sb = '1';
	sc = '2';
	while (a <= '9')
	{
		b = sb;
		while (b <= '9')
		{
			c = sc;
			while (c <= '9')
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a != '7')
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			sc++;
			b++;
		}
		sb++;
		a++;
	}
	putchar('\n');
	return (0);
}
