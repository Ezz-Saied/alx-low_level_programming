#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n = n % 10;
	if (n > 5)
		printf("is %d and is greater than 5\n", n);
	else if (n == 0)
		printf("is %d and is %d \n", n, n);
	else
	{
		printf("is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}
