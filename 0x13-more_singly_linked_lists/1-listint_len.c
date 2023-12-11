#include "lists.h"
/**
 * listint_len - function returns the number of elements in a given linked list
 * @h: pointer to the head of the linked list
 * Return: size of the linkedl ist (number of elements)
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
