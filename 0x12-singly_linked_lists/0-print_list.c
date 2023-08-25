#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function to display the contents of a linked list
 * @h: A pointer to the list_t list we want to display
 *
 * Return: The total count of nodes displayed
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count);
}
