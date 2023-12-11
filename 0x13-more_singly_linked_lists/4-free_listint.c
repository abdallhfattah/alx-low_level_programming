#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - the functoin frees a linked list
 * @head: head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (head)
	{
		current = current->next;
		free(head);
		head = current;
	}
}
