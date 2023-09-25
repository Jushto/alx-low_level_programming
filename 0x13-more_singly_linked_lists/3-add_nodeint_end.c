#include "lists.h"

/**
 * add_nodeint_end - function to add node at end of function
 * @head: head of linked list
 * @n: integer to be added
 *
 * Return: address to head; or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *h;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	h = *head;
	while (h->next != NULL)
		h = h->next;

	h->next = temp;

	return (*head);
}
