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
	va_list list;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == NULL)
	{
		separator = "";
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(list, int));
		}
		else
		{
			printf("%d%s", va_arg(list, int), separator);
		}
	}
	printf("\n");
	va_end(list);
}
