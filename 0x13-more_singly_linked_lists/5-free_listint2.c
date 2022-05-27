#include "lists.h"
/**
 * free_listint2 - Free list
 * @head: pointer to pointer to head
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *h;

	h = *head;
	if (h == NULL)
	{
		return;
	}
	else
	{
		while (h->next != NULL)
		{
			current = h;
			h = h->next;
			free(current);
		}
	}
	free(h);
	h = NULL;
}
