#include "main.h"
#include <stdio.h>
/**
* calc_cents - checks letters in lower case
* @x: first operand
* Return: number of cents
*/
int calc_cents(int x)
{
	int cents = 0;

	while (x != 0)
	{
		if (x % 25 == 0)
		{
			x = x - 25;
			cents++;
		}
		else if (x % 10 == 0)
		{
			x = x - 10;
			cents++;
		}
		else if (x % 5 == 0)
		{
			x = x - 5;
			cents++;
		}
		else if (x % 2 == 0)
		{
			x = x - 2;
			cents++;
		}
		else
		{
			x = x - 1;
			cents++;
		}
	}
	printf("%d\n", cents);
	return (0);
}
