#include "main.h"
#include <stdlib.h>
int size_string(char *s1, char *s2);

/**
* str_concat - concatenates two strings
* @s1: first operand
* @s2: second operand
*
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
	int size, i, j;
	char *arr;


	size = size_string(s1, s2);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		return ("");
	i = 0;
	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
		{
			*(arr + i) = *(s1 + i);
			i++;
		}
	}

	j = 0;

	if (s2 != NULL)
	{

		while (*(s2 + j) != '\0')
		{
			*(arr + i) = *(s2 + j);
			i++;
			j++;
		}
	}

	return (arr);
}
/**
* size_string - cal size of strings
* @s1: first operand
* @s2: second operand
*
* Return: size
*/
int size_string(char *s1, char *s2)
{
	int size, i;

	size = 0;
	i = 0;
	
	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
		{
			i++;
			size++;
		}
	
		i = 0;
	}
	if (s2 != NULL)
	{
		while (*(s2 + i) != '\0')
		{
			i++;
			size++;
		}
	}
	return (size + 1);
}

