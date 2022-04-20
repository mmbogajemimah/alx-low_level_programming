#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps two integers
 * @a: a pointer to be swapped by b
 * @b: a pointer to be swapped by a
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
