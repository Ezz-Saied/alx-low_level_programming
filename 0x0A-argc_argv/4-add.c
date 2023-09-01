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
	int i, sum, x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		x = (int)argv[i];
		if (x < 48 || x > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);


	return (0);

}
