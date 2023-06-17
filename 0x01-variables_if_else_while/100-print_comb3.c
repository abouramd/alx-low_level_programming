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

	a = '0';
	sb = '1';
	while (a <= '9')
	{
		b = sb;
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a != '8')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		sb++;
		a++;
	}
	putchar('\n');
	return (0);
}
