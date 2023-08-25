#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Deallocates memory used by a linked list
 * @start: list_t list to be deallocated
 */
void free_list(list_t *start)
{
	list_t *temporary;

	while (start)
	{
		temporary = start->next;
		free(start->str);
		free(start);
		start = temporary;
	}
}
