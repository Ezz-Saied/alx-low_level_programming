#include "main.h"
/**
* is_palindrome - checks strings palindrome
* @s: first operand
*
* Return: 0 or 1
*/
int is_palindrome(char *s)
{
	char *a, *b;
	if (*s == ' ')
		return (1);

	a = s;
	b = s + 1;
	return (help_pal(s, a, b));
}

/**
* help_pal - checks strings palindrome
* @s: first operand
* @a: second operand
* @b: third operand
*
* Return: 0 or 1
*/

int help_pal(char *s, char *a, char *b)
{
	char *y, *z;
	if (*s != '\0')
		return (help_pal(s + 1, a, b));

	z = s - 1;
	y = s - 2;
	if (*a == *z && *b == *y)
		return (1);
	return (0);
}
