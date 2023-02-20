#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - small every litter
 *
 * Return: 0
 */
int main(void)
{
	int a = 0;
	int b;
	int n = 1;

	while (n < 10)
	{
		for (b = n; b < 10; b++)
		{
			putchar(48 + a);
			putchar(48 + b);
			putchar(',');
			putchar(' ');
		}
	a++;
	n++;
	}
	putchar('\n');
	return (0);
}
