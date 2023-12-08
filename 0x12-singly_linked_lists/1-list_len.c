#include "lists.h"
#include <stdio.h>
/**
 * list_len - return length of a linked list
 * @h: head of a linked list
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
