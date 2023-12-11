#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - safely frees a linked list
 * @h: pointer to the head of the linked list
 * Return: the number of freed elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	int difference;
	listint_t *current;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		difference = (*h) - (*h)->next;
		if (difference > 0)
		{
			current = (*h)->next;
			free(*h);
			(*h) = current;
			n++;
		}
		else
		{
			free(*h);
			*h = NULL;
			n++;
			break;
		}
	}
	(*h) = NULL;
	return (n);
}
