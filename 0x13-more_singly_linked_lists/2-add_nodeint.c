#include "lists.h"

/**
 * add_nodeint - add node at beginning of linked list
 * @head: double pointer to head of list
 * @n: integer to be added to list
 *
 * Return: address of new element, NULL on failure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
