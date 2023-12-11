#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - the function deletes the head node of a linked list
 * @head: pointer to the pointer of the linked list head
 * Return: returns the head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;

	return (data);
}
