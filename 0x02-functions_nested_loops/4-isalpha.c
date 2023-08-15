#include "main.h"
/**
* _isalpha - checks if input is letter or not
* @c: first operand
*
* Return: 0 or 1
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
