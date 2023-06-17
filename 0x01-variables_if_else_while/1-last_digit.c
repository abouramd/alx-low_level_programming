#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Last digit of %d is %d and is ", n, n % 10);
	if (n % 10 == 0)
		puts("0");
	else if (n % 10 > 5)
		puts("greater than 5");
	else
		puts("less than 6 and not 0");
	return (0);
}

