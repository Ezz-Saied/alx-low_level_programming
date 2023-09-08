#include "main.h"
#include <stdlib.h>
/**
* array_range - allocates memory
* @min: first operand
* @max: second element
*
* Return: pointer
*/
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)

		arr[i] = min;
	return (arr);
}


