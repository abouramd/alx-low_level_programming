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

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 + 48);
			putchar(a % 10 + 48);
			putchar(' ');
			putchar(b / 10 + 48);
			putchar(b % 10 + 48);
			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
