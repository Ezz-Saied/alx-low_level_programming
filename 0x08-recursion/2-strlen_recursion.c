#include "main.h"
/**
* _strlen_recursion - count string length
* @s: first operand
*
* Return: length of a string
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n++;
		return (n + _strlen_recursion(s + 1));
	}
	return (n);
}
