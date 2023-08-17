#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */
/**
* positive_or_negative - cheks negative or pisitive
* @n: first operand
*
* Return: Always 0 (Success)
*/
void positive_or_negative(int n)
{
	/*
	* check if n is positive or nigative or zero
	*
	**/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
	{
		printf("%d is zero\n", n);
	}
}
