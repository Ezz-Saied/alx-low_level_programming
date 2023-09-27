#include "main.h"
/**
* swap_int - func
* @a: var
* @b: var
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
