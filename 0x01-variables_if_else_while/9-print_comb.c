#include <stdio.h>
/**
* main - Entry point
*
* Description: print numbers with,
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num < 57)
			putchar(44);
		putchar(' ');
	}
	return (0);
}
