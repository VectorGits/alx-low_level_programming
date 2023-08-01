#include "lists.h"

/**
 * sum_listint - returns the sum of all data (n) of list.
 * @head: Ptr to list header
 *
 * Return: if empty 0
 */
int sum_listint(listint_t *head)
{
	int addup;

	addup = 0;

	while (head)
	{
		addup = addup + head->n;
		head = head->next;
	}

	return (addup);
}
