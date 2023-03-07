#include "main.h"

/**
* _puts - this is new function
* @str: pointer to char
* Return:0
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
