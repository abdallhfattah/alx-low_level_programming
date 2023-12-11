#include "lists.h"
/**
 * sum_listint - sums the data of a linked list
 * @head: head of the linked list
 * Return: the sum of the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
