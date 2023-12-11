#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the head of the linked list
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current;
	listint_t *before_current = NULL;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		current = (*head)->next;
		(*head)->next = before_current;
		before_current = (*head);
		(*head) = current;
	}
	(*head) = before_current;
	return (*head);
}
