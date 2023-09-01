#include <stdio.h>
#include <stdlib.h>
int calc_cents(int x);
/**
* main - Entry point
* @argc: describe the parameter
* @argv: seond operand
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int x, res;

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
	x = atoi(argv[1]);
	res = calc_cents(x);
	printf("%d\n", res);
	return (0);
}
/**
* calc_cents - return n of cents
* @x: first operand
*
* Return: n of cents
*/

int calc_cents(int x)
{
	int cents = 0;

	while (x >= 25)
	{
		x -= 25;
		cents++;
	}
	while (x >= 10)
	{
		x -= 10;
		cents++;
	}
	while (x >= 5)
	{
		x -= 5;
		cents++;
	}
	while (x >= 2)
	{
		x -= 2;
		cents++;
	}
	if (x == 1)
		cents++;
	return (cents);
}
