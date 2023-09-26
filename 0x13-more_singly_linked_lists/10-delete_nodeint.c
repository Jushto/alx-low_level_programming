#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in teh list
 * @head: head of linked list
 * @index: target index
 *
 * Return: 1 if successful; -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	prev = NULL;
	current = *head;
	i = 0;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);
	return (1);
}
