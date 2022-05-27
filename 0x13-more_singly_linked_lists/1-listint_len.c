#include "lists.h"
/**
 * listint_len - Prints the number of nodes in a linked list
 * @h: head pointer
 *
 * Return: Returns the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = NULL;
	int counter;

	counter = 0;
	ptr = h;
	while (ptr != NULL)
	{
		counter = counter + 1;
		ptr = ptr->next;
	}
	return (counter);
}
