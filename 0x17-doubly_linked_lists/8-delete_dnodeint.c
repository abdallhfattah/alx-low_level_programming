#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head of the list
 * @index: index of the node
 * Return: status
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;

	if (*head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current == *head)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		if (current->next != NULL)
			current->next->prev = current->prev;
		current->prev->next = current->next;
	}
	free(current);
	return (1);
}
