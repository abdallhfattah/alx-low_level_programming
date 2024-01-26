#include "lists.h"
/**
 * print_dlistint - print each element in the doubly linked list
 * @h: head of the linked list
 * Return: number of elements in the doubly linked list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int elements = 0;
	while (current != NULL)
	{
		printf("%d \n", current->n);
		elements++;
		current = current->next;
	}
	return elements;
}