#include "lists.h"

/**
 * add_node - adds new node at beginning of list_t
 * @str: A string to store in the list
 * @head: Linked list head
 *
 * Return: Head address
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
		return NULL;

	list_t *n_node = (list_t *)malloc(sizeof(list_t));
	if (n_node == NULL)
		return NULL;

	n_node->str = strdup(str);
	if (n_node->str == NULL)
	{
		free(n_node);
		return NULL;
	}

	n_node->next = *head;
	return (*head);
}
