#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * *add_node - Adds a new node to the beginning of a linked list
 * @head: Double pointer to the list_t list
 * @str: New string to be stored in the node
 *
 * Returns: Address of the newly added element, or NULL if allocation fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int str_length = 0;

	while (str[str_length])
		str_length++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = str_length;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}

