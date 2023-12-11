#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: head of the linked list
 * @index: index of the node to be returned
 * Return: return the nth node, NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;

	while (current && index--)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);
	return (current);
}
