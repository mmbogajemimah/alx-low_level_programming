#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers in array
 * @separator: Separates integers
 * @n: number of variables
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;
	va_list list;

	num = 0;
	if (n == 0)
	{
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, int);
		if (i == n - 1)
		{
			printf("%d", num);
		}
		else
			printf("%d%s", num, separator);
	}
	printf("\n");
	va_end(list);
}
