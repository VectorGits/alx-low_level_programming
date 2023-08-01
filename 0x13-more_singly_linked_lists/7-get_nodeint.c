#include "lists.h"

/**
 * get_nodeint_at_index - finds a given node in the linked list
 * @head: list head pointer
 * @index: Index of node to be found
 *
 * Return: Pointer to node, or NULL if node is non-existent.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
		head = head->next;

	if (index > n)
		return (NULL);

	return (head);
}
