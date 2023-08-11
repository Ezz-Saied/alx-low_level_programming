#include <stdio.h>
/**
* main - Entry point
*
* Description: print alphabet except q and e
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char a, b;

	b = '\n';
	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
			a++;
		putchar(a);
	}
	putchar(b);
	return (0);
}
