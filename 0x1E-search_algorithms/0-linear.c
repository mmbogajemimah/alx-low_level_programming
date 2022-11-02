#include "search_algos.h"

/**
 * linear_search - Performs a linear search on the array
 * @array: Array input
 * @size: size of the array
 * @value: Value to search for
 *
 * Return: Returns index of the value
 *
 * Description: Prints the values of the array anytime they get compared
 */


int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
