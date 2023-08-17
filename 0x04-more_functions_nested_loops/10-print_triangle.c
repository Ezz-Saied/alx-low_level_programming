#include "main.h"
/**
* print_triangle - prints triangles using # symbol
* @size: first operand
*
*/
void print_triangle(int size)
{
	int i, j, z;

	for (i = 1; i <= size; i++)
	{
		z = size - i;
		for (j = 0; j < z; j++)
			_putchar(' ');
		for (j = 1; j <= i; j++)
			_putchar(35);
		if (i < size)
			_putchar('\n');
	}
	_putchar('\n');
}
