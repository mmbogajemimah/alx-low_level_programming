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
	int range, i, j;
	int *numbers;

	if (min > max)
	{
		return (NULL);
	}
	range = (max - min) + 1;
	numbers = malloc(range * (sizeof(int)));

	if (numbers == NULL)
	{
		free(numbers);
		return (NULL);
	}
	i = min;
	while (j < range)
	{
		numbers[j] = i;
		i++;
		j++;
	}
	return (numbers);
	free(numbers);
}
