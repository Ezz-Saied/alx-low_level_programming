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
	int i, sum, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);


	return (0);

}
