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

	if (head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	return (temp->n);
}
