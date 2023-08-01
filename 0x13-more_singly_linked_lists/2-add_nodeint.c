#include "lists.h"

/**
 * add_nodeint - Adds new node at start of listint_t
 * @head: list head
 * @n: Int to be stored
 *
 * Return: address of new element, if fail - 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node == NULL)
	{
		return (NULL);
	}
	else
	{
		n_node->n = n;
		n_node->next = *head;
	}
	return (n_node);
}
