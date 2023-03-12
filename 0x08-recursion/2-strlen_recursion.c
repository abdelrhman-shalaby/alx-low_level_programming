#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *@long: the long of s
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int longs = 0;

	if (*s)
	{
		longs++;
		longs +=_strlen_recursion(s + 1); 
	}
	return (longs);
}

