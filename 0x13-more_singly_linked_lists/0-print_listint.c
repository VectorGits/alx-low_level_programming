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

	while (size_t != NULL)
	{
		printf("%d\n", babe->p);
		count = count + 1;
		babe = babe->next;
	}
	return (babe);
}
