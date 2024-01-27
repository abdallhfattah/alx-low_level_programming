#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a certain index
 * @head: head of the list
 * @index: the index of the element
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (index == i)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
