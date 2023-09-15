#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - print
* @separator: first operand
* @n: second operand
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, const unsigned int));
		if (separator != NULL && i != (n - 1))
			printf("%s\n", separator);
	}
	va_end(num);
}
