#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Calculates the number of elements in a linked list
 * @h: A pointer to the list_t list
 *
 * Result: Returns the count of elements in the list
 */
size_t list_len
(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

