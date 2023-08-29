#include "main.h"
/**
* _strstr - cheks for sub string
* @haystack: first operand
* @needle: second operand
*
* Return: pointer
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(needle + i) != '\0'; i++)
	{
		for (j = 0; *(haystack + j) != '\0'; j++)
		{
			if (*(needle + i) == *(haystack + j))
			{
				i++;
				if (*(needle + i) == '\0')
				{
					return (needle);

				}
			}
		}

	}
	return ('\0');
}

