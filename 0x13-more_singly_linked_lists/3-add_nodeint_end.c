#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - the funtion adds a new node at the end of a linked list
 * @head: pointer to the head of the linked list
 * @n: the value of the new node
 * Return: the address of the new element, NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next)
		current = current->next;

	current->next = new_node;
	return (new_node);
}

