#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Calculates the number of elements in a linked list
 * @s: A pointer to the list_t list
 *
 * Return: Returns the count of elements in the list
 */
size_t list_len
(const list_t *s)
{
	size_t count = 0;

	while (s)
	{
		count++;
		s = s->next;
	}

	return (count);
}

