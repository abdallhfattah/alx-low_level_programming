#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts new node at a position
 * @head: pointer to the head of the linked list
 * @idx: idx where the new node should be added
 * @n: value of the new node
 * Return: the address of the new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	if (idx == 0)
	{
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; current && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;
			return (new_node);
		}
		else
			current = current->next;
	}
	return (NULL);
}
