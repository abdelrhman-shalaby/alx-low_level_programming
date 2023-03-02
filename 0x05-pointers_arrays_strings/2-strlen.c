#include "main.h"

/**
* _strlen - this is new function
* @s: pointer to char
* @i: size of string
* Return:@len
*/
int _strlen(char *s)
{
	int len, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i + 1;
	}
	return (len);
}
