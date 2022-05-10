#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: number of elements in an array
 * @size: size in bytes of the elements
 *
 * Return: void pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(nmemb * size);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		str[i] = 0;
	}
	return (str);
	free(str);
}
