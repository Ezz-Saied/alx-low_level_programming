#include "main.h"
/**
* _strcmp - func
* @s1: var
* @s2: var
*
* Return: int
*/
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (*s1 == *s2)
		return (0);
	return (*s1 - *s2);
}
