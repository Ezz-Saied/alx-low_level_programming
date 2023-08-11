#include <stdio.h>
/**
* main - Entry point
*
* Description: print hexadecimal numbers
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int hex;

	char let;

	for (hex = 48; hex <= 57; hex++)
		putchar(hex);
	for (let = 'a'; let <= 'f'; let++)
		putchar(let);
	putchar('\n');
	return (0);
}
