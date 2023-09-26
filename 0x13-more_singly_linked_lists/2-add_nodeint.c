#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* add_nodeint - checks letters in lower case
* @head: first operand
* @n: second operand
*
* Return: size_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
