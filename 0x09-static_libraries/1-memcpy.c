#include "main.h"
/**
* _memcpy - copy src into dest
* @dest: first operand
* @src: second operand
* @n: third operand
*
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
