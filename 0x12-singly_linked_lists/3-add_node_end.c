#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t
 * @head: Head of linked list
 * @str: Sring to get input data
 *
 * Return: address of new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	size_t s;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);


	n_node->str = strdup(str);

	for (s = 0; str[s]; s++)
		;

	n_node->len = s;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	} else
	{
		list_t *current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = n_node;
	}

	return (n_node);
}
