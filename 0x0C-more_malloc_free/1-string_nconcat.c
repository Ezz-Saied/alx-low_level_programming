#include "main.h"
#include <stdlib.h>
int size_string(char *s1);
/**
* string_nconcat - concates two strings
* @s1: first operand
* @s2: second operand
* @n: third operand
*
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int size_s1, size_s2, i, j;

	size_s1 = size_string(s1);
	size_s2 = size_string(s2);
	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	if (n > size_s2)
		n = size_s2;

	arr = malloc(sizeof(char) * (size_s1 + n + 1));
	if (arr == NULL)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		arr[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		arr[i] = s2[j];
		i++;
	}
	arr[i] = '\0';
	return (arr);

}


/**
* size_string - cal size of strings
* @s1: first operand
*
* Return: size
*/
int size_string(char *s1)
{
	unsigned int size, i;

	size = 0;
	i = 0;
	if (s1 != NULL)
	{
		while (*(s1 + i) != '\0')
		{
			i++;
			size++;
		}
	}
	return (size);
}
