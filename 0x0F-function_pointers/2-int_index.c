#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - returns index
 * @array: input array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: Returns int index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
