#include "main.h"
/**
* _strchr - locates a chracter
* @s: first operand
* @c: second operand
*
* Return: pointer
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (c == *(s + i))
			return (s + i);
	}
	return ('\0');
}
