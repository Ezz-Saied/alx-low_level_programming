#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there*/
/**
* main - Entry point
* git the last digit of a number
* Return: Always 0 (Sucess)
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (n == 0)
		printf("Last digit of %d is %d and is %d \n", n, last, last);
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	return (0);
}
