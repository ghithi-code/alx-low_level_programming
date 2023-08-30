#include "lists.h"

/**
 * sum_listint - all data sum
 * @head: pointer to the first node
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{


	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);

}
