#include "lists.h"
#include <stdlib.h>
/**
* get_nodeint_at_index - checks letters in lower case
* @head: first operand
* @index: second
* Return: listint_t
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
