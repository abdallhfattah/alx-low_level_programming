#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list
 * @head: pointer to the head
 * @str: string of the node
 * Return: address of the new element, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *node;

	while (str[length])
		length++;

	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	node->len = length;
	node->next = (*head);
	(*head) = node;

	return (*head);
}
