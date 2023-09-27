#include "main.h"
/**
* _strlen - func
* @s: var
*
* Return: int
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
