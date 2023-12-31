#include "lists.h"

/**
 * free_listint2 - free a list and set head to NULL.
 *
 * @head: the head.
 */
void free_listint2(listint_t **head)
{
	listint_t *li = NULL;

	if (!head)
		return;

	while (*head)
	{
		li = *head;
		*head = (*head)->next;
		free(li);
	}

	if (*head)
		*head = NULL;
}
