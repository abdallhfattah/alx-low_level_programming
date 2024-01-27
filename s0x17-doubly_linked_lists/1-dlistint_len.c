#include "lists.h"

size_t dlistint_len(const dlistint_t *head)
{
	dlistint_t *current = head;
	size_t count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return count;
}