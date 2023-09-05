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
	int i, j;
	char **arr;

	if (ac == 0 || av == NULL)
		return (NULL);
	arr = malloc(sizeof(char *) * ac);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		arr[i] = av[i];
	for (i = 0; i < ac; i++)
	{
		for (j = 0; arr[i][j] != '\0'; j++)
			_putchar(arr[i][j]);

		_putchar('\n');
	}
	return (*arr);
}
