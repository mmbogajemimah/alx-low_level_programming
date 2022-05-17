#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums inputs
 * @n: number of inputs
 *
 * Return: Returns sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum;
	va_list list;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}
	return (sum);
}
