#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a linked list
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	if (h == NULL)
		return (size);
	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
