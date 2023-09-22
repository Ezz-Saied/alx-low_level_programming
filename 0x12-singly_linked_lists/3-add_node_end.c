#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - Add new node
* @head: head
* @str: string
*
* Return: pointer
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	temp = *head;
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
	return (new);
}
