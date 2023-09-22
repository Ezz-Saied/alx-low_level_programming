#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* add_node - adding nodes
* @head: first operand
* @str: second operand
*
* Return: node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
