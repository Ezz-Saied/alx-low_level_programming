#include "main.h"
/**
* _strcat - concacenate two strings
* @dest: first operand
* @src: second operand
*
* Return: pointer to string
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 6;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + j) = *(src + i);
		j++;
	}
	return (dest);
}

