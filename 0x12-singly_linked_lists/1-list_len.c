#include "lists.h"

/**
 * list_len - Prints the number of elements in list_t.
 * @h: A singly linked list.
 *
 * Return: no of elements in list.
 */

size_t list_len(const list_t *h)
{
	size_t node_no;

	node_no = 0;
	while (h != NULL)
	{
		h = h->next;
		node_no++;
	}
	return (node_no);
}
