#include "lists.h"
#include <stdio.h>

size_t nodesIfCycle(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * nodesIfCycle - returns the number of nodes in a cycled linked list
 * @head: head of the linked list
 * Return: number of nodes, if no cycle returns 0
 */
size_t nodesIfCycle(const listint_t *head)
{
	const listint_t *slowPtr;
	const listint_t *fastPtr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slowPtr = head->next;
	fastPtr = (head->next)->next;
	while (fastPtr)
	{
		if (slowPtr == fastPtr)
		{
			slowPtr = head;
			while (slowPtr != fastPtr)
			{
				nodes++;
				slowPtr = slowPtr->next;
				fastPtr = fastPtr->next;
			}

			slowPtr = slowPtr->next;
			while (slowPtr != fastPtr)
			{
				nodes++;
				slowPtr = slowPtr->next;
			}
			return (nodes);
		}
		slowPtr = slowPtr->next;
		fastPtr = (fastPtr->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a linked list (safe version)
 * @head: head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, i = 0;

	nodes = nodesIfCycle(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
