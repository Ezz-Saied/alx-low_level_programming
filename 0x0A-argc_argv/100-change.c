#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* Description: 'the program's description'
* @argc: describe the parameter
* @argv: seond operand
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int x, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("0\n");
		return (0);
	}
	while (x != 0)
	{
		if (x % 25 == 0)
		{
			x = x - 25;
			cents++;
		}
		else if (x % 10 == 0)
		{
			x = x - 10;
			cents++;
		}
		else if (x % 5 == 0)
		{
			x = x - 5;
			cents++;
		}
		else if (x % 2 == 0)
		{
			x = x - 2;
			cents++;
		}
		else
		{
			x = x - 1;
			cents++;
		}
	}
}
