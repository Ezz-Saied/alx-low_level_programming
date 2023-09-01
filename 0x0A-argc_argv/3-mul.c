#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Description: 'the program's description'
* @argc: describe the parameter
* @argv: seond operand
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int z;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	z = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", z);


	return (0);
}
