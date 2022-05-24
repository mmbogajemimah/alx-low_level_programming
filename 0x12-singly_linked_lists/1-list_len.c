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
	int counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
