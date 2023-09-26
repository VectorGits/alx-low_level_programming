#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t
 * @h: list head.
 *
 * Return: no of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *babe = h;
	size_t count = 0;

	while (babe != NULL)
	{
		count += 1;
		babe = babe->next;
	}
	return (count);
}
