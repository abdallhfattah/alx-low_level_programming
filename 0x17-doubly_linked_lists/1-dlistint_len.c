#include "lists.h"

/**
 * dlistint_len - returns number of elements in a dlinked lis
 * @h: head of the linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
