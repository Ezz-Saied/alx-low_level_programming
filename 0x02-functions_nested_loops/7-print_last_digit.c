#include "main.h"
/**
* print_last_digit - return last digit of a number
* @c: first operand
*
* Return: last digit
*/
int print_last_digit(int c)
{
	int l;

	if (c < 0)
		c = c * -1;

	l = c % 10;
	_putchar('0' + l);
	return (l);
}
