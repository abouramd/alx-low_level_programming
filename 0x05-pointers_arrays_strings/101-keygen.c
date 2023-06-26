#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - creat a password
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char s[33];
	int sum;

	srand(time(NULL));
	while (1)
	{
		sum = 0;
		for (int i = 0; i < 33; i++)
		{
			s[i] = alpha[rand() % (sizeof(alpha) - 1)];
			sum += s[i];
		}
		if (sum == 2772)
		{
			printf("%s", s);
			break;
		}
	}
return (0);
}
