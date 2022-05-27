#include "lists.h"
/**
 * print_listint - prints the contents of a linked list
 * @h: head pointer
 *
 * Return: The number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int counter;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		counter = counter + 1;
		ptr = ptr->next;
	}
	return (counter);
}
