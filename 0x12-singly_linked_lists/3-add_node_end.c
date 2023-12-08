#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds new node at the end of a list
 * @head: pointer to head of a list
 * @str: string of the new node
 * Return: the address of the new element, NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *node;
	list_t *temp = *head;

	while (str[length])
		length++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = length;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = node;
	return (node);
}
