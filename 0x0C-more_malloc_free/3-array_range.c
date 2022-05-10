#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - Prints an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Returns an integer pointer
 */
int *array_range(int min, int max)
{
	int range, i;
	int *numbers;

	if (min > max)
	{
		return (NULL);
	}
	range = (max - min) + 1;
	numbers = malloc(range * (sizeof(int)));

	if (numbers == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < range; i++, min++)
	{
		numbers[i] = min;
	}
	return (numbers);
}
