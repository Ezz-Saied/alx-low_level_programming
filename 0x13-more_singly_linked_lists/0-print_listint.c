#include "lists.h"
#include <stdio.h>
/**
* print_listint - checks letters in lower case
* @h: first operand
*
* Return: size_t
*/
size_t print_listint(const listint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;;
	}
	return (n_nodes);

}
