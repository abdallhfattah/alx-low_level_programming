#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - the function adds a new node at the begging of a linked list
 * @head: a pointer to the head pointer
 * @n: the int value of the node
 * Return: returns the address of the new element, NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
