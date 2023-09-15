#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
* print_all - sum arguments
* @format: first operand
*
*/
void print_all(const char * const format, ...)
{
	va_list l;
	char *string;
	int i;

	i = 0;
	va_start(l, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%i", va_arg(l, int));
				break;
			case 'f':
				printf("%f", va_arg(l, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(l, int));
				break;
			case 's':
				string = va_arg(l, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(l);
}
