#include <stdarg.h>
#include "variadic_functions.h"
/**
* sum_them_all - sum arguments
* @n: first operand
*
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list num;

	sum = 0;
	va_start(num, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(num, int);
	va_end(num);
	return (sum);
}

