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
	char a[26] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
