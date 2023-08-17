#include "main.h"
/**
* print_square - checks letters in lower case
* @size: first operand
*
*/
void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar(35);
		if (i < size)
			_putchar('\n');
	}
	_putchar('\n');
}
