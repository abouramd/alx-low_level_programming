#include "main.h"

/**
 * jack_bauer - prints the last digit of a number
 *
 * Return:the value of the last digit
 */

void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h < 24)
	{
		m = 0;
		while (m < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
