#include "main.h"
#include <stdlib.h>
/**
* _realloc - allocates memory
* @ptr: first operand
* @old_size: second element
* @new_size: third element
*
* Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr, *old;
	unsigned int i;

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	old = ptr;
	for (i = 0; i < old_size; i++)
		arr[i] = old[i];
	arr[i + 1] = '\0';
	free(ptr);
	return (arr);
}
