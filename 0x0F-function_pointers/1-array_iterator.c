#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - array
* @array: first operand
* @size: second operand
* @action: third operand
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = size; i > 0; i--)
		{
			action(*array);
			array++;
		}
	}
}
