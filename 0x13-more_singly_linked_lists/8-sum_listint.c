#include "lists.h"
/**
 * sum_listint - Sum of integers in the nodes
 * @head: pointer to head
 * Return: Returns sum
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum = sum + ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
