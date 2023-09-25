#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: head of the linked list
 * @index: index of the node
 *
 * Return: NULL if node does not exist, otherwise target node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	size_t i;

	temp = head;
	i = 0;

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (i == index)
		return (temp);
	else
		return (NULL);
}
