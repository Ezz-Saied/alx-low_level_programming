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
	char *space;

	space = malloc(b);

	if (space == NULL)
		exit(98);
	return (space);
}
