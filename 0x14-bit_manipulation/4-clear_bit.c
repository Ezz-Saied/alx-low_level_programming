#include "main.h"
/**
* clear_bit - func
* @n: first operand
* @index: var
*
* Return: int
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);
	m = 1 << index;
	if (*n & m)
		*n ^= m;
	return (1);
}
