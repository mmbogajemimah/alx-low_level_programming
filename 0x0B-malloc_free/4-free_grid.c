#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees Dynamically allocated memory
 * @grid: pointer to pointer
 * @height: height of grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
