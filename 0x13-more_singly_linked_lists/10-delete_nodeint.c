#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *before_current;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current = current->next;
		free(*head);
		*head = current;
		return (1);
	}

	while (current && index--)
	{
		before_current = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);

	before_current->next = current->next;
	free(current);
	return (1);
}
