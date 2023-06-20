#include "0-putchar.h"

int main()
{
	char *s = "_putchar\n";
	while (*s)
		_putchar(*(s++));
	return 0;
}
