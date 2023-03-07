#include "main.h"

/**
* _strlen - this is new function
* @s: pointer to char
* Return:@len
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
