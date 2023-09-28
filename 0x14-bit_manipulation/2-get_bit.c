#include "main.h"
/**
* get_bit - func
* @n: first operand
* @index: var
*
* Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
