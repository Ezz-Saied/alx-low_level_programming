#include "main.h"
/**
* _puts_recursion - prints string recursivly
* @s: first operand
*
* Return: 0 or 1
*/
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
