#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *nextnode;

	nextnode = *head;
	prevnode = NULL;

	while (nextnode != NULL)
	{
		nextnode = nextnode->next;
		(*head)->next = prevnode;
		prevnode = (*head);
		(*head) = nextnode;
	}
	if (nextnode == NULL)
		(*head) = prevnode;
	return (*head);
}
