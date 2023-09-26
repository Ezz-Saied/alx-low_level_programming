#include "lists.h"
#include <stdlib.h>
/**
* reverse_listint - checks letters in lower case
* @head: first operand
*
* Return: listint_t
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front;
	listint_t *back;

	front = NULL;
	back = NULL;
	while (*head != NULL)
	{
		back = (*head)->next;
		(*head)->next = front;
		front = *head;
		*head = back;
	}
	*head = front;
	return (*head);
}
