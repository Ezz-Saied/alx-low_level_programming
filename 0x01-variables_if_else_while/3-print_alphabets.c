#include <stdio.h>
/**
* main - Entry point
*
* Description: print alphabet in lower and upper
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char a, b;

	b = '\n';
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar(b);
	return (0);
}
