#include "lists.h"

/**
 * pop_listint - deletes head node of list and returns data
 * @head: List head
 *
 * Return: 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *cur;
	int n;

	cur = *head;

	if (cur == NULL)
		return (0);

	*head = cur->next;
	n = cur->n;
	free(cur);
	return (n);
}
