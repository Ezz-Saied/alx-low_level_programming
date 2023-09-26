#include "lists.h"
#include <stdlib.h>
/**
* free_listint2 - checks letters in lower case
* @head: first operand
*
*/
void free_listint2(listint_t **head)
{
	listint_t *test;

	while (*head != NULL)
	{
		test = (*head)->next;
		free(*head);
		*head = test;
	}
	*head = NULL;
}
