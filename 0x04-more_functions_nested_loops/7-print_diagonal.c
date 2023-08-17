#include "main.h"
/**
* print_diagonal - checks letters in lower case
* @n: first operand
*
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
			_putchar(' ');
		_putchar(92);
		if (i < n)
			_putchar('\n');
	}
	_putchar('\n');
}
