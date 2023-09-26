#include "lists.h"
#include <stdio.h>

int main(void)
{
	listint_t *head, *node;

	head = NULL;
	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 5);
	add_nodeint(&head, 6);
	print_listint(head);
	node = get_nodeint_at_index(head, 19);
	printf("no. in node 5 is: %d\n", node->n);
	return (0);
}
