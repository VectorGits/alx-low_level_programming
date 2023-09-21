#include "lists.h"

/**
 * print_list - Prints all elements in the list_t.
 * @h: A singly linked list.
 * Return: No of elements in list.
 */

size_t print_list(const list_t *h)
{
	size_t babe;

	babe = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		babe++;
	}
	return (babe);
}
