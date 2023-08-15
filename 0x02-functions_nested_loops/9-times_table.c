#include "main.h"
/**
* times_table - prints 9 times table
*
* Return: 0 or 1
*/
void times_table(void)
{
	int i, j, z;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			z = i * j;
			if (z > 9)
			{
				_putchar('0' + (z / 10));
				_putchar('0' + (z % 10));
			}
			else
			{
				_putchar('0' + z);
			}
			if (j < 9)
			{
				_putchar(44);
				_putchar(' ');
				if (z <= 9)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

