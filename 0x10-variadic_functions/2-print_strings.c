#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
* print_strings - sum arguments
* @separator: first operand
* @n: second operand
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list s;
	unsigned int i;

	va_start(s, n);
	for (i = 0; i < n; i++)
	{
		char *arr;

		arr = va_arg(s, char *);
		if (arr == NULL)
			printf("(nil)");
		else
			printf("%s", arr);
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(s);
}
