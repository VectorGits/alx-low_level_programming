#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Head node.
 * Return: Nuffin :)
 */

void free_list(list_t *head)
{
	list_t *cur = head;

	while (cur != NULL)
	{
		head = head->next;
		free(cur->str);
		free(cur);
	}
}
