#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - iterates through an array
 * @array: array of characters or digits
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size == 0 || action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
