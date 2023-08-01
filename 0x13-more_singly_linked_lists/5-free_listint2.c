#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: List head.
 *
 * Return: 1 or 0
 */

void free_listint2(listint_t **head)
{
	listint_t *cur;

	if (head == NULL)
		return;


	while (*head)
	{
		cur = *head;
		(*head)->next = *head;
		free(cur);
	}

	head = NULL;
}
