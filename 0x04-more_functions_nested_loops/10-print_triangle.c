#include "main.h"
#include <stdio.h>
/**
 * print_triangle - print triangle using *size* numbers of '#'
 * @size: number of '#' to print
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i, j, k = 1;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= size - k)
					putchar('#');
				else
					putchar(' ');
			}
		k += 1;
		putchar('\n');
		}
	}
	else
		putchar('\n');
}
