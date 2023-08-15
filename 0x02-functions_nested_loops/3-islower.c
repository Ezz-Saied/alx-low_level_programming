#include "main.h"
/**
* _islower - checks letters in lower case
* @c: first operand
*
* Return: 0 or 1
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
