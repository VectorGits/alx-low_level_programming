#include "lists.h"

/**
 * add_node - adds new node at beginning of list_t
 * @str: A string to store in the list
 * @head: Pointer to first node
 *
 * Return: The address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	size_t s;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);

	for (s = 0; str[s]; s++);

	n_node->len = s;
	n_node->next = *head;
	*head = n_node;

	return n_node;
}
