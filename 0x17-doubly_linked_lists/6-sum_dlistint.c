#include "lists.h"

/**
 * sum_dlistint - returns the sum of nodes' content
 * @head: head of the list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
