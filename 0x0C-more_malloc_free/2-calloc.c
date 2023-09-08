#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory
* @nmemb: first operand
* @size: second element
*
* Return: 0 or 1
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	unsigned in i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}


