#include "lists.h"

/**
 * print_listint - Prints elements of listint_t
 * @h: List head
 *
 * Return: No of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *babe = h;
	size_t count = 0;

	while (babe != NULL)
	{
		printf("%d\n", babe->n);
		count = count + 1;
		babe = babe->next;
	}
	return (count);
}
