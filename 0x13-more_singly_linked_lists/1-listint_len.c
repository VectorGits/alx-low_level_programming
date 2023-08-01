#include "lists.h"

/**
 * listint_t - Returns the number of elements in a linked listint_t
 * @h: list head.
 *
 * Return: no of elements.
 */

size_t listint_len(const listint_t *h)
{
	const listint_len *babe = h;
	size_t count = 0;

	while (babe != NULL)
	{
		count++;
		babe = babe->n;
	}
	return (count);
}
