#include "main.h"
/**
* _sqrt_recursion - return square root
* @n: first operand
*
* Return: -1 or 1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (n);
	return (help_sqr(n, 2));
}

/**
* help_sqr - return square root
* @n: first operand
* @i: second operand
*
* Return: -1 or 1
*/
int help_sqr(int n, int i)
{
	if (n == i * i)
		return (i);

	if (i == n / 2)
		return (-1);

	return (help_sqr(n, i + 1));
}
