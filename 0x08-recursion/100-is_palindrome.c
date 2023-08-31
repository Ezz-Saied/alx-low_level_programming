#include "main.h"
/**
* is_palindrome - checks strings palindrome
* @s: first operand
*
* Return: 0 or 1
*/
int is_palindrome(char *s)
{
	char *rev;

	if (*s == ' ')
		return (1);

	rev = reverse_pal(s);
	return (help_pal(s, rev));
}

/**
* help_pal - checks strings palindrome
* @s: first operand
* @rev: second operand
*
* Return: 0 or 1
*/

int help_pal(char *s, char *rev)
{
	if (*s == *rev && *s != '\0')
		return (help_pal(s + 1, rev - 1));

	if (*s == '\0')
		return (1);
	return (0);
}
/**
* reverse_pal - return reverse string
* @s: first operand
*
* Return: return poniter
*/
char *reverse_pal(char *s)
{
	if (*s != '\0')
		return (reverse_pal(s + 1));
	return (s - 1);
}
