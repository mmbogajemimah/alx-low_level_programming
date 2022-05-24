#include "lists.h"

/**
 * add_node_end - add node to end of linked list
 * @head: node to append to
 * @str: string to add to node
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *ptr = *head;

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	if (str)
	{
		node->str = strdup(str);
		node->len = strlen(str);
		node->next = NULL;
	}

	if (*head == NULL)
	{
		*head = node;
	}

	else
	{
		while (ptr->next)
			ptr = ptr->next;

		ptr->next = node;

	}

	return (node);
	free(node);
}
