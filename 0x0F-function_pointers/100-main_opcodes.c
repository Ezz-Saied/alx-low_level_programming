#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
* @argc: first operand
* @argv: second operand
*
* Return: always  success
*/
int main(int argc, char *argv[])
{
	int i, bytes;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i <  bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == bytes - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
