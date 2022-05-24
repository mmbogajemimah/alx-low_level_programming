#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints elems in a node
 * @h: head pointer
 *
 * Return: Number of elems in the node
 */
size_t print_list(const list_t *h)
{
	int counter;

	counter = 0;
	if (h == NULL)
	{
		return (1);
	}
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
