#include "lists.h"
#include <stdlib.h>
/**
* free_listint - checks letters in lower case
* @head: first operand
*
*/
void free_listint(listint_t *head)
{
	listint_t *test;

	while (test != NULL)
	{
		test = head->next;
		free(head);
		head = test;
	}
}
