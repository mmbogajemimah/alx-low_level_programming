#include "lists.h"
/**
 * add_nodeint_end - Adds a node at the end of linked list
 * @head: pointer to pointer to head of linked list
 * @n: integer in data of node
 *
 * Return: head pointer to the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *temp;

	ptr = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
		free(temp);
	}
	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	return (*head);
}
