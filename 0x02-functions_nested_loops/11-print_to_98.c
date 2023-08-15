#include "main.h"
/**
* print_to_98 - print numbers from n to 98
* @n: first operand
*
*/
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		_putchar(i);
		if (i < 98)
		{
			_putchar(44);
			_putchar(' ');
		}
	}
}
