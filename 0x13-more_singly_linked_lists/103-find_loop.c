#include "lists.c"

/**
 * find_listint_loop - Finds loop in linked list.
 * @head: ptr to linked list header
 *
 * Return: address of nodes where loop starts, Null if no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	if (head == NULL || head->next == NULL)
	{
		return NULL;
	}

	listint_t *n1;
	listint_t *n2;

	n1 = head->next;
	n2 = (head->next)->next;

	while (n2)
	{
		if (n1 == n2)
		{
			n1 = head;

			while (n1 != n2)
			{
				n1 = n1->next;
				n2 = n2->next;
			}

			return (n1);
		}

		n1 = n1->next;
		n2 = (n2->next)->next;
	}
	return (NULL);
}
