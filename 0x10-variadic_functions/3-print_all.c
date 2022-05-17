#include "variadic_functions.h"
#include <string.h>
#include <stdarg.h>
/**
 * print_all - a function that prints anything
 * @format: format to print
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j;
	va_list list;
	char *str, *conditions = "cifs";

	va_start(list, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
					printf("(nil)");
				printf("%s", str);
				break;
			default:
				i = i + 1;
				continue;
				break;
		}
		j = 0;
		while (conditions[j])
		{
			if (conditions[j] == format[i] && i < strlen(format) - 1)
				printf(", ");
			j = j + 1;
		}
		i = i + 1;
	}
	printf("\n");
	va_end(list);
}
