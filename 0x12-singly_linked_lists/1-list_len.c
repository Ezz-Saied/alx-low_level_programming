#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
* list_len - function
* @h: first operand
*
* Return: number of elements in the linked list.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
