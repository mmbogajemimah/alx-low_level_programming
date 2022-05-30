#include "lists.h"
/**
 * reverse_listint - function of a reversed linked list
 * @head: pointer to pointer to head
 *
 * Return: Returns the pointer to the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode;
	listint_t *nextnode;

	prevnode = NULL;
	while (*head != NULL)
	{
		nextnode = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = nextnode;
	}
	*head = prevnode;
	return (*head);
}
