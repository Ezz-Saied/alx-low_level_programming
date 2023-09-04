#include "main.h"
#include <stdlib.h>
/**
* _strdup - duplicate a string
* @str: first operand
*
* Return: pointer
*/
char *_strdup(char *str)
{
	char *arr;
	int size, i;

	if (str == NULL)
		return (NULL);
	arr = str;
	size = 0;
	while (*(arr + size) != '\0')
		size++;
	size++;
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(arr + i) = *(str + i);
	return (arr);
}
