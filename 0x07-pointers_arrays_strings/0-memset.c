#include "main.h"
/**
* _memset - fills n bytes with value b in base addres of s
* @s: first operand
* @b: second operand
* @n: third operand
*
* Return: pointer
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{

		*(s + i) = b;
	}

	return (s);
}

