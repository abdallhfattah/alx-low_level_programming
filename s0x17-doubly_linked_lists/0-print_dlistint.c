#include "lists.h"

/**
 * print_dlistint - prints content of a double linked list
 * @h: head of the dlinked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}

	return (l);
}