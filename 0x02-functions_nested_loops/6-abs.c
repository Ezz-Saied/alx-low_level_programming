#include "main.h"
/**
* _abs - retrutn absolute number
* @c: first operand
*
* Return: 0 or 1
*/
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
		return (c);
	}
	return (c);
}
