#include "search_algos.h"

/**
  * binary_search - Searching array with binary search
  * @array: Input array
  * @size: size of array
  * @value: Target value
  *
  * Return: Index of value if present else -1
  *
  * Description: Prints part of array being searched
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
