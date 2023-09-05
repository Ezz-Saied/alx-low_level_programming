#include "main.h"
#include <stdlib.h>
/**
* argstostr - concate arguments
* @ac: first operand
* @av: second operand
*
* Return: pointer
*/
char *argstostr(int ac, char **av)
{
	int i;
	char *arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	arr = malloc(sizeof(char) * ac);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		arr[i] = *av[i];
	for (i = 0; i < ac; i++)
	{
		_putchar(arr[i]);

		_putchar('\n');
	}
	return (arr);
}
