#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: head of list
 *
 * Return: data in head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	return (n);
}
