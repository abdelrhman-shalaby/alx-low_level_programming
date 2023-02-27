#include "main.h"

/**
* swap_int - this is new function
*@a:int no.
*@b:int no.
*Return:no
*/
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
