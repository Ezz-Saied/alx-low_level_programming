#include "main.h"
/**
* positive_or_negative - checks letters in lower case
* @i: first operand
*
*/
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
