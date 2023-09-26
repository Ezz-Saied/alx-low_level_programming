#include "lists.h"
#include <stdio.h>
/**
* listint_len - checks letters in lower case
* @h: first operand
*
* Return: size_t
*/
size_t listint_len(const listint_t *h)
{
	size_t n_elements;

	n_elements = 0;
	while (h != NULL)
	{
		n_elements++;
		h = h->next;
	}
	return (n_elements);
}
