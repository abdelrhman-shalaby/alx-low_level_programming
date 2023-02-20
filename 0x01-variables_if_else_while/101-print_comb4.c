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
	int c = 0;
	int a = 1;
	int b;
	int n = 2;
	int nn = 2;
	int aa = 1;

	while (n < 10)
	{
		for (b = n; b < 10; b++)
		{
			putchar(48 + c);
			putchar(48 + a);
			putchar(48 + b);
			if (a + b + c != 24)
			{
			putchar(',');
			putchar(' ');
			}
		}
	a++;
	n++;
		if (a + n == 17)
		{
			c++;
			nn++;
			aa++;
			a = aa;
			n = nn;
		}
	}
	putchar('\n');
	return (0);
}
