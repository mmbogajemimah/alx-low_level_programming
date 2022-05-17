#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: number of variable inputs
 *
 * Return: Returns Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char*);
		if (separator == NULL)
			separator = "";
		if (str == NULL)
			printf("nil");
		if (i == n - 1)
			printf("%s", str);
		else
			printf("%s%s", str, separator);
	}
	printf("\n");
	va_end(list);
}
