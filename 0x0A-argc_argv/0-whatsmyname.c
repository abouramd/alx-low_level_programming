#include "main.h"

int main(int ac, char **av)
{
	int i = 0;

	while ((*av)[i])
		_putchar((*av)[i++]);
	_putchar('\n');
	return (0);
}
