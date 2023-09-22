#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* _strlen - Calculate lenght of a string.
* @s: first operand
*
* Return: len string
*/
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
