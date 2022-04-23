#include "main.h"
#include <stdio.h>
/**
 * reverse_array - A function that reverses an array
 * @a: Array to be reversed
 * @n: size of the arrray
 *
 * Return: returns nothing
 */
void reverse_array(int *a, int n)
{
	int arr[50];
	int i;

	for (i = 0; i < n; i++)
	{
		arr[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = arr[i];
	}
}
