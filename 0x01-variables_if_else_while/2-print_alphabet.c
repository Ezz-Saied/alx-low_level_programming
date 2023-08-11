#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	char n, s;

	/* your code goes there */
	s = '\n';
	for (n = 'a'; n <= 'z'; n++)
		putchar(n);
	putchar(s);
	return (0);
}
