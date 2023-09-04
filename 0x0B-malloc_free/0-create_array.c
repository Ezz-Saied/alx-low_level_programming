#include "main.h"
#include <stdlib.h>
/**
* create_array - creat an array
* @size: first operand
* @c: second operand
*
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		*(arr + i) = c;
	return (arr);
}
