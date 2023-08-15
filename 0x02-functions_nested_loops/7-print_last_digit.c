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

	l = c % 10;
	_putchar(l);
	return (l);
}
