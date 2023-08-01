#include "lists.h"

/**
 * insert_nodeint_at_index - adds new node to linked index.
 * @head: list head pointer
 * @idx: list index where node will be added
 * @n: value for added new node
 *
 * Return: a pointer to new node, else NULL on failure.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *cur = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = cur;
		*head = new;
		return (new);
	}


	for (node = 0; node < (idx - 1); node++)
	{
		if (cur == NULL || cur->next == NULL)
			return (NULL);

		cur = cur->next;
	}

	new->next = cur->next;
	cur->next = new;

	return (new);
}
