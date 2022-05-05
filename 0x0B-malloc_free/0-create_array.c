#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes with specific char
 * @size: size of array
 * @c: character to initialize
 *
 * Return: returns a string
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *str = (char *)malloc(size * sizeof(char));
		unsigned int i;

		if (str == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			str[i] = c;
		}
		return (str);
		free(str);
	}
}
