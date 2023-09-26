#include "lists.h"

/**
 * reverse_listint - function to reverse linked list
 * @head: poitner to head of list
 *
 * Return: pointer to first node of reversed list
 */

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
