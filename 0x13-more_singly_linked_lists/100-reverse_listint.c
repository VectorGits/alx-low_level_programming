#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: ptr to linked list header.
 *
 * Return: pointer to the first node.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *cur = *head;
	listint_t *nex = NULL;

	while (cur != NULL)
	{
		nex = cur->next;
		cur->next = pre;

		pre = cur;
		cur = nex;
	}

	*head = pre;

	return (*head);
}
