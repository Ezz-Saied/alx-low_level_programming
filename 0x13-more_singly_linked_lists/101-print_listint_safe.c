#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_listint_safe - checks letters in lower case
* @head: first operand
*
* Return: size_t
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
