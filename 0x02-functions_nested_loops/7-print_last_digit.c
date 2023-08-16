#include "main.h"
/**
* print_last_digit - return last digit of a number
* @c: first operand
*
* Return: last digit
*/
int print_last_digit(long int c)
{
	int l;

	l = c % 10;

	if (l < 0)

		l = c * -1;

	_putchar('0' + l);
	return (l);
}
