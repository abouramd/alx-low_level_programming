#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Start point
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, sizeof(s) - 1);
	return (1);
}
