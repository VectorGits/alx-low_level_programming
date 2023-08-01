#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: List head.
 * @n: Int to be used.
 *
 * Return: address of new element, or NULL if failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *curs = *head;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
		return (NULL);
	else if (n_node != NULL)
	{
		n_node->n = n;
		n_node->next = NULL;
	}

	if (curs == NULL)
	{
		*head = n_node;
	}
	else if (curs != NULL)
	{
		curs = *head;
		while (curs->next != NULL)
		{
			curs = curs->next;
		}
		curs->next = n_node;
	}
	return (n_node);
}
