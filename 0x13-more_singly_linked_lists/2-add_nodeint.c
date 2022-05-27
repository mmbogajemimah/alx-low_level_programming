#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: pointer to pointer to head
 * @n: integer
 *
 * Return: the head pointer of the linked list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
