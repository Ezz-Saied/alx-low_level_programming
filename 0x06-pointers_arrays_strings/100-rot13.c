#include "main.h"
/**
* rot13 - func
* @hi: var
*
* Return: String
*/
char *rot13(char *hi)
{
	int index, count;
	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; hi[index] != '\0'; ++index)
	{
		for (count = 0; minus[count] != '\0' ; count++)
		{
			if (hi[index] == minus[count])
			{
				hi[index] = mayus[count];
				break;
			}
		}
	}
	hi[index] = '\0';
	return (hi);
}
