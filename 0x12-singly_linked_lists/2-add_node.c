#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node in a linked list
 * @head: position to add
 * @str: string to add
 * Return: Returns added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (str == NULL)
	{
		ptr->str = "(nil)";
		ptr->len = 0;
	}
	else
	{
		ptr->str = strdup(str);
		ptr->len = strlen(str);
	}
	ptr->next = (*head);
	*head = ptr;

	return (ptr);
	free(ptr);
}
