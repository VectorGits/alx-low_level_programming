#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list.
 * @head: list head ptr
 * @index: Node to be deleted.
 *
 * Return: 1 if succeeds, else -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *cop = *head;
	unsigned int node;

	if (cop == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cop);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cop->next == NULL)
			return (-1);

		cop = cop->next;
	}

	cur = cop->next;
	cop->next = cur->next;
	free(cur);
	return (1);
}
