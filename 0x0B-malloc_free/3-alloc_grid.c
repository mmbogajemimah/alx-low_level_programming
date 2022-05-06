#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - Constructs a multidimensional array
 * @width: Columns
 * @height: Rows
 *
 * Return: Returns Multidimensional Array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr[i]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);

	for (i = 0; i < height; i++)
	{
		free(arr[i]);
	}
	free(arr);
}
