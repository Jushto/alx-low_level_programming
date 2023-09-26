#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: pointer to head of linked list
 * sets head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
