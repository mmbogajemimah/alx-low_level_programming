#include "lists.h"
/**
 * pop_listint - pops the first node in a linked list
 * @head: pointer to pointer to head
 *
 * Return: Data in popped out node
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	listint_t *current;

	int result;

	result = 0;
	if (*head == NULL)
	{
		return (0);
	}

	current = *head;
	result = current->n;
	h = current->next;
	free(current);
	*head = h;
	return (result);
}
