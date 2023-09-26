#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint_end - checks letters in lower case
* @head: first operand
* @n: second operand
*
* Return: size_t
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *test;

	last = malloc(sizeof(listint_t));
	if (last == NULL)
		return (NULL);
	last->n = n;
	last->next = NULL;
	test = *head;
	if (*head == NULL)
		*head = last;
	else
	{
		while (test->next != NULL)
			test = test->next;
		test->next = last;
	}
	return (*head);
}
