#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function to display the contents of a linked list
 * @r: A pointer to the list_t list we want to display
 *
 * Return: The total count of nodes displayed
 */
size_t print_list(const list_t *r)
{
	size_t count = 0;

	while (r)
	{
		if (!r->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", r->len, r->str);

		r = r->next;
		count++;
	}

	return (count);
}
