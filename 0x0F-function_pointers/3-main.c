#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int x, y;
	char *arr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	arr = argv[2];
	y = atoi(argv[3]);

	if (get_op_func(arr) == NULL || arr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*arr == '/' && y == 0) || (*arr == '%' && y == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(arr)(x, y));
	return (0);
}
