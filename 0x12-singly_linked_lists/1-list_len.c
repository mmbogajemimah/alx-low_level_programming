#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - Returns number of elements in a linked list
 * @h:  pointer to head
 *
 * Return: Returns number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *ptr;
	int counter;

	counter = 0;
	if (h == NULL)
	{
		return (1);
	}
	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
