#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - reserve space in the heap
* @b: first operand
*
* Return: pointer
*/
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		exit(98);
	return (malloc(b));
}
