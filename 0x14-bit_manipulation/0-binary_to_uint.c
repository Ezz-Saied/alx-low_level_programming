#include "main.h"
#include <stdlib.h>
/**
* binary_to_uint - func
* @b: first operand
*
* Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int str_len = 0, base = 1;

	if (b == NULL)
		return (0);
	for (str_len = 0; b[str_len] != '\0'; str_len++)
	{
		if (b[str_len] != '1' && b[str_len] != '0')
			return (0);
	}
	str_len++;
	while (str_len)
	{
		decimal += ((b[str_len - 1] - '0') * base);
		base *= 2;
		str_len--;
	}
	return (decimal);
}



