#include "lists.h"

/**
 * free_listint - Frees a linked list
 * @head: pointer to linked list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head->next != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
	free(head);
	head = NULL;
}
