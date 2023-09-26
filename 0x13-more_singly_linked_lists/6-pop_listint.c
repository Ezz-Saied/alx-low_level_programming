#include "lists.h"
#include <stdlib.h>
/**
* pop_listint - checks letters in lower case
* @head: first operand
*
* Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *test;
	int var;

	if (!head || !*head)
		return (0);

	var = (*head)->n;
	test = (*head)->next;
	free(*head);
	*head = test;

	return (var);
}
