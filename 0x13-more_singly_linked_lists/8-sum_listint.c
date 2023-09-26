#include "lists.h"
#include <stdlib.h>
/**
* sum_listint - checks letters in lower case
* @head: first operand
*
* Return: int
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
