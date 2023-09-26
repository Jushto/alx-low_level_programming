#include "lists.h"
#include <stdio.h>

int main(void)
{
	listint_t *head;
	int sum;

	head = NULL;
	/*add_nodeint_end(&head, 5);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 10);
	add_nodeint_end(&head, 7);
	print_listint(head);*/
	sum = sum_listint(head);
	printf("Sum is: %d\n", sum);
	return (0);
}
