#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at given position
 * @head: head of linked list
 * @idx: index of the list where new node should be added
 * @n: data to be added
 *
 * Return: poitner to new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	unsigned int i;

	if (idx == 0)
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	i = 0;
	temp = *head;
	while (temp != NULL && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}
	if (i == (idx - 1))
	{
		newnode = malloc(sizeof(listint_t));
		if (newnode == NULL)
			return (NULL);
		newnode->n = n;
		newnode->next = temp->next;
		temp->next = newnode;
		return (newnode);
	}
	return (NULL);
}
