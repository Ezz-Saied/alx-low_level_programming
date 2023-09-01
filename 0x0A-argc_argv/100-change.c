#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main - Entry point
* Description: 'the program's description'
* @argc: describe the parameter
* @argv: seond operand
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", calc_cents(x));
	return (0);
}
